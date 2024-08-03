#include "interface.h"

#include <ft/fighter.h>
#include <it/item.h>
#include <gr/ground.h>
#include <gm/battle.h>
#include <sys/ml.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern void *gGMCommonFiles[/* */];

extern intptr_t D_NF_00000057;                              // 0x00000057
extern intptr_t D_NF_00000188;                              // 0x00000188
extern intptr_t D_NF_00000270;                              // 0x00000270

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

extern mlBumpAllocRegion gGeneralHeap;

extern u32 gMPCollisionBGMDefault;
extern s32 gCurrScreenWidth;
extern s32 gPixelComponentSize;
extern s32 gZBuffer;
extern GObj *gOMObjCurrentRendering; // Some kind of camera GObj

extern f32 gCMManagerPauseCameraEyeX;
extern f32 gCMManagerPauseCameraEyeY;

extern GObj *D_ovl2_80131A10; // I don't think these belong in this file
extern GObj *D_ovl2_80131A14;

extern sb32 cmManagerCheckTargetInBounds(f32, f32);
extern void func_ovl2_8010CF44(GObj*, f32, f32, f32, f32, f32);
extern alSoundEffect* func_800269C0_275C0(u16);
extern void func_8000BD8C_C98C(GObj*, void*, f32);
extern void func_ovl0_800CCF00(GObj*);
extern SObj* gcAppendSObjWithSprite(GObj*, Sprite*);
extern void auSetBGMVolume(u32, u32);
extern void func_80007080(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131590 - Padding?
// s32 sIFCommonPadding80131590[2];

// 0x80131598
ifPlayerDamage sIFCommonPlayerDamageInterface[GMBATTLE_PLAYERS_MAX];

// 0x80131748
ifPlayerMagnify sIFCommonPlayerMagnifyInterface[GMBATTLE_PLAYERS_MAX];

// 0x801317C8 - Values of digits displayed on the match timer
u8 sIFCommonTimerDigitsInterface[4];

// 0x801317CC - This might be part of another struct
s8 sIFCommonPlayerStocksNum[GMBATTLE_PLAYERS_MAX];

// 0x801317D0
GObj *sIFCommonPlayerStocksGObj[GMBATTLE_PLAYERS_MAX];

// 0x801317E0 - Identical to gBattleState->match_time_remain; the countdown timer adds one second once it has begun decrementing; s32 or u32?
u32 sIFCommonTimerLimit;

// 0x801317E4 - ID of player who paused
u8 sIFCommonBattlePausePlayer;

// 0x801317E5 - Poly-mode of pausing player?
u8 sIFCommonBattlePausePlayerLOD;

// 0x801317E6 - Number of frames the camera takes to revert to its pre-pause position
u16 sIFCommonBattlePauseCameraRestoreWait;

// 0x801317E8 - Eye X angle of camera before and after pausing
f32 sIFCommonBattlePauseCameraEyeXOrigin;

// 0x801317EC - Eye Y angle of camera before and after pausing
f32 sIFCommonBattlePauseCameraEyeYOrigin;

// 0x801317F0 - Sprite of red arrow indicator for grabbable items
Sprite *sIFCommonItemArrowSprite;

// 0x801317F4 - Number of unique teams in-game minus one?
s32 sIFCommonBattlePlacement;

// 0x801317F8 - Padding?
// s32 sIFCommonPadding801317F8;

// 0x801317FC
u32 D_ovl2_801317FC;

// 0x80131800
u32 sIFCommonTimerIsStarted; // Confirmed u32 by ifCommonBattleUpdateInterfaceAll

// 0x80131804 - Padding?
// s32 sIFCommonPadding80131804;

// 0x80131808 - Array of sound effect IDs to play on game end
u16 sIFCommonBattleEndSoundQueue[16];

// 0x80131828 - What kind of pause menu to display
u8 sIFCommonBattlePauseKindInterface;

// 0x80131829 - Number of sound effects queued to play on game end
u8 sIFCommonBattleEndSoundNum;

// 0x8013182C
void (*sIFCommonBattleInterfaceProcUpdate)();

// 0x80131830
void (*sIFCommonBattleInterfaceProcSet)();

// 0x80131834 - Padding?
// s32 sIFCommonPadding80131834;

// 0x80131838
ifPlayerSteal sIFCommonPlayerStealInterface[GMBATTLE_PLAYERS_MAX];

// 0x80131858
u8 sIFCommonPlayerMagnifySoundWait;

// 0x80131859
u8 D_ovl2_80131859;

// 0x8013185A
u8 D_ovl2_8013185A;

// 0x8013185C - Whether each second in the 5-second countdown before time-up has been announced
ub8 sIFCommonIsAnnouncedSecond[5];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012EBF0 - Width of each digit?
s32 dIFCommonPlayerDamageDigitWidths[/* */] =
{
    14,  9, 15, 14,
    15, 13, 15, 14,
    15, 15, 17, 20
};

// 0x8012EC20 -> 0x8012EC38 - Player HUD digit colors
u8 dIFCommonPlayerDamageDigitColorsR[/* */] = { 0xFF, 0xF0, 0xF0, 0xFF, 0xFF }; // Hope the padding works here

// 0x8012EC28
u8 dIFCommonPlayerDamageDigitColorsG[/* */] = { 0xF0, 0xFF, 0xF0, 0xFF, 0xFF };

// 0x8012EC30
u8 dIFCommonPlayerDamageDigitColorsB[/* */] = { 0xF0, 0xF0, 0xFF, 0xFF, 0xFF };

// 0x8012EC38 - Player HUD position X offsets
s32 dIFCommonPlayerDamagePositionOffsetsX[/* */] = { 55, 125, 195, 265 };

// 0x8012EC48
s32 dIFCommonPlayerScorePositionOffsetsX[/* */] = { 0, 0, 0, 0 }; // Bruh, what's the point then lol

// 0x8012EC58 - Player emblem position X offsets
s32 dIFCommonPlayerDamageEmblemOffsetsX[/* */] = { 3, 3, 3, 3 };

// 0x8012EC68 - Player emblem position Y offsets
s32 dIFCommonPlayerDamageEmblemOffsetsY[/* */] = { -3, -3, -3, -3 };

// 0x8012EC78 - Player emblem scale values
f32 dIFCommonPlayerDamageEmblemScales[/* */] = { 1.0F, 1.0F, 1.0F, 1.0F };

// 0x8012EC88 - Player stock icon X offsets (when stock count <= 6)
s32 dIFCommonPlayerStocksIconOffsetsX[/* */] = { -24, -24, -24 ,-24 };

// 0x8012EC98 - Player stock digit X offsets (when stock count > 6)
s32 dIFCommonPlayerStocksDigitOffsetsX[/* */] = { 4, 4, 4, 4 };

// 0x8012ECA8
u8 dIFCommonTrafficSpriteColorsR[/* */] = { 0xFE, 0xFF, 0x4B, 0xFF, 0xFF, 0x22, 0xFF, 0xFF, 0xFF };

// 0x8012ECB4
u8 dIFCommonTrafficSpriteColorsG[/* */] = { 0x0C, 0xA2, 0x64, 0x38, 0xA2, 0x66, 0xFF, 0xFF, 0xFF };

// 0x8012ECC0
u8 dIFCommonTrafficSpriteColorsB[/* */] = { 0x0C, 0x00, 0xFF, 0x38, 0x00, 0xFE, 0xFF, 0xFF, 0xFF };

// 0x8012ECCC
u8 dIFCommonTrafficGoBacklightR[/* */] = { 0x00, 0x6A };

// 0x8012ECD0
u8 dIFCommonTrafficGoBacklightG[/* */] = { 0x00, 0x6A };

// 0x8012ECD4
u8 dIFCommonTrafficGoBacklightB[/* */] = { 0x00, 0x95 };

// 0x8012ECD8
u8 dIFCommonTrafficGoShadowR[/* */] = { 0x00, 0x12 };

// 0x8012ECDC
u8 dIFCommonTrafficGoShadowG[/* */] = { 0x00, 0x12 };

// 0x8012ECE0
u8 dIFCommonTrafficGoShadowB[/* */] = { 0x00, 0x2E };

// 0x8012ECE4
ifTraffic dIFCommonTrafficSpriteData[/* */] =
{
    { 123, -13, 0x00 },
    { 140, -11, 0x01 },
    { 153, -11, 0x01 },
    { 166, -11, 0x01 },
    { 180, -15, 0x02 },
    { 107, -33, 0x03 },
    { 119,  21, 0x04 },
    { 132,  21, 0x04 },
    { 145,  21, 0x04 },
    { 162,  20, 0x05 },
    { 115, -26, 0x06 },
    { 131,  32, 0x07 },
    { 144,  32, 0x07 },
    { 157,  32, 0x07 },
    { 167,  23, 0x08 }
};

// 0x8012ED40
intptr_t dIFCommonTrafficSpriteOffsets[/* */] =
{
    &lIFCommonTrafficLampRedDim,     &lIFCommonTrafficLampYellowDim,     &lIFCommonTrafficLampBlueDim,
    &lIFCommonTrafficLampRedContour, &lIFCommonTrafficLampYellowContour, &lIFCommonTrafficLampBlueContour,
    &lIFCommonTrafficLampRedLight,   &lIFCommonTrafficLampYellowLight,   &lIFCommonTrafficLampBlueLight
};

// 0x8012ED64 - Announcer text: "GO!"
ifACharacter dIFCommonAnnounceGoSpriteData[/* */] =
{
    {  82, 93, &lIFCommonAnnounceGoLetterG       },
    { 144, 93, &lIFCommonAnnounceGoLetterO       },
    { 214, 93, &lIFCommonAnnounceGoSymbolExclaim }
};

// 0x8012ED7C
ifACharacter dIFCommonAnnounceSuddenDeathSpriteData[/* */] =
{
    {  74,  67, &lIFCommonAnnounceCommonLetterS       },
    { 102,  67, &lIFCommonAnnounceCommonLetterU       },
    { 132,  67, &lIFCommonAnnounceCommonLetterD       },
    { 163,  67, &lIFCommonAnnounceCommonLetterD       },
    { 193,  67, &lIFCommonAnnounceCommonLetterE       },
    { 217,  67, &lIFCommonAnnounceCommonLetterN       },
    {  83, 113, &lIFCommonAnnounceCommonLetterD       },
    { 113, 113, &lIFCommonAnnounceCommonLetterE       },
    { 135, 113, &lIFCommonAnnounceCommonLetterA       },
    { 165, 113, &lIFCommonAnnounceCommonLetterT       },
    { 192, 113, &lIFCommonAnnounceCommonLetterH       },
    { 227, 113, &lIFCommonAnnounceCommonSymbolExclaim }
};

// 0x8012EDDC
gsColorRGBPair dIFCommonAnnounceSuddenDeathSpriteColors = { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } };

// 0x8012EDE4
ifACharacter dIFCommonAnnounceTimeUpSpriteData[/* */] =
{
    {  45, 95, &lIFCommonAnnounceTimeUpLetterT },
    {  82, 95, &lIFCommonAnnounceTimeUpLetterI },
    { 100, 95, &lIFCommonAnnounceTimeUpLetterM },
    { 151, 95, &lIFCommonAnnounceTimeUpLetterE },
    { 195, 95, &lIFCommonAnnounceTimeUpLetterU },
    { 238, 95, &lIFCommonAnnounceTimeUpLetterP }
};

// 0x8012EE14
ifACharacter dIFCommonAnnounceGameSetSpriteData[/* */] =
{
    {  22, 95, &lIFCommonAnnounceGameSetLetterG },
    {  62, 95, &lIFCommonAnnounceGameSetLetterA },
    { 104, 95, &lIFCommonAnnounceGameSetLetterM },
    { 154, 95, &lIFCommonAnnounceGameSetLetterE },
    { 191, 95, &lIFCommonAnnounceGameSetLetterS },
    { 230, 95, &lIFCommonAnnounceGameSetLetterE },
    { 262, 95, &lIFCommonAnnounceGameSetLetterT }
};

// 0x8012EE4C
u16 dIFCommonFocusProcessIDs[/* */] =
{
    0x0016,
    0x000F,
    0x003C
};

// 0x8012EE54
s32 dIFCommonTimerDigitsSpritePositionsX[/* */] =
{
    232, 247, 273, 288
};

// 0x8012EE64 - Offset of twelve digits: numbers 0 through 9, % sign and H.P. text
intptr_t dIFCommonPlayerDamageDigitSpriteOffsets[/* */] =
{
    &lIFCommonPlayerDamageDigit0,
    &lIFCommonPlayerDamageDigit1,
    &lIFCommonPlayerDamageDigit2,
    &lIFCommonPlayerDamageDigit3,
    &lIFCommonPlayerDamageDigit4,
    &lIFCommonPlayerDamageDigit5,
    &lIFCommonPlayerDamageDigit6,
    &lIFCommonPlayerDamageDigit7,
    &lIFCommonPlayerDamageDigit8,
    &lIFCommonPlayerDamageDigit9,
    &lIFCommonPlayerDamageSymbolPercent,
    &lIFCommonPlayerDamageSymbolHP
};

// 0x8012EE94
intptr_t dIFCommonTimerDigitSpriteOffsets[/* */] =
{
    &lIFCommonTimerDigit0, 
    &lIFCommonTimerDigit1,
    &lIFCommonTimerDigit2, 
    &lIFCommonTimerDigit3,
    &lIFCommonTimerDigit4, 
    &lIFCommonTimerDigit5,
    &lIFCommonTimerDigit6, 
    &lIFCommonTimerDigit7,
    &lIFCommonTimerDigit8, 
    &lIFCommonTimerDigit9,
    &lIFCommonTimerSymbolColon, 
    &lIFCommonTimerSymbolSec,
    &lIFCommonTimerSymbolCSec
};

// 0x8012EEC8
intptr_t dIFCommonPlayerStockDigitSpriteOffsets[/* */] =
{
    &lIFCommonPlayerStockDigit0, 
    &lIFCommonPlayerStockDigit1, 
    &lIFCommonPlayerStockDigit2, 
    &lIFCommonPlayerStockDigit3,
    &lIFCommonPlayerStockDigit4, 
    &lIFCommonPlayerStockDigit5, 
    &lIFCommonPlayerStockDigit6, 
    &lIFCommonPlayerStockDigit7,
    &lIFCommonPlayerStockDigit8, 
    &lIFCommonPlayerStockDigit9, 
    &lIFCommonPlayerStockSymbolX
};

// 0x8012EEF8
Gfx dIFCommonPlayerArrowsGfx[/* */] =
{
    gsSPClearGeometryMode(G_ZBUFFER),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPSetBlendColor(0x00, 0x00, 0x00, 0x08),
    gsDPSetPrimColor(0, 0, 0xFF, 0x00, 0x00, 0x80),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
    gsSPEndDisplayList()
};

// 0x8012EF38 - Length of time units in order: minute tens, minute ones, second tens, second ones (in frames)
u16 dIFCommonTimerDigitsUnitLengths[/* */] = { I_MIN_TO_FRAMES(10), I_MIN_TO_FRAMES(1), I_SEC_TO_FRAMES(10), I_SEC_TO_FRAMES(1) };

// 0x8013EF40 - Unused?
u8 dIFCommonUnused8013EF40[/* */] = { 0x00, 0x01, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00 };

// 0x8012EF48
u16 dIFCommonAnnounceTimerVoiceIDs[/* */] = { 0x1D3, 0x1D5, 0x1D6, 0x1D7, 0x1D8 };

// 0x8012EF54
intptr_t dIFCommonBattlePausePlayerNumSpriteOffsets[/* */] =
{
    &lIFCommonBattlePausePlayerNum1P,
    &lIFCommonBattlePausePlayerNum2P,
    &lIFCommonBattlePausePlayerNum3P,
    &lIFCommonBattlePausePlayerNum4P
};

// 0x8012EF64
u8 dIFCommonPlayerMagnifyColorsR[/* */] = { 0xEF, 0x00, 0xFF, 0x00, 0xFF };

// 0x8012EF6C
u8 dIFCommonPlayerMagnifyColorsG[/* */] = { 0x0D, 0x00, 0xE1, 0xFF, 0xFF };

// 0x8012EF74
u8 dIFCommonPlayerMagnifyColorsB[/* */] = { 0x17, 0xFF, 0x00, 0x00, 0xFF };

// 0x8012EF7C
u8 dIFCommonPlayerTagSpriteColorsR[/* */] = { 0xED, 0x4E, 0xFF, 0x4E, 0xAC };

// 0x8012EF84
u8 dIFCommonPlayerTagSpriteColorsG[/* */] = { 0x36, 0x4E, 0xDF, 0xB9, 0xAC };

// 0x8012EF8C
u8 dIFCommonPlayerTagSpriteColorsB[/* */] = { 0x36, 0xE9, 0x1A, 0x4E, 0xAC };

// 0x8012EF94
u8 dIFCommonPlayerTagShadowColorsR[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012EF9C
u8 dIFCommonPlayerTagShadowColorsG[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012EFA4
u8 dIFCommonPlayerTagShadowColorsB[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012EFAC
intptr_t dIFCommonPlayerTagSpriteOffsets[/* */] =
{
    &lIFCommonPlayerTag1P, 
    &lIFCommonPlayerTag2P,
    &lIFCommonPlayerTag3P, 
    &lIFCommonPlayerTag4P,
    &lIFCommonPlayerTagCP, 
    &lIFCommonPlayerTagAlly
};

// 0x8012EFC4
ifPauseDecal dIFCommonBattlePauseDecalsSpriteData[/* */] =
{
    { &lIFCommonBattlePauseDecalPause,          { 232, 191 }, { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } } },
    { &lIFCommonBattlePauseDecalAButton,        {  99, 203 }, { { 0x00, 0x95, 0xFF }, { 0x00, 0x05, 0xC7 } } },
    { &lIFCommonBattlePauseDecalBButton,        { 122, 203 }, { { 0x36, 0xBF, 0x00 }, { 0x00, 0x30, 0x00 } } },
    { &lIFCommonBattlePauseDecalZTrigger,       { 145, 202 }, { { 0x80, 0x80, 0x80 }, { 0x21, 0x21, 0x21 } } },
    { &lIFCommonBattlePauseDecalRTrigger,       { 164, 203 }, { { 0x80, 0x80, 0x80 }, { 0x21, 0x21, 0x21 } } },
    { &lIFCommonBattlePauseDecalPlus,           { 113, 206 }, { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } } },
    { &lIFCommonBattlePauseDecalPlus,           { 136, 206 }, { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } } },
    { &lIFCommonBattlePauseDecalPlus,           { 155, 206 }, { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } } },
    { &lIFCommonBattlePauseDecalReset,          { 182, 205 }, { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } } },
    { &lIFCommonBattlePauseDecalSmashBall,      { 198, 191 }, { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } } },
    { &lIFCommonBattlePauseDecalArrows,         {  21,  19 }, { { 0xFF, 0x00, 0x00 }, { 0x00, 0x00, 0x00 } } },
    { &lIFCommonBattlePauseDecalControlStick,   {  31,  29 }, { { 0xFF, 0xFF, 0xFF }, { 0x14, 0x18, 0x11 } } },
    { &lIFCommonBattlePauseDecalLTrigger,       {  34, 203 }, { { 0x80, 0x80, 0x80 }, { 0x21, 0x21, 0x21 } } },
    { &lIFCommonBattlePauseDecalRetry,          {  51, 205 }, { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } } }
};

// 0x8012F0A4
gsRectangle dIFCommonBattlePauseBorderRectangle[/* */] =
{
    {  26,  24, 294,  26 },
    {  26,  24,  28, 199 },
    {  26, 197, 190, 199 },
    { 292,  24, 294, 199 },
    { 279, 197, 294, 199 }
};

// 0x8012F0F4
ifACharacter dIFCommonAnnounceFailureSpriteData[/* */] =
{
    {  77, 101, &lIFCommonAnnounceCommonLetterF },
    {  97, 101, &lIFCommonAnnounceCommonLetterA },
    { 130, 101, &lIFCommonAnnounceCommonLetterI },
    { 145, 101, &lIFCommonAnnounceCommonLetterL },
    { 167, 101, &lIFCommonAnnounceCommonLetterU },
    { 197, 101, &lIFCommonAnnounceCommonLetterR },
    { 225, 101, &lIFCommonAnnounceCommonLetterE }
};

// 0x8012F12C
gsColorRGBPair dIFCommonAnnounceFailureSpriteColors = { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0xFF } };

// 0x8012F134
ifACharacter dIFCommonAnnounceCompleteSpriteData[/* */] =
{
    {  46, 101, &lIFCommonAnnounceCommonLetterC       },
    {  71, 101, &lIFCommonAnnounceCommonLetterO       },
    { 104, 100, &lIFCommonAnnounceCommonLetterM       },
    { 143, 101, &lIFCommonAnnounceCommonLetterP       },
    { 168, 101, &lIFCommonAnnounceCommonLetterL       },
    { 189, 101, &lIFCommonAnnounceCommonLetterE       },
    { 212, 101, &lIFCommonAnnounceCommonLetterT       },
    { 237, 101, &lIFCommonAnnounceCommonLetterE       },
    { 267, 101, &lIFCommonAnnounceCommonSymbolExclaim }
};

// 0x8012F17C
gsColorRGBPair dIFCommonAnnounceCompleteSpriteColors = { { 0xFF, 0xFF, 0xFF }, { 0xFF, 0x00, 0x00 } };

// 0x8012F184
u16 dIFCommonAnnounceDefeatedVoiceIDs[/* */] = { 0x1F7, 0x1F8, 0x1F9, 0x1FA };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8010E690
void ifCommonPlayerDamageSetShowInterface(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sIFCommonPlayerDamageInterface); i++)
    {
        if (sIFCommonPlayerDamageInterface[i].interface_gobj != NULL)
        {
            sIFCommonPlayerDamageInterface[i].is_display_interface = TRUE;
        }
    }
}

// 0x8010E700 - Gets position of special character (% or H.P.) in damage display character array?
s32 ifCommonPlayerDamageGetSpecialArrayID(s32 damage, u8 *digits)
{
    u8 *digits_start = digits;
    s32 digit_update = 1;

    if (damage >= 10)
    {
        do
        {
            digit_update *= 10;
        }
        while ((damage / digit_update) >= 10);
    }
    do
    {
        *digits++ = damage / digit_update;

        damage %= digit_update;

        digit_update /= 10;
    }
    while (digit_update != 0);

    return digits - digits_start;
}

// 0x8010E7D4
s32 ifCommonPlayerDamageGetPercentArrayID(s32 damage, u8 *digits)
{
    s32 id = ifCommonPlayerDamageGetSpecialArrayID(damage, digits);

    digits[id] = 0xA;

    return id + 1;
}

// 0x8010E808
s32 ifCommonPlayerDamageGetHitPointsArrayID(s32 damage, u8 *digits)
{
    s32 id = ifCommonPlayerDamageGetSpecialArrayID(damage, digits);

    digits[id] = 0xB;

    return id + 1;
}

// 0x8010E83C
s32 ifCommonPlayerDamageGetDigitOffset(s32 digit_count, u8 *digit_ids)
{
    s32 i, offset = 0;

    for (i = 0; i < digit_count; i++)
    {
        offset += dIFCommonPlayerDamageDigitWidths[digit_ids[i]];
    }
    return offset;
}

// 0x8010E8F4
void ifCommonPlayerDamageUpdateDigits(GObj *interface_gobj)
{
    s32 player;
    ifDCharacter *ifchar;
    SObj *sobj;
    s32 damage_scale;
    s32 start_damage;
    s32 char_count;
    s32 hitpoints;
    s32 digit_id;
    s32 color_id; // I don't know
    s32 pos_adjust_wait;
    s32 flash_reset_wait;
    s32 unused[2];
    f32 scale;
    u8 digits[4];
    s32 sprite_id;
    f32 offset;
    s32 damage;
    f32 pos_x;

    player = ifGetPlayer(interface_gobj);
    damage = start_damage = gBattleState->players[player].stock_damage_all;

    if (damage > 999)
    {
        damage = 999;
    }
    scale = sIFCommonPlayerDamageInterface[player].scale;
    damage_scale = start_damage - sIFCommonPlayerDamageInterface[player].damage;

    if (damage_scale == 0)
    {
        if (scale == 1.0F)
        {
            return;
        }
    }
    else if (damage_scale < 0)
    {
        scale = 1.0F;
    }
    else
    {
        sIFCommonPlayerDamageInterface[player].pos_adjust_wait = 4;
        sIFCommonPlayerDamageInterface[player].flash_reset_wait = 1;

        scale = (damage_scale / 300.0F) + 1.0F;
    }
    pos_adjust_wait = sIFCommonPlayerDamageInterface[player].pos_adjust_wait;
    flash_reset_wait = sIFCommonPlayerDamageInterface[player].flash_reset_wait;

    if (flash_reset_wait != 0)
    {
        color_id = GMBATTLE_PLAYERS_MAX;
    }
    else color_id = player;

    if (gBattleState->players[player].ft_kind == nFTKindBoss)
    {
        hitpoints = 300 - damage;

        if (hitpoints < 0)
        {
            hitpoints = 0;
        }
        sIFCommonPlayerDamageInterface[player].char_display_count = char_count = ifCommonPlayerDamageGetHitPointsArrayID(hitpoints, digits);
    }
    else sIFCommonPlayerDamageInterface[player].char_display_count = char_count = ifCommonPlayerDamageGetPercentArrayID(damage, digits);

    pos_x = (ifCommonPlayerDamageGetDigitOffset(char_count, digits) * scale * 0.5F);

    pos_x = gIFPlayerCommonInterface.ifplayers_pos_x[player] + pos_x;

    if ((scale > 1.0F) && (pos_adjust_wait == 0))
    {
        scale -= 0.05F;

        if (scale < 1.0F)
        {
            scale = 1.0F;
        }
    }
    digit_id = char_count - 1;

    sobj = SObjGetStruct(interface_gobj)->next;

    while (sobj != NULL)
    {
        if (digit_id < 0)
        {
            sobj->sprite.attr |= SP_HIDDEN;
        }
        else
        {
            sprite_id = digits[digit_id];
            ifchar = sobj->user_data.p;

            ifchar->image_id = sprite_id;

            offset = dIFCommonPlayerDamageDigitWidths[sprite_id] * scale;

            ifchar->pos.x = (pos_x - (offset * 0.5F));
            ifchar->pos.y = gIFPlayerCommonInterface.ifplayers_pos_y;

            pos_x -= offset;

            sobj->sprite.attr &= ~SP_HIDDEN;
        }
        sobj = sobj->next;

        digit_id--;
    }
    if (pos_adjust_wait > 0)
    {
        pos_adjust_wait--;
    }
    if (flash_reset_wait > 0)
    {
        flash_reset_wait--;
    }
    sIFCommonPlayerDamageInterface[player].damage = start_damage;
    sIFCommonPlayerDamageInterface[player].scale = scale;
    sIFCommonPlayerDamageInterface[player].color_id = color_id;

    sIFCommonPlayerDamageInterface[player].pos_adjust_wait = pos_adjust_wait;
    sIFCommonPlayerDamageInterface[player].flash_reset_wait = flash_reset_wait;
}

// 0x8010EC50
void ifCommonPlayerDamageUpdateAnim(GObj *interface_gobj)
{
    s32 player;
    s32 char_id;
    s32 random;
    s32 modulo;
    s32 i, j;
    ifDCharacter *ifchar;
    SObj *sobj;

    player = ifGetPlayer(interface_gobj);

    if (sIFCommonPlayerDamageInterface[player].break_anim_frame < 19)
    {
        modulo = sIFCommonPlayerDamageInterface[player].break_anim_frame / 6;

        if (!(sIFCommonPlayerDamageInterface[player].break_anim_frame - modulo * 6))
        {
            char_id = sIFCommonPlayerDamageInterface[player].char_display_count - modulo;

            if (char_id > 0)
            {
                random = mtTrigGetRandomIntRange(char_id);

                for (i = j = 0; i < sIFCommonPlayerDamageInterface[player].char_display_count; i++)
                {
                    if (sIFCommonPlayerDamageInterface[player].chars[i].is_lock_movement == FALSE)
                    {
                        if (j == random)
                        {
                            break;
                        }
                        else j++;
                    }
                }
                sIFCommonPlayerDamageInterface[player].chars[i].is_lock_movement = TRUE;
            }
        }
        sIFCommonPlayerDamageInterface[player].break_anim_frame++;
    }
    sobj = SObjGetStruct(interface_gobj)->next;

    while (sobj != NULL)
    {
        if (!(sobj->sprite.attr & SP_HIDDEN))
        {
            ifchar = sobj->user_data.p;

            if (ifchar->is_lock_movement != FALSE)
            {
                ifchar->vel.y++;

                ifchar->pos.x += ifchar->vel.x;
                ifchar->pos.y += ifchar->vel.y;
            }
        }
        sobj = sobj->next;
    }
}

// 0x8010EE18
void ifCommonPlayerDamageProcUpdate(GObj *interface_gobj)
{
    s32 player = ifGetPlayer(interface_gobj);

    if (gBattleState->players[player].stock_count == -1)
    {
        if (sIFCommonPlayerDamageInterface[player].dead_stopupdate_wait != 0)
        {
            if (sIFCommonPlayerDamageInterface[player].is_update_anim != FALSE)
            {
                ifCommonPlayerDamageUpdateAnim(interface_gobj);
            }
            sIFCommonPlayerDamageInterface[player].dead_stopupdate_wait--;
        }
    }
    else if (sIFCommonPlayerDamageInterface[player].is_update_anim != FALSE)
    {
        ifCommonPlayerDamageUpdateAnim(interface_gobj);
    }
    else ifCommonPlayerDamageUpdateDigits(interface_gobj);
}

// 0x8010EEFC
void ifCommonPlayerDamageProcRender(GObj *interface_gobj)
{
    f32 pos_x;
    f32 scale;
    f32 pos_y;
    f32 damage_scale;
    s32 player;
    s32 color_id;
    u8 color_r;
    u8 color_g;
    u8 color_b;
    SObj *sobj, *sub_sobj;
    ifDCharacter *ifchar;

    sobj = SObjGetStruct(interface_gobj);

    func_ovl0_800CC118(gDisplayListHead, sobj);
    func_ovl0_800CC818(gDisplayListHead, sobj);

    func_ovl0_800CCED8(&sobj->sprite);

    player = ifGetPlayer(interface_gobj);

    if ((sIFCommonPlayerDamageInterface[player].is_display_interface != FALSE) && ((gBattleState->players[player].stock_count >= 0) || (sIFCommonPlayerDamageInterface[player].dead_stopupdate_wait != 0)))
    {
        color_id = sIFCommonPlayerDamageInterface[player].color_id;
        scale = sIFCommonPlayerDamageInterface[player].scale;

        if (color_id == GMBATTLE_PLAYERS_MAX)
        {
            color_r = dIFCommonPlayerDamageDigitColorsR[color_id];
            color_g = dIFCommonPlayerDamageDigitColorsG[color_id];
            color_b = dIFCommonPlayerDamageDigitColorsB[color_id];
        }
        else
        {
            damage_scale = 1.0F - (sIFCommonPlayerDamageInterface[player].damage / 300.0F);

            if (damage_scale < 0.0F)
            {
                damage_scale = 0.0F;
            }
            color_r = (s32)((dIFCommonPlayerDamageDigitColorsR[color_id] - 0x64) * damage_scale) + 0x64;
            color_g = (s32)((dIFCommonPlayerDamageDigitColorsG[color_id] - 0x14) * damage_scale) + 0x14;
            color_b = (s32)((dIFCommonPlayerDamageDigitColorsB[color_id] - 0x14) * damage_scale) + 0x14;
        }
        sobj = sobj->next;
        ifchar = sobj->user_data.p;

        sobj->sprite = *(Sprite*) ((uintptr_t)gGMCommonFiles[2] + (intptr_t)dIFCommonPlayerDamageDigitSpriteOffsets[ifchar->image_id]);

        sobj->pos.x = (ifchar->pos.x - (sobj->sprite.width * 0.5F * scale));
        sobj->pos.y = (ifchar->pos.y - (sobj->sprite.height * 0.5F * scale));

        sobj->sprite.scalex = scale;
        sobj->sprite.scaley = scale;

        sobj->sprite.red = color_r;
        sobj->sprite.green = color_g;
        sobj->sprite.blue = color_b;

        func_ovl0_800CC118(gDisplayListHead, sobj);

        if (color_id == GMBATTLE_PLAYERS_MAX)
        {
            gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
        }
        func_ovl0_800CC818(gDisplayListHead, sobj);

        sobj = sobj->next;

        while (sobj != NULL)
        {
            if (!(sobj->sprite.attr & SP_HIDDEN))
            {
                ifchar = sobj->user_data.p;

                sobj->sprite = *(Sprite*) ((uintptr_t)gGMCommonFiles[2] + (intptr_t)dIFCommonPlayerDamageDigitSpriteOffsets[ifchar->image_id]);

                pos_x = ifchar->pos.x - (sobj->sprite.width * 0.5F * scale);
                pos_y = ifchar->pos.y - (sobj->sprite.height * 0.5F * scale);

                if ((scale == 1.0F) && (sIFCommonPlayerDamageInterface[player].is_update_anim == FALSE))
                {
                    sobj->pos.x = (s32)pos_x;
                    sobj->pos.y = (s32)pos_y;
                }
                else
                {
                    sobj->pos.x = pos_x;
                    sobj->pos.y = pos_y;
                }
                sobj->sprite.scalex = sobj->sprite.scaley = scale;

                func_ovl0_800CC818(gDisplayListHead, sobj);
            }
            sobj = sobj->next;
        }
        func_ovl0_800CCEAC();
    }
}

// 0x8010F334
void ifCommonPlayerDamageSetDigitAttr(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(dIFCommonPlayerDamageDigitSpriteOffsets); i++)
    {
        spGetSpriteFromFile(gGMCommonFiles[2], dIFCommonPlayerDamageDigitSpriteOffsets[i])->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8010F3A0
void ifCommonPlayerDamageSetDigitPositions(void)
{
    gIFPlayerCommonInterface.ifplayers_pos_x = dIFCommonPlayerDamagePositionOffsetsX;
    gIFPlayerCommonInterface.ifplayers_pos_y = 210;
}

// 0x8010F3C0
void ifCommonPlayerDamageInitInterface(void)
{
    ftStruct *fp;
    ftSprites *ft_sprites;
    GObj *interface_gobj;
    SObj *sobj;
    s32 player;
    s32 emblem;

    ifCommonPlayerDamageSetDigitAttr();

    for (player = 0; player < ARRAY_COUNT(sIFCommonPlayerDamageInterface); player++)
    {
        if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
        {
            sIFCommonPlayerDamageInterface[player].interface_gobj = NULL;
        }
        else
        {
            interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

            sIFCommonPlayerDamageInterface[player].interface_gobj = interface_gobj;

            omAddGObjRenderProc(interface_gobj, ifCommonPlayerDamageProcRender, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

            fp = ftGetStruct(gBattleState->players[player].fighter_gobj);

            ft_sprites = fp->attributes->sprites;

            if ((ft_sprites != NULL) && (ft_sprites->emblem != NULL))
            {
                sobj = gcAppendSObjWithSprite(interface_gobj, ft_sprites->emblem);

                sobj->pos.x = (s32)((gIFPlayerCommonInterface.ifplayers_pos_x[player] - (sobj->sprite.width  * dIFCommonPlayerDamageEmblemScales[player] * 0.5F)) + dIFCommonPlayerDamageEmblemOffsetsX[player]);
                sobj->pos.y = (s32)((gIFPlayerCommonInterface.ifplayers_pos_y         - (sobj->sprite.height * dIFCommonPlayerDamageEmblemScales[player] * 0.5F)) + dIFCommonPlayerDamageEmblemOffsetsY[player]);

                sobj->sprite.scalex = sobj->sprite.scaley = dIFCommonPlayerDamageEmblemScales[player];

                emblem = gBattleState->players[player].player_color_index;

                sobj->sprite.red = gMPCollisionGroundData->emblem_colors[emblem].r;
                sobj->sprite.green = gMPCollisionGroundData->emblem_colors[emblem].g;
                sobj->sprite.blue = gMPCollisionGroundData->emblem_colors[emblem].b;

                sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
            }
            else
            {
                omAddSObjForGObj(interface_gobj, NULL)->sprite.attr = SP_HIDDEN;
            }
            gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[2], &lIFCommonPlayerDamageDigit0))->user_data.p = &sIFCommonPlayerDamageInterface[player].chars[0];
            gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[2], &lIFCommonPlayerDamageDigit0))->user_data.p = &sIFCommonPlayerDamageInterface[player].chars[1];
            gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[2], &lIFCommonPlayerDamageDigit0))->user_data.p = &sIFCommonPlayerDamageInterface[player].chars[2];
            gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[2], &lIFCommonPlayerDamageDigit0))->user_data.p = &sIFCommonPlayerDamageInterface[player].chars[3];

            // The above functions should all return SObj*

            sIFCommonPlayerDamageInterface[player].damage = gBattleState->players[player].stock_damage_all;
            sIFCommonPlayerDamageInterface[player].pos_adjust_wait = 0;
            sIFCommonPlayerDamageInterface[player].flash_reset_wait = 0;
            sIFCommonPlayerDamageInterface[player].scale = 1.04F;
            sIFCommonPlayerDamageInterface[player].is_update_anim = FALSE;
            sIFCommonPlayerDamageInterface[player].dead_stopupdate_wait = 180;
            sIFCommonPlayerDamageInterface[player].is_display_interface = FALSE;

            ifSetPlayer(interface_gobj, player); // Cast is probably redundant but I don't want any compilers screaming at me

            ifCommonPlayerDamageProcUpdate(interface_gobj);
            omAddGObjCommonProc(interface_gobj, ifCommonPlayerDamageProcUpdate, nOMObjProcessKindProc, 0);
        }
    }
}

// 0x8010F76C
void ifCommonPlayerDamageStartBreakAnim(ftStruct *fp)
{
    s32 player = fp->player;
    s32 i;

    for (i = 0; i < sIFCommonPlayerDamageInterface[player].char_display_count; i++)
    {
        sIFCommonPlayerDamageInterface[player].chars[i].vel.x = (mtTrigGetRandomFloat() * 2) + (-1.0F);
        sIFCommonPlayerDamageInterface[player].chars[i].vel.y = -10.0F;

        sIFCommonPlayerDamageInterface[player].chars[i].is_lock_movement = FALSE;
    }
    sIFCommonPlayerDamageInterface[player].break_anim_frame = 0;
    sIFCommonPlayerDamageInterface[player].is_update_anim = TRUE;
}

// 0x8010F840
void ifCommonPlayerDamageStopBreakAnim(ftStruct *fp)
{
    s32 player = fp->player;

    sIFCommonPlayerDamageInterface[player].is_update_anim = FALSE;
    sIFCommonPlayerDamageInterface[player].scale = 1.04F;
}

// 0x8010F878
void ifCommonPlayerStockMultiProcRender(GObj *interface_gobj)
{
    s32 player;
    ftStruct *fp;
    s32 unused;
    s32 stock_count;
    s32 digit_count;
    SObj *gt_sobj;
    SObj *lt_sobj;
    s32 stock_order, digit_order;
    s32 trunc_pos_x;
    u8 digits[3];

    player = ifGetPlayer(interface_gobj);
    stock_count = gBattleState->players[player].stock_count;
    fp = ftGetStruct(gBattleState->players[player].fighter_gobj);

    if (stock_count >= 0)
    {
        stock_count++;

        if (stock_count != sIFCommonPlayerStocksNum[player])
        {
            if (TRUE)
            {
                // Bruh... well, at least it doesn't sound too unreasonable to have this here... I guess?
                // Insert missing debug code here, yadda yadda...
                // ...why are you still reading this?
            }
            if (stock_count <= 6)
            {
                stock_order = 0;

                lt_sobj = SObjGetStruct(interface_gobj);

                while (lt_sobj != NULL)
                {
                    if (stock_order < stock_count)
                    {
                        lt_sobj->sprite = *fp->attributes->sprites->stock_spr;

                        lt_sobj->sprite.LUT = fp->attributes->sprites->stock_lut[fp->costume];

                        lt_sobj->pos.x = ((gIFPlayerCommonInterface.ifplayers_pos_x[player] + dIFCommonPlayerStocksIconOffsetsX[player] + (stock_order * 10)) - (lt_sobj->sprite.width * 0.5F));
                        lt_sobj->pos.y = ((gIFPlayerCommonInterface.ifplayers_pos_y - (s32)(lt_sobj->sprite.height * 0.5F)) - 20);

                        lt_sobj->sprite.attr &= ~SP_HIDDEN;
                    }
                    else lt_sobj->sprite.attr |= SP_HIDDEN;

                    lt_sobj = lt_sobj->next;

                    stock_order++;
                }
            }
            else
            {
                digit_count = ifCommonPlayerDamageGetSpecialArrayID(stock_count, digits);

                trunc_pos_x = gIFPlayerCommonInterface.ifplayers_pos_x[player] + dIFCommonPlayerStocksDigitOffsetsX[player];

                gt_sobj = SObjGetStruct(interface_gobj);

                gt_sobj->sprite = *fp->attributes->sprites->stock_spr;

                gt_sobj->sprite.LUT = fp->attributes->sprites->stock_lut[fp->costume];

                gt_sobj->pos.x = ((trunc_pos_x - 22) - (gt_sobj->sprite.width * 0.5F));
                gt_sobj->pos.y = ((gIFPlayerCommonInterface.ifplayers_pos_y - (s32)(gt_sobj->sprite.height * 0.5F)) - 20);

                gt_sobj->sprite.attr &= ~SP_HIDDEN;

                gt_sobj = gt_sobj->next;

                gt_sobj->sprite = *spGetSpriteFromFile(gGMCommonFiles[4], dIFCommonPlayerStockDigitSpriteOffsets[10]);

                gt_sobj->pos.x = ((trunc_pos_x + -10.5F) - (gt_sobj->sprite.width * 0.5F));
                gt_sobj->pos.y = ((gIFPlayerCommonInterface.ifplayers_pos_y - 20) - (gt_sobj->sprite.height * 0.5F));

                gt_sobj->sprite.attr &= ~SP_HIDDEN;

                gt_sobj = gt_sobj->next;

                digit_order = 0;

                while (gt_sobj != NULL)
                {
                    if (digit_order < digit_count)
                    {
                        gt_sobj->sprite = *spGetSpriteFromFile(gGMCommonFiles[4], dIFCommonPlayerStockDigitSpriteOffsets[digits[digit_order]]);

                        gt_sobj->pos.x = ((trunc_pos_x + (digit_order * 8)) - (gt_sobj->sprite.width * 0.5F));
                        gt_sobj->pos.y = ((gIFPlayerCommonInterface.ifplayers_pos_y - 20) - (gt_sobj->sprite.height * 0.5F));

                        gt_sobj->sprite.attr &= ~SP_HIDDEN;
                    }
                    else gt_sobj->sprite.attr |= SP_HIDDEN;

                    gt_sobj = gt_sobj->next;

                    digit_order++;
                }
            }
            sIFCommonPlayerStocksNum[player] = stock_count;
        }
        func_ovl0_800CCF00(interface_gobj);
    }
}

// 0x8010FD2C
void ifCommonPlayerStockSetIconAttr(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(dIFCommonPlayerStockDigitSpriteOffsets); i++)
    {
        spGetSpriteFromFile(gGMCommonFiles[4], dIFCommonPlayerStockDigitSpriteOffsets[i])->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8010FDD4
void ifCommonPlayerStockMultiMakeInterface(s32 player)
{
    ftStruct *fp = ftGetStruct(gBattleState->players[player].fighter_gobj);
    Sprite *sprite;

    if ((fp->attributes->sprites != NULL) && (fp->attributes->sprites->stock_spr != NULL))
    {
        GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);
        omAddGObjRenderProc(interface_gobj, ifCommonPlayerStockMultiProcRender, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

        gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[4], &lIFCommonPlayerStockDigit0));
        gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[4], &lIFCommonPlayerStockDigit0));
        gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[4], &lIFCommonPlayerStockDigit0));
        gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[4], &lIFCommonPlayerStockDigit0));
        gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[4], &lIFCommonPlayerStockDigit0));
        gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[4], &lIFCommonPlayerStockDigit0));

        sIFCommonPlayerStocksNum[player] = S8_MAX;

        sprite = fp->attributes->sprites->stock_spr;
        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

        ifSetPlayer(interface_gobj, player);
    }
}

// 0x8010FF24
void ifCommonPlayerStockSingleProcRender(GObj *interface_gobj)
{
    s32 player = ifGetPlayer(interface_gobj);
    s32 stocks = gBattleState->players[player].stock_count;

    if (stocks != -1)
    {
        func_ovl0_800CCF00(interface_gobj);
    }
}

// 0x8010FF78
void ifCommonPlayerStockSetLUT(s32 player, s32 lut_id, ftAttributes *attributes)
{
    SObjGetStruct(sIFCommonPlayerStocksGObj[player])->sprite.LUT = attributes->sprites->stock_lut[lut_id];
}

// 0x8010FFA8
void ifCommonPlayerStockSingleMakeInterface(s32 player)
{
    ftStruct *fp = ftGetStruct(gBattleState->players[player].fighter_gobj);
    GObj *interface_gobj;
    SObj *sobj;

    if ((fp->attributes->sprites != NULL) && (fp->attributes->sprites->stock_spr != NULL))
    {
        sIFCommonPlayerStocksGObj[player] = interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

        omAddGObjRenderProc(interface_gobj, ifCommonPlayerStockSingleProcRender, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

        sobj = gcAppendSObjWithSprite(interface_gobj, fp->attributes->sprites->stock_spr);

        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
        sobj->sprite.LUT = fp->attributes->sprites->stock_lut[fp->costume];

        sobj->pos.x = ((gIFPlayerCommonInterface.ifplayers_pos_x[player] + dIFCommonPlayerStocksIconOffsetsX[player]) - (s32)(sobj->sprite.width * 0.5F));
        sobj->pos.y = ((gIFPlayerCommonInterface.ifplayers_pos_y - (s32)(sobj->sprite.height * 0.5F)) - 20);

        ifSetPlayer(interface_gobj, player);
    }
}

// 0x80110138
void ifCommonPlayerStockStealProcUpdate(GObj *interface_gobj)
{
    f32 dist_x;
    f32 vel_x;
    f32 vel_y;
    SObj *sobj;
    ifPlayerSteal *s_steal = &sIFCommonPlayerStealInterface[ifGetPlayer(interface_gobj)];

    s_steal->anim_frames--;

    if (s_steal->anim_frames == 0)
    {
        func_ovl2_801039B4
        (
            gIFPlayerCommonInterface.ifplayers_pos_x[ifGetPlayer(interface_gobj)] + 
            dIFCommonPlayerStocksIconOffsetsX[ifGetPlayer(interface_gobj)], 
            gIFPlayerCommonInterface.ifplayers_pos_y - 20
        );
        omEjectGObj(interface_gobj);

        return;
    }
    sobj = SObjGetStruct(interface_gobj);

    dist_x = (s_steal->steal_pos_x - s_steal->target_pos_x);

    vel_x = (s_steal->anim_frames * dist_x) / 30.0F;

    if (vel_x < (dist_x * 0.5F))
    {
        vel_y = -(vel_x - (dist_x * 0.5F));
    }
    else vel_y = (vel_x - (dist_x * 0.5F));

    sobj->pos.x = (s_steal->target_pos_x + vel_x);
    sobj->pos.y = ((s_steal->steal_pos_y + ((15.0F / SQUARE(dist_x * 0.5F)) * vel_y * vel_y)) - 15.0F);
}

// 0x801102B0
void ifCommonPlayerStockStealMakeInterface(s32 thief, s32 stolen)
{
    ftStruct *fp = ftGetStruct(gBattleState->players[stolen].fighter_gobj);
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    if (interface_gobj != NULL)
    {
        SObj *check_sobj, *sobj;

        omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 23, GOBJ_DLLINKORDER_DEFAULT, -1);
        omAddGObjCommonProc(interface_gobj, ifCommonPlayerStockStealProcUpdate, nOMObjProcessKindProc, 0);

        check_sobj = gcAppendSObjWithSprite(interface_gobj, fp->attributes->sprites->stock_spr);

        if (check_sobj == NULL)
        {
            omEjectGObj(interface_gobj);

            return;
        }
        else
        {
            sobj = check_sobj;

            sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
            sobj->sprite.LUT = fp->attributes->sprites->stock_lut[fp->costume];

            sIFCommonPlayerStealInterface[thief].steal_pos_x = ((gIFPlayerCommonInterface.ifplayers_pos_x[stolen] + dIFCommonPlayerStocksIconOffsetsX[stolen]) - (s32)(sobj->sprite.width * 0.5F));
            sIFCommonPlayerStealInterface[thief].steal_pos_y = ((gIFPlayerCommonInterface.ifplayers_pos_y - (s32)(sobj->sprite.height * 0.5F)) - 20);

            sIFCommonPlayerStealInterface[thief].target_pos_x = ((gIFPlayerCommonInterface.ifplayers_pos_x[thief] + dIFCommonPlayerStocksIconOffsetsX[thief]) - (s32)(sobj->sprite.width * 0.5F));

            sobj->pos.x = sIFCommonPlayerStealInterface[thief].steal_pos_x;
            sobj->pos.y = sIFCommonPlayerStealInterface[thief].steal_pos_y;

            sIFCommonPlayerStealInterface[thief].anim_frames = 30;

            ifSetPlayer(interface_gobj, thief);

            func_ovl2_80103994(gIFPlayerCommonInterface.ifplayers_pos_x[stolen] + dIFCommonPlayerStocksIconOffsetsX[stolen], gIFPlayerCommonInterface.ifplayers_pos_y - 20);
        }
    }
}

// 0x80110514
void ifCommonPlayerStockInitInterface(void)
{
    s32 player;

    ifCommonPlayerStockSetIconAttr();

    for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
    {
        if (gBattleState->players[player].pl_kind != nFTPlayerKindNot)
        {
            switch (gBattleState->players[player].is_single_stockicon)
            {
            case FALSE:
                ifCommonPlayerStockMultiMakeInterface(player);
                break;

            case TRUE:
                ifCommonPlayerStockSingleMakeInterface(player);
                break;
            }
        }
    }
}

// 0x801105CC - Get magnifying glass position / arrow point direction?
void ifCommonPlayerMagnifyGetPosition(f32 player_pos_x, f32 player_pos_y, Vec2f *magnify_pos)
{
    f32 left;
    f32 right;
    f32 up;
    f32 down;
    f32 bak_right;
    f32 bak_up;
    f32 diag_hz;
    f32 diag_vt;
    f32 div_xy;

    left = (-gCMManagerCameraStruct.viewport_width / 2) + (20 * gIFPlayerCommonInterface.ifmagnify_scale) + 5;
    bak_right = right = (+gCMManagerCameraStruct.viewport_width / 2) - (20 * gIFPlayerCommonInterface.ifmagnify_scale) - 5;
    bak_up = up = (+gCMManagerCameraStruct.viewport_height / 2) - (20 * gIFPlayerCommonInterface.ifmagnify_scale);
    down = (-gCMManagerCameraStruct.viewport_height / 2) + (20 * gIFPlayerCommonInterface.ifmagnify_scale);

    if (player_pos_x == 0.0F)
    {
        up = bak_up;

        if (player_pos_y > 0.0F)
        {
            magnify_pos->y = up;
        }
        else magnify_pos->y = down;

        magnify_pos->x = 0.0F;
    }
    else
    {
        div_xy = player_pos_y / player_pos_x;

        if (((up / right) < div_xy) || (-(up / right) > div_xy))
        {
            up = bak_up;

            if (player_pos_y > 0.0F)
            {
                magnify_pos->y = up;
            }
            else magnify_pos->y = down;

            diag_hz = (magnify_pos->y * player_pos_x) / player_pos_y;

            right = bak_right;

            if (diag_hz < left)
            {
                magnify_pos->x = left;
            }
            else if (diag_hz > right)
            {
                magnify_pos->x = right;
            }
            else magnify_pos->x = diag_hz;
        }
        else
        {
            right = bak_right;

            if (player_pos_x > 0.0F)
            {
                magnify_pos->x = right;
            }
            else magnify_pos->x = left;

            diag_vt = (magnify_pos->x * player_pos_y) / player_pos_x;

            up = bak_up;

            if (diag_vt < down)
            {
                magnify_pos->y = down;
            }
            else if (diag_vt > up)
            {
                magnify_pos->y = up;
            }
            else magnify_pos->y = diag_vt;
        }
    }
}

// 0x801107F0
void ifCommonPlayerMagnifyUpdateRender(Gfx **dls, s32 color_id, f32 ulx, f32 uly)
{
    Gfx *dl = dls[0];
    gsColorRGB *color;
    f32 temp_f0;
    s32 var_uly;
    s32 var_lrx;
    s32 var_ulx;
    s32 var_lry;
    s32 temp_t0;
    s32 temp_t1;

    gDPPipeSync(dl++);
    gDPSetColorImage(dl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gCurrScreenWidth, gZBuffer);
    gDPSetRenderMode(dl++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
    gDPSetCombineMode(dl++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    gDPSetAlphaCompare(dl++, G_AC_NONE);
    gDPSetTexturePersp(dl++, G_TP_NONE);
    gSPClearGeometryMode(dl++, G_ZBUFFER);

    // This is a compound macro but I cannot find anything that would correspond to this
    gDPSetTextureImage(dl++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, spGetSpriteFromFile(gGMCommonFiles[0], &lIFCommonPlayerMagnifyFrame));

    // NEEDS TO BE ALL ON THE SAME LINE OR GLUED, OTHERWISE IT DOESN'T MATCH
    gDPSetTile(dl++, G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_MIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_MIRROR | G_TX_WRAP, 4, G_TX_NOLOD);\
    gDPLoadSync(dl++);\
    gDPLoadBlock(dl++, G_TX_LOADTILE, 0, 0, 127, 1024);\
    gDPPipeSync(dl++);

    // SAME HERE
    gDPSetTile(dl++, G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0x0000, G_TX_RENDERTILE, 0, G_TX_MIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_MIRROR | G_TX_WRAP, 4, G_TX_NOLOD);\
    gDPSetTileSize(dl++, G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C);

    temp_f0 = (s32)((1024.0F / gIFPlayerCommonInterface.ifmagnify_scale) + 0.5F);

    var_ulx = ulx;
    var_uly = uly;

    var_lrx = ((ulx == var_ulx) ? 0 : 1) + (s32)(ulx + (32.0F * gIFPlayerCommonInterface.ifmagnify_scale));

    var_lry = ((uly == var_uly) ? 0 : 1) + (s32)(uly + (32.0F * gIFPlayerCommonInterface.ifmagnify_scale));

    if (var_ulx < gCMManagerCameraStruct.viewport_ulx)
    {
        var_ulx = gCMManagerCameraStruct.viewport_ulx;
    }
    else if (var_lrx >= gCMManagerCameraStruct.viewport_lrx)
    {
        var_lrx = gCMManagerCameraStruct.viewport_lrx - 1;
    }
    if (var_uly < gCMManagerCameraStruct.viewport_uly)
    {
        var_uly = gCMManagerCameraStruct.viewport_uly;
    }
    else if (var_lry >= gCMManagerCameraStruct.viewport_lry)
    {
        var_lry = gCMManagerCameraStruct.viewport_lry - 1;
    }
    temp_t0 = ((s32)((var_ulx - ulx) * temp_f0) + 16) >> 5;
    temp_t1 = ((s32)((var_uly - uly) * temp_f0) + 16) >> 5;

    gSPTextureRectangle
    (
        dl++,
        var_ulx * 4, var_uly * 4, var_lrx * 4, var_lry * 4,
        G_TX_RENDERTILE,
        temp_t0, temp_t1,
        temp_f0, temp_f0
    );

    gDPPipeSync(dl++);
    gDPSetColorImage(dl++, G_IM_FMT_RGBA, gPixelComponentSize, gCurrScreenWidth, 0x0F000000);
    gDPSetRenderMode(dl++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetAlphaCompare(dl++, G_AC_THRESHOLD);
    gDPSetBlendColor(dl++, 0, 0, 0, 0x8);

    color = &gMPCollisionGroundData->fog_color;

    gDPSetPrimColor(dl++, 0, 0, color->r, color->g, color->b, 0xFF);
    gDPSetEnvColor(dl++, dIFCommonPlayerMagnifyColorsR[color_id], dIFCommonPlayerMagnifyColorsG[color_id], dIFCommonPlayerMagnifyColorsB[color_id], 0xFF);
    gDPSetCombineMode(dl++, G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA);
    gSPTextureRectangle
    (
        dl++,
        var_ulx * 4, var_uly * 4, var_lrx * 4, var_lry * 4,
        G_TX_RENDERTILE,
        temp_t0, temp_t1,
        temp_f0, temp_f0
    );
    gDPPipeSync(dl++);
    gDPSetAlphaCompare(dl++, G_AC_NONE);
    gDPSetTexturePersp(dl++, G_TP_PERSP);
    gSPSetGeometryMode(dl++, G_ZBUFFER);

    dls[0] = dl;
}

// 0x80110DD4
void ifCommonPlayerMagnifyUpdateViewport(Gfx **dls, ftStruct *fp)
{
    Gfx *dl;
    f32 magnify_x;
    f32 magnify_y;
    ifPlayerMagnify *ifmag;
    Camera *cam;
    f32 scale;
    s32 ulx;
    s32 uly;
    s32 lrx;
    s32 lry;

    if (gIFPlayerCommonInterface.is_ifmagnify_display != FALSE)
    {
        ifmag = &sIFCommonPlayerMagnifyInterface[fp->player];

        magnify_x = fp->ifpos_x;
        magnify_y = fp->ifpos_y;

        ifCommonPlayerMagnifyGetPosition(magnify_x, magnify_y, &ifmag->pos);

        magnify_x = ifmag->pos.x + gCMManagerCameraStruct.viewport_center_x;
        magnify_y = gCMManagerCameraStruct.viewport_center_y - ifmag->pos.y;

        gSPMatrix(dls[0]++, &CameraGetStruct(gOMObjCurrentRendering)->ommtx[0]->mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

        if (gIFPlayerCommonInterface.ifmagnify_mode != 1)
        {
            cam = CameraGetStruct(gCMManagerCameraGObj);

            gSPViewport(dls[0]++, &cam->viewport);

            gDPSetScissor(dls[0]++, G_SC_NON_INTERLACE, gCMManagerCameraStruct.viewport_ulx, gCMManagerCameraStruct.viewport_uly, gCMManagerCameraStruct.viewport_lrx, gCMManagerCameraStruct.viewport_lry);
        }
        else gIFPlayerCommonInterface.ifmagnify_mode = 2;

        scale = (16.0F * gIFPlayerCommonInterface.ifmagnify_scale);

        ifCommonPlayerMagnifyUpdateRender(dls, ifmag->color_id, magnify_x - scale, magnify_y - scale);

        dl = dls[0];

        scale = (18.0F * gIFPlayerCommonInterface.ifmagnify_scale);

        magnify_x -= (scale / 2);
        magnify_y -= (scale / 2);

        func_80007080(&ifmag->viewport, magnify_x, magnify_y, scale + magnify_x, scale + magnify_y);

        gSPViewport(dl++, &ifmag->viewport);

        ulx = (ifmag->viewport.vp.vtrans[0] / 4) - (ifmag->viewport.vp.vscale[0] / 4);
        uly = (ifmag->viewport.vp.vtrans[1] / 4) - (ifmag->viewport.vp.vscale[1] / 4);
        lrx = (ifmag->viewport.vp.vtrans[0] / 4) + (ifmag->viewport.vp.vscale[0] / 4);
        lry = (ifmag->viewport.vp.vtrans[1] / 4) + (ifmag->viewport.vp.vscale[1] / 4);

        if (ulx < gCMManagerCameraStruct.viewport_ulx)
        {
            ulx = gCMManagerCameraStruct.viewport_ulx;
        }
        if (lrx > gCMManagerCameraStruct.viewport_lrx)
        {
            lrx = gCMManagerCameraStruct.viewport_lrx;
        }
        if (uly < gCMManagerCameraStruct.viewport_uly)
        {
            uly = gCMManagerCameraStruct.viewport_uly;
        }
        else if (lry > gCMManagerCameraStruct.viewport_lry)
        {
            lry = gCMManagerCameraStruct.viewport_lry;
        }
        gDPSetScissor(dl++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);

        dls[0] = dl;
    }
}

// 0x801111A0
void ifCommonPlayerMagnifyProcRender(ftStruct *fp)
{
    GObj *interface_gobj;
    DObj *dobj;
    ifPlayerMagnify *ifmag;
    Camera *cam;

    if (gIFPlayerCommonInterface.is_ifmagnify_display != FALSE)
    {
        ifmag = &sIFCommonPlayerMagnifyInterface[fp->player];

        interface_gobj = ifmag->interface_gobj;

        dobj = DObjGetStruct(interface_gobj);

        dobj->translate.vec.f.x = ifmag->pos.x;
        dobj->translate.vec.f.y = ifmag->pos.y;

        dobj->rotate.vec.f.z = atan2f(fp->ifpos_y, fp->ifpos_x) - F_CST_DTOR32(90.0F);

        dobj->scale.vec.f.x = dobj->scale.vec.f.y = gIFPlayerCommonInterface.ifmagnify_scale * 0.5F;

        cam = CameraGetStruct(gCMManagerCameraGObj);

        gSPViewport(gDisplayListHead[0]++, &cam->viewport);
        gDPSetScissor(gDisplayListHead[0]++, G_SC_NON_INTERLACE, gCMManagerCameraStruct.viewport_ulx, gCMManagerCameraStruct.viewport_uly, gCMManagerCameraStruct.viewport_lrx, gCMManagerCameraStruct.viewport_lry);
        gSPMatrix(gDisplayListHead[0]++, &CameraGetStruct(gOMObjCurrentRendering)->ommtx[1]->mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
        gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
        gDPPipeSync(gDisplayListHead[0]++);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);
        gDPSetAlphaCompare(gDisplayListHead[0]++, G_AC_NONE);
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, dIFCommonPlayerMagnifyColorsR[ifmag->color_id], dIFCommonPlayerMagnifyColorsG[ifmag->color_id], dIFCommonPlayerMagnifyColorsB[ifmag->color_id], 0xFF);
        odRenderDObjDLHead0(interface_gobj);
    }
}

// 0x80111440
void ifCommonPlayerMagnifyMakeInterface(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);
        GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDMagnify, GOBJ_LINKORDER_DEFAULT);

        omAddOMMtxForDObjFixed(omAddDObjForGObj(interface_gobj, (Gfx*) ((uintptr_t)gGMCommonFiles[0] + (intptr_t)&lIFCommonPlayerMagnifyDisplayList)), nOMTransformTraRotRpyRSca, 0);

        sIFCommonPlayerMagnifyInterface[fp->player].interface_gobj = interface_gobj;
        sIFCommonPlayerMagnifyInterface[fp->player].color_id = gBattleState->players[fp->player].player_color_index;

        fighter_gobj = fighter_gobj->link_next;
    }
    gIFPlayerCommonInterface.is_ifmagnify_display = FALSE;
}

// 0x80111554
void ifCommonPlayerArrowsLeftProcRender(GObj *interface_gobj)
{
    if (gIFPlayerCommonInterface.arrows_flags & 1)
    {
        odRenderDObjTreeForGObj(interface_gobj);
    }
}

// 0x80111588
void ifCommonPlayerArrowsRightProcRender(GObj *interface_gobj)
{
    if (gIFPlayerCommonInterface.arrows_flags & 2)
    {
        odRenderDObjTreeForGObj(interface_gobj);
    }
}

// 0x801115BC
void ifCommonPlayerArrowsAddAnim(GObj *interface_gobj)
{
    func_8000BD8C_C98C(interface_gobj, (void*) ((uintptr_t)gGMCommonFiles[0] + (intptr_t)&D_NF_00000270), 0.0F);
    func_8000DF34_EB34(interface_gobj);
}

// 0x801115FC
void ifCommonPlayerArrowsLeftProcUpdate(GObj *interface_gobj)
{
    switch (gIFPlayerCommonInterface.arrows_left_status)
    {
    case 0:
        break;

    case 1:
        ifCommonPlayerArrowsAddAnim(interface_gobj);
        // Fallthrough
    default:
        func_8000DF34_EB34(interface_gobj);
        break;
    }
}

// 0x80111640
void ifCommonPlayerArrowsRightProcUpdate(GObj *interface_gobj)
{
    switch (gIFPlayerCommonInterface.arrows_right_status)
    {
    case 0:
        break;

    case 1:
        ifCommonPlayerArrowsAddAnim(interface_gobj);
        // Fallthrough
    default:
        func_8000DF34_EB34(interface_gobj);
        break;
    }
}

// 0x80111684
GObj* ifCommonPlayerArrowsMakeInterface(void (*proc_render)(GObj*), void (*proc_update)(GObj*))
{
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, proc_render, 8, GOBJ_DLLINKORDER_DEFAULT, -1);
    func_8000F590(interface_gobj, (void*) ((uintptr_t)gGMCommonFiles[0] + (intptr_t)&D_NF_00000188), NULL, 27, 0, 0);
    omAddGObjCommonProc(interface_gobj, proc_update, 1, 5);

    return interface_gobj;
}

// 0x8011171C
void ifCommonPlayerArrowsProcRun(GObj *interface_gobj)
{
    s32 lr_right = FALSE;
    s32 lr_left = FALSE;

    if (gIFPlayerCommonInterface.is_ifmagnify_display != FALSE)
    {
        GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

        while (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            if (!(fp->is_magnify_hide) && !(fp->x18E_flag_b1) && (fp->x18D_flag_b5))
            {
                if (ABSF(fp->ifpos_x) > ABSF(fp->ifpos_y))
                {
                    if (fp->ifpos_x < 0.0F)
                    {
                        lr_left = TRUE;
                    }
                    else lr_right = TRUE;
                }
            }
            fighter_gobj = fighter_gobj->link_next;
        }
        if (lr_left == FALSE)
        {
            gIFPlayerCommonInterface.arrows_left_status = 0;
        }
        else if (gIFPlayerCommonInterface.arrows_left_status == 0)
        {
            gIFPlayerCommonInterface.arrows_left_status = 1;
        }
        else gIFPlayerCommonInterface.arrows_left_status = 2;

        if (lr_right == FALSE)
        {
            gIFPlayerCommonInterface.arrows_right_status = 0;
        }
        else if (gIFPlayerCommonInterface.arrows_right_status == 0)
        {
            gIFPlayerCommonInterface.arrows_right_status = 1;
        }
        else gIFPlayerCommonInterface.arrows_right_status = 2;
    }
    if ((lr_left != FALSE) || (lr_right != FALSE))
    {
        if (sIFCommonPlayerMagnifySoundWait == 0)
        {
            func_800269C0_275C0(nGMSoundFGMMagnify);

            sIFCommonPlayerMagnifySoundWait = 30;
        }
        sIFCommonPlayerMagnifySoundWait--;
    }
    else sIFCommonPlayerMagnifySoundWait = 0;
}

// 0x801118B4
void ifCommonPlayerArrowsMainProcRender(GObj *interface_gobj)
{
    gSPDisplayList(gDisplayListHead[0]++, &dIFCommonPlayerArrowsGfx);
}

// 0x801118E4
void ifCommonPlayerArrowsInitInterface(void)
{
    DObj *dobj;

    omAddGObjRenderProc
    (
        omMakeGObjSPAfter(nOMObjCommonKindInterface, ifCommonPlayerArrowsProcRun, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT), 
        ifCommonPlayerArrowsMainProcRender,
        8, 
        GOBJ_DLLINKORDER_DEFAULT, 
        -1
    );
    dobj = DObjGetStruct(ifCommonPlayerArrowsMakeInterface(ifCommonPlayerArrowsLeftProcRender, ifCommonPlayerArrowsLeftProcUpdate));

    dobj->translate.vec.f.x = -134.0F;
    dobj->translate.vec.f.y = 0.0F;

    gIFPlayerCommonInterface.arrows_left_status = 0;

    dobj = DObjGetStruct(ifCommonPlayerArrowsMakeInterface(ifCommonPlayerArrowsRightProcRender, ifCommonPlayerArrowsRightProcUpdate));

    dobj->translate.vec.f.x = 134.0F;
    dobj->translate.vec.f.y = 0.0F;
    dobj->rotate.vec.f.z = F_CST_DTOR32(180.0F);

    gIFPlayerCommonInterface.arrows_right_status = 0;

    sIFCommonPlayerMagnifySoundWait = 0;
}

// 0x801119AC
void ifCommonPlayerArrowsUpdateFlags(f32 x, f32 y)
{
    if (ABSF(x) > ABSF(y))
    {
        if (x > 0.0F)
        {
            gIFPlayerCommonInterface.arrows_flags |= IFCOMMON_PLAYERARROWS_MASK_RIGHT;
        }
        else gIFPlayerCommonInterface.arrows_flags |= IFCOMMON_PLAYERARROWS_MASK_LEFT;
    }
}

// 0x80111A3C
void ifCommonPlayerTagProcRender(GObj *interface_gobj)
{
    s32 player = ifGetPlayer(interface_gobj);
    ftStruct *fp;
    f32 x;
    f32 y;
    Vec3f pos;

    fp = ftGetStruct(gBattleState->players[player].fighter_gobj);

    if (!(fp->is_playertag_bossend) && !(fp->is_playertag_hide))
    {
        if ((fp->playertag_wait == 1) || (CameraGetStruct(gCMManagerCameraGObj)->vec.eye.z > 6000.0F))
        {
            pos = fp->joint[nFTPartsJointTopN]->translate.vec.f;

            pos.y += fp->attributes->camera_zoom_default;

            func_ovl2_800EB924(CameraGetStruct(gCMManagerCameraGObj), gCMManagerMtx, &pos, &x, &y);

            if (cmManagerCheckTargetInBounds(x, y) != FALSE)
            {
                SObjGetStruct(interface_gobj)->pos.x = (s32) ((gCMManagerCameraStruct.viewport_center_x + x) - (SObjGetStruct(interface_gobj)->sprite.width * 0.5F));
                SObjGetStruct(interface_gobj)->pos.y = (s32) ((gCMManagerCameraStruct.viewport_center_y - y) - SObjGetStruct(interface_gobj)->sprite.height);

                func_ovl0_800CCF00(interface_gobj);
            }
        }
    }
}

// 0x80111BE4
void ifCommonPlayerTagMakeInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    s32 player;
    u8 color_id;

    for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
    {
        if (gBattleState->players[player].pl_kind != nFTPlayerKindNot)
        {
            interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

            omAddGObjRenderProc(interface_gobj, ifCommonPlayerTagProcRender, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

            sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[6], dIFCommonPlayerTagSpriteOffsets[gBattleState->players[player].tag_kind]));

            sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

            color_id = gBattleState->players[player].player_color_index;

            sobj->sprite.red   = dIFCommonPlayerTagSpriteColorsR[color_id];
            sobj->sprite.green = dIFCommonPlayerTagSpriteColorsG[color_id];
            sobj->sprite.blue  = dIFCommonPlayerTagSpriteColorsB[color_id];

            sobj->shadow_color.r = dIFCommonPlayerTagShadowColorsR[color_id];
            sobj->shadow_color.g = dIFCommonPlayerTagShadowColorsG[color_id];
            sobj->shadow_color.b = dIFCommonPlayerTagShadowColorsB[color_id];

            ifSetPlayer(interface_gobj, player);
        }
    }
}

// 0x80111D64
void ifCommonItemArrowProcRender(GObj *interface_gobj)
{
    itStruct *ip = itGetStruct(interface_gobj); // So I'm guessing this copies the corresponding item's user_data? Its classifier is 0x3F8.
    SObj *sobj;
    f32 x;
    f32 y;
    Vec3f pos;

    if ((ip->is_allow_pickup) && (ip->indicator_timer >= 15))
    {
        sobj = SObjGetStruct(interface_gobj);

        pos = DObjGetStruct(ip->item_gobj)->translate.vec.f;

        pos.y += ip->coll_data.object_coll.top + 100.0F;

        func_ovl2_800EB924(CameraGetStruct(gCMManagerCameraGObj), gCMManagerMtx, &pos, &x, &y);

        if (cmManagerCheckTargetInBounds(x, y) != FALSE)
        {
            sobj->pos.x = (s32) ((gCMManagerCameraStruct.viewport_center_x + x) - (sobj->sprite.width * 0.5F));
            sobj->pos.y = (s32) ((gCMManagerCameraStruct.viewport_center_y - y) - sobj->sprite.height);

            func_ovl0_800CCF00(interface_gobj);
        }
    }
}

// 0x80111EC0
GObj* ifCommonItemArrowMakeInterface(itStruct *ip)
{
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    if (interface_gobj != NULL)
    {
        omAddGObjRenderProc(interface_gobj, ifCommonItemArrowProcRender, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

        if (gcAppendSObjWithSprite(interface_gobj, sIFCommonItemArrowSprite) != NULL)
        {
            interface_gobj->user_data.p = ip; // Give it up for... the GObj with the most flexible user_data assignments ever?

            if ((gSceneData.scene_current == scMajor_Kind_1PTrainingMode) && (gBattleState->game_status == nGMBattleGameStatusPause))
            {
                interface_gobj->flags = GOBJ_FLAG_NORENDER;
            }
            return interface_gobj;
        }
        else omEjectGObj(interface_gobj);
    }
    return NULL;
}

// 0x80111F80
void ifCommonItemArrowSetAttr(void)
{
    Sprite *sprite = sIFCommonItemArrowSprite =

    spGetSpriteFromFile(rdManagerGetFileWithExternHeap((intptr_t)&D_NF_00000057, gsMemoryAlloc(rdManagerGetFileSize((intptr_t)&D_NF_00000057), 0x10)), &lIFCommonItemArrow);

    sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

    sprite->red   = 0xFF;
    sprite->green = 0x00;
    sprite->blue  = 0x00;
}

// 0x80111FF0
void ifCommonAnnounceThread(GObj *interface_gobj)
{
    gsStopCurrentProcess(0x3C);

    omEjectGObj(NULL);

    gsStopCurrentProcess(1);
}

// 0x80112024
void ifCommonAnnounceSetAttr(GObj *interface_gobj, s32 file_id, ifACharacter *character, s32 sprite_count)
{
    SObj *sobj;
    void *sprite_head = gGMCommonFiles[file_id];
    s32 i;

    for (i = 0; i < sprite_count; i++)
    {
        sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(sprite_head, character[i].offset));

        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

        sobj->pos.x = character[i].pos.x;
        sobj->pos.y = character[i].pos.y;
    }
}

// 0x801120D4
void ifCommonAnnounceGoMakeInterface(void)
{
    void *sprite_head = gGMCommonFiles[1];
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);
    s32 i;

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 23, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(interface_gobj, ifCommonAnnounceThread, nOMObjProcessKindOSThread, 5);

    for (i = 0; i < ARRAY_COUNT(dIFCommonAnnounceGoSpriteData); i++)
    {
        SObj *sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(sprite_head, dIFCommonAnnounceGoSpriteData[i].offset));

        sobj->sprite.attr = 0x1000 | SP_TEXSHUF; // 0x1000 doesn't exist in base sp.h though?

        sobj->pos.x = dIFCommonAnnounceGoSpriteData[i].pos.x;
        sobj->pos.y = dIFCommonAnnounceGoSpriteData[i].pos.y;
    }
}

// 0x801121C4
void ifCommonAnnounceGoSetStatus(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        ftParamUnlockPlayerControl(fighter_gobj);

        fp->camera_mode = 0;

        fighter_gobj = fighter_gobj->link_next;
    }
    gBattleState->game_status = nGMBattleGameStatusGo;

    gIFPlayerCommonInterface.is_ifmagnify_display = TRUE;
}

// 0x80112234
SObj* ifCommonTrafficMakeSObj(GObj *interface_gobj, s32 id)
{
    SObj *sobj;
    s32 color_id;

    color_id = dIFCommonTrafficSpriteData[id].color_id;

    sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[1], dIFCommonTrafficSpriteOffsets[color_id]));

    sobj->sprite.attr = 0x1000 | SP_TEXSHUF;

    sobj->pos.x = dIFCommonTrafficSpriteData[id].pos.x;
    sobj->pos.y = dIFCommonTrafficSpriteData[id].pos.y;

    sobj->sprite.red   = dIFCommonTrafficSpriteColorsR[color_id];
    sobj->sprite.green = dIFCommonTrafficSpriteColorsG[color_id];
    sobj->sprite.blue  = dIFCommonTrafficSpriteColorsB[color_id];

    return sobj;
}

// 0x801122F4
void ifCommonCountdownThread(GObj *interface_gobj)
{
    SObj *sobj;
    SObj *other_sobj;
    SObj *new_sobj;
    s32 timer;
    f32 rscale;
    f32 scale;
    s32 main_status;
    s32 lamp_status;
    SObj *child_sobj;

    for (timer = 0; timer < 60; timer++)
    {
        sobj = SObjGetStruct(interface_gobj);

        while (sobj != NULL)
        {
            sobj->pos.y += 0.8833333F;

            sobj = sobj->next;
        }
        gsStopCurrentProcess(1);
    }
    sobj = ifGetSObj(interface_gobj);

    main_status = lamp_status = -1;

    child_sobj = sobj->next->next;

    while (TRUE)
    {
        switch (timer)
        {
        case I_SEC_TO_FRAMES(2):
            main_status = lamp_status = 6;

            func_800269C0_275C0(0x1D6);
            break;

        case I_SEC_TO_FRAMES(3):
            main_status = lamp_status = 7;

            func_800269C0_275C0(0x1D5);
            break;

        case I_SEC_TO_FRAMES(4):
            main_status = lamp_status = 8;

            func_800269C0_275C0(0x1D3);
            break;

        case I_SEC_TO_FRAMES(5):
            ifCommonAnnounceGoMakeInterface();
            ifCommonAnnounceGoSetStatus();
            ifCommonPlayerDamageSetShowInterface();

            main_status = lamp_status = 9;

            func_800269C0_275C0(0x1EA);

            break;

        case I_SEC_TO_FRAMES(6):
            goto finish;
        }
        if (lamp_status != -1)
        {
            if (main_status != -1)
            {
                omEjectSObj(sobj->next);
                omEjectSObj(sobj);

                sobj = ifCommonTrafficMakeSObj(interface_gobj, lamp_status);

                sobj->sprite.scalex = sobj->sprite.scaley = scale = 3.0F;

                new_sobj = ifCommonTrafficMakeSObj(interface_gobj, lamp_status + 5);

                if (lamp_status == 9)
                {
                    other_sobj = child_sobj->prev;

                    child_sobj->sprite.red = dIFCommonTrafficGoBacklightR[1];
                    child_sobj->sprite.green = dIFCommonTrafficGoBacklightG[1];
                    child_sobj->sprite.blue = dIFCommonTrafficGoBacklightB[1];

                    child_sobj->shadow_color.r = dIFCommonTrafficGoShadowR[1];
                    child_sobj->shadow_color.g = dIFCommonTrafficGoShadowG[1];
                    child_sobj->shadow_color.b = dIFCommonTrafficGoShadowB[1];

                    if (other_sobj != NULL)
                    {
                        other_sobj->next = child_sobj->next;
                    }
                    other_sobj = child_sobj->next;

                    if (other_sobj != NULL)
                    {
                        other_sobj->prev = child_sobj->prev;
                    }
                    new_sobj->next = child_sobj;

                    child_sobj->prev = new_sobj;
                    child_sobj->next = NULL;
                }
            }
            if (scale != 1.0F)
            {
                scale -= 0.2F;

                if (scale < 1.0F)
                {
                    scale = 1;
                }
                sobj->sprite.scalex = sobj->sprite.scaley = scale;

                rscale = (scale - 1.0F) * 0.5F;

                sobj->pos.x = dIFCommonTrafficSpriteData[lamp_status].pos.x - (rscale * sobj->sprite.width);
                sobj->pos.y = dIFCommonTrafficSpriteData[lamp_status].pos.y - (rscale * sobj->sprite.height);
            }
        }
        timer++;

        gsStopCurrentProcess(1);

        main_status = -1;
    }
finish:
    for (timer = timer; timer < I_SEC_TO_FRAMES(7); timer++)
    {
        sobj = SObjGetStruct(interface_gobj);

        while (sobj != NULL)
        {
            sobj->pos.y += (-0.8833333F);

            sobj = sobj->next;
        }
        gsStopCurrentProcess(1);
    }
    omEjectGObj(NULL);
    gsStopCurrentProcess(1);
}

// 0x80112668
SObj* ifCommonCountdownMakeInterface(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    s32 i;

    interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 23, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(interface_gobj, ifCommonCountdownThread, nOMObjProcessKindOSThread, 5);

    sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[1], &lIFCommonTrafficRod));

    sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

    sobj->pos.x = 103.0F;
    sobj->pos.y = -57.0F;

    sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[1], &lIFCommonTrafficFrame));

    sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

    sobj->pos.x = 111.0F;
    sobj->pos.y = -23.0F;

    for (i = 0; i < 6; i++)
    {
        sobj = ifCommonTrafficMakeSObj(interface_gobj, i);
    }
    ifSetSObj(interface_gobj, sobj);

    ifCommonTrafficMakeSObj(interface_gobj, 10);

    sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[1], &lIFCommonTrafficRodShadow));

    sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

    sobj->pos.x = 182.0F;
    sobj->pos.y = -11.0F;

    sobj->sprite.red   = dIFCommonTrafficGoBacklightR[0];
    sobj->sprite.green = dIFCommonTrafficGoBacklightG[0];
    sobj->sprite.blue  = dIFCommonTrafficGoBacklightB[0];
    sobj->shadow_color.r = dIFCommonTrafficGoShadowR[0];
    sobj->shadow_color.g = dIFCommonTrafficGoShadowG[0];
    sobj->shadow_color.b = dIFCommonTrafficGoShadowB[0];

    return sobj;
}

// 0x80112814
GObj* ifCommonAnnounceTimeUpMakeInterface(void)
{
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

    ifCommonAnnounceSetAttr(interface_gobj, 1, dIFCommonAnnounceTimeUpSpriteData, ARRAY_COUNT(dIFCommonAnnounceTimeUpSpriteData));

    return interface_gobj;
}

// 0x80112880
void ifCommonEntryFocusThread(GObj *interface_gobj)
{
    GObj *fighter_gobj;
    s32 index = interface_gobj->user_data.s;
    s32 process_id = dIFCommonFocusProcessIDs[index];
    s32 count;

    if (index == 1)
    {
        gsStopCurrentProcess(0x5A);
    }
    count = gBattleState->pl_count + gBattleState->cp_count;

    if (count < 3)
    {
        gsStopCurrentProcess(process_id);
    }
    fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        ftCommonAppearSetStatus(fighter_gobj);

        if (index == 2)
        {
            gsStopCurrentProcess(0x1E);

            func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->closeup_camera_zoom, 0.1F, 28.0F);
            gsStopCurrentProcess(process_id - 0x1E);
        }
        else gsStopCurrentProcess(process_id);

        fighter_gobj = fighter_gobj->link_next;
    }
    if (index == 2)
    {
        gsStopCurrentProcess(0x1E);
        cmManagerSetCameraStatusDefault();
    }
    omEjectGObj(NULL);
    gsStopCurrentProcess(1);
}

// 0x801129DC
void ifCommonEntryFocusMakeInterface(s32 id)
{
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterfaceActor, GOBJ_LINKORDER_DEFAULT);

    omAddGObjCommonProc(interface_gobj, ifCommonEntryFocusThread, nOMObjProcessKindOSThread, 5);

    interface_gobj->user_data.s = id;
}

// 0x80112A34
void ifCommonEntryAllThread(GObj *interface_gobj)
{
    gsStopCurrentProcess(0x5A);
    ifCommonCountdownMakeInterface();
    ifCommonEntryFocusMakeInterface(mtTrigGetRandomIntRange(3));
    omEjectGObj(NULL);
    gsStopCurrentProcess(1);
}

// 0x80112A80
void ifCommonEntryAllMakeInterface(void)
{
    omAddGObjCommonProc(omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterfaceActor, GOBJ_LINKORDER_DEFAULT), ifCommonEntryAllThread, nOMObjProcessKindOSThread, 5);

    gBattleState->game_status = nGMBattleGameStatusWait;
}

// 0x80112AD0
void ifCommonSuddenDeathThread(GObj *interface_gobj)
{
    gsStopCurrentProcess(0x5A);
    ifCommonAnnounceGoMakeInterface();
    ifCommonPlayerDamageSetShowInterface();
    ifCommonAnnounceGoSetStatus();
    func_800269C0_275C0(0x1EA);
    omEjectGObj(NULL);
    gsStopCurrentProcess(1);
}

// 0x80112B24
void ifCommonAnnounceSetColors(GObj *interface_gobj, gsColorRGBPair *colors)
{
    SObj *sobj = SObjGetStruct(interface_gobj);

    while (sobj != NULL)
    {
        sobj->sprite.red   = colors->prim.r;
        sobj->sprite.green = colors->prim.g;
        sobj->sprite.blue  = colors->prim.b;
        sobj->shadow_color.r = colors->env.r;
        sobj->shadow_color.g = colors->env.g;
        sobj->shadow_color.b = colors->env.b;

        sobj = sobj->next;
    }
}

// 0x80112B74
void ifCommonSuddenDeathMakeInterface(void)
{
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 23, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(interface_gobj, ifCommonSuddenDeathThread, nOMObjProcessKindOSThread, 5);
    ifCommonAnnounceSetAttr(interface_gobj, 7, dIFCommonAnnounceSuddenDeathSpriteData, ARRAY_COUNT(dIFCommonAnnounceSuddenDeathSpriteData));
    ifCommonAnnounceSetColors(interface_gobj, &dIFCommonAnnounceSuddenDeathSpriteColors);
    func_800269C0_275C0(0x202);

    gBattleState->game_status = nGMBattleGameStatusWait;
}

// 0x80112C18
void ifCommonTimerProcRender(GObj *interface_gobj)
{
    s32 digit;
    s32 i;
    s32 time;
    SObj *sobj;

    sobj = SObjGetStruct(interface_gobj);

    if (gBattleState->match_time_remain == 0)
    {
        sobj = sobj->next->next->next;

        sobj->sprite = *spGetSpriteFromFile(gGMCommonFiles[3], dIFCommonTimerDigitSpriteOffsets[0]);

        sobj->pos.x = (s32)(dIFCommonTimerDigitsSpritePositionsX[3] - (sobj->sprite.width * 0.5F));
        sobj->pos.y = (s32)(30.0F - (sobj->sprite.height * 0.5F));
    }
    else
    {
        if (gBattleState->match_time_remain == sIFCommonTimerLimit)
        {
            time = gBattleState->match_time_remain;
        }
        else time = gBattleState->match_time_remain + 59;

        for (i = 0; i < ARRAY_COUNT(sIFCommonTimerDigitsInterface); i++, sobj = sobj->next)
        {
            digit = time / dIFCommonTimerDigitsUnitLengths[i];

            time -= (digit * dIFCommonTimerDigitsUnitLengths[i]);

            if (sIFCommonTimerDigitsInterface[i] != digit)
            {
                sobj->sprite = *spGetSpriteFromFile(gGMCommonFiles[3], dIFCommonTimerDigitSpriteOffsets[digit]);

                sobj->pos.x = (s32)(dIFCommonTimerDigitsSpritePositionsX[i] - (sobj->sprite.width * 0.5F));
                sobj->pos.y = (s32)(30.0F - (sobj->sprite.height * 0.5F));

                sIFCommonTimerDigitsInterface[i] = digit;
            }
        }
    }
    func_ovl0_800CCF00(interface_gobj);
}

// 0x80112EBC
void ifCommonTimerSetAttr(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(dIFCommonTimerDigitSpriteOffsets); i++)
    {
        spGetSpriteFromFile(gGMCommonFiles[3], dIFCommonTimerDigitSpriteOffsets[i])->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x80112F3C
void ifCommonTimerInitAnnouncedSeconds(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sIFCommonIsAnnouncedSecond); i++)
    {
        sIFCommonIsAnnouncedSecond[i] = FALSE;
    }
}

// 0x80112F68
SObj* ifCommonTimerMakeDigitSObjs(void)
{
    GObj *interface_gobj;
    SObj *sobj;

    if (!(gBattleState->game_rules & GMBATTLE_GAMERULE_TIME) || (gBattleState->time_limit == GMBATTLE_TIMELIMIT_INFINITE))
    {
        return NULL;
    }

    ifCommonTimerSetAttr();

    interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, ifCommonTimerProcRender, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

    gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[3], (intptr_t)&lIFCommonTimerDigit0));
    gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[3], (intptr_t)&lIFCommonTimerDigit0));
    gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[3], (intptr_t)&lIFCommonTimerDigit0));
    gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[3], (intptr_t)&lIFCommonTimerDigit0));

    sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[3], &lIFCommonTimerSymbolColon));

    sobj->pos.x = (s32)(260.0F - (sobj->sprite.width * 0.5F));
    sobj->pos.y = (s32)(30.0F - (sobj->sprite.height * 0.5F));

    sIFCommonTimerDigitsInterface[0] = sIFCommonTimerDigitsInterface[1] = sIFCommonTimerDigitsInterface[2] = sIFCommonTimerDigitsInterface[3] = 10;

    return sobj;
}

// 0x80113104
void ifCommonTimerProcRun(GObj *interface_gobj)
{
    u32 time_update;
    u32 temp;
    s32 i;

    if (sIFCommonTimerIsStarted != FALSE)
    {
        temp = func_8000092C();
        time_update = temp - D_ovl2_801317FC;

        if (time_update != 0)
        {
            D_ovl2_801317FC = temp;

            gBattleState->match_time_current += time_update;

            if ((gBattleState->game_rules & GMBATTLE_GAMERULE_TIME) && (gBattleState->time_limit != GMBATTLE_TIMELIMIT_INFINITE))
            {
                if (gBattleState->match_time_remain != 0)
                {
                    if (gBattleState->match_time_remain < time_update)
                    {
                        gBattleState->match_time_remain = 0;
                    }
                    else gBattleState->match_time_remain -= time_update;

                    if ((gBattleState->gr_kind == nGRKindInishie) && (gBattleState->match_time_remain <= I_SEC_TO_FRAMES(30)) && (gMPCollisionBGMDefault != nGMSoundBGMInishieHurry))
                    {
                        gMPCollisionBGMDefault = nGMSoundBGMInishieHurry;

                        ftParamTryUpdateItemMusic();
                    }
                    if (gBattleState->match_time_remain <= I_SEC_TO_FRAMES(5))
                    {
                        if (gBattleState->match_time_remain == 0)
                        {
                            ifGetProc(interface_gobj)();

                            omEjectGObj(NULL);
                        }
                        else for (i = 0; i < ARRAY_COUNT(sIFCommonIsAnnouncedSecond); i++)
                        {
                            if ((sIFCommonIsAnnouncedSecond[i] == FALSE) && (gBattleState->match_time_remain <= (I_SEC_TO_FRAMES(i) + I_SEC_TO_FRAMES(1))))
                            {
                                func_800269C0_275C0(dIFCommonAnnounceTimerVoiceIDs[i]);

                                sIFCommonIsAnnouncedSecond[i] = TRUE;
                            }
                        }
                        auSetBGMVolume(0, ((gBattleState->match_time_remain / F_SEC_TO_FRAMES(5)) * 20480.0F) + 10240.0F);
                    }
                }
            }
        }
    }
}

// 0x80113398
void ifCommonTimerMakeInterface(void (*proc)(void))
{
    gBattleState->match_time_remain = sIFCommonTimerLimit = I_MIN_TO_FRAMES(gBattleState->time_limit);
    gBattleState->match_time_current = 0;

    sIFCommonTimerIsStarted = FALSE;

    ifCommonTimerInitAnnouncedSeconds();
    ifSetProc(omMakeGObjSPAfter(nOMObjCommonKindInterface, ifCommonTimerProcRun, nOMObjCommonLinkIDInterfaceActor, GOBJ_LINKORDER_DEFAULT), proc);
}

// 0x8011341C
GObj* ifCommonAnnounceGameSetMakeInterface(void)
{
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

    ifCommonAnnounceSetAttr(interface_gobj, 1, dIFCommonAnnounceGameSetSpriteData, ARRAY_COUNT(dIFCommonAnnounceGameSetSpriteData));

    return interface_gobj;
}

// 0x80113488
void ifCommonBattleInitPlacement(void)
{
    s32 i;
    s32 members[5]; // HAL goof?
    s32 teams;

    for (i = 0; i < ARRAY_COUNT(members); i++)
    {
        members[i] = 0;
    }
    switch (gBattleState->is_team_battle)
    {
    case FALSE:
        for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
        {
            if (gBattleState->players[i].pl_kind != nFTPlayerKindNot)
            {
                members[i]++;
            }
        }
        break;

    case TRUE:
        for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
        {
            if (gBattleState->players[i].pl_kind != nFTPlayerKindNot)
            {
                members[gBattleState->players[i].team]++;
            }
        }
        break;
    }
    for (i = teams = 0; i < ARRAY_COUNT(members); i++)
    {
        if (members[i] != 0)
        {
            teams++;
        }
    }
    sIFCommonBattlePlacement = teams - 1;
}

// 0x80113638
void func_ovl2_80113638(GObj *interface_gobj, s32 unused)
{
    func_8000B284(interface_gobj);

    interface_gobj->flags |= 0x40;
}

// 0x8011366C
void func_ovl2_8011366C(GObj *interface_gobj, s32 unused)
{
    func_8000B2B8(interface_gobj);

    interface_gobj->flags &= ~0x40;
}

// 0x801136A4
void ifCommonBattleInterfaceProcUpdate(void)
{
    func_8000AF58(func_ovl2_80113638, 0);

    func_8000AEF0(8, func_ovl2_8011366C, 0);
    func_8000AEF0(0xB, func_ovl2_8011366C, 0);
    func_ovl2_80115834();
    func_ovl2_8011366C(D_ovl2_80131A10, 0);
    func_ovl2_8011366C(D_ovl2_80131A14, 0);
    func_ovl2_80115910();
    func_ovl2_80115944(2);
    func_ovl2_80115944(3);
    func_800266A0_272A0();
    ifCommonBattleEndPlaySoundQueue();
}

// 0x80113744 - Unused?
void func_ovl2_80113744(GObj *fighter_gobj, s32 arg1) 
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    
    if (fp->ft_kind == nFTKindBoss) 
    {
        func_8000B2B8();
        
        fighter_gobj->flags &= ~0x40;
    }
}

// 0x80113790
void ifCommonBattleEndInitSoundNum(void)
{
    sIFCommonBattleEndSoundNum = 0;
}

// 0x8011379C
void ifCommonBattleEndPlaySoundQueue(void)
{
    s32 i;

    for (i = 0; i < sIFCommonBattleEndSoundNum; i++)
    {
        func_800269C0_275C0(sIFCommonBattleEndSoundQueue[i]);
    }
}

// 0x80113804
void ifCommonBattleEndAddSoundQueueID(u16 sfx_id)
{
    if ((gBattleState->game_status == nGMBattleGameStatusEnd) && (sIFCommonBattleEndSoundNum < ARRAY_COUNT(sIFCommonBattleEndSoundQueue)))
    {
        sIFCommonBattleEndSoundQueue[sIFCommonBattleEndSoundNum] = sfx_id;

        sIFCommonBattleEndSoundNum++;
    }
}

// 0x80113854
void ifCommonBattleEndSetBossDefeat(void)
{
    func_ovl65_8018F6DC();

    gBattleState->game_status = nGMBattleGameStatusBossDefeat;
    sIFCommonBattlePauseCameraRestoreWait = 0;
}

// 0x8011388C
void ifCommonBattleUpdateScoreStocks(ftStruct *fp)
{
    s32 teammates_remain; // Live teammates remaining
    s32 current_team; // Current team being checked
    s32 team; // Input player's team
    s32 i;

    team = fp->team;

    for (i = teammates_remain = 0; i < ARRAY_COUNT(gBattleState->players); i++)
    {
        if (gBattleState->players[i].pl_kind == nFTPlayerKindNot) continue;

        switch (gBattleState->is_team_battle)
        {
        case FALSE:
            current_team = i;
            break;

        case TRUE:
            current_team = gBattleState->players[i].team;
            break;
        }
        if ((current_team == team) && (gBattleState->players[i].stock_count != -1))
        {
            teammates_remain++;
        }
    }
    if (teammates_remain == 0) // No players left on this team
    {
        switch (gBattleState->is_team_battle)
        {
        case FALSE:
            gBattleState->players[team].placement = sIFCommonBattlePlacement;
            break;

        case TRUE:
            for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
            {
                if (gBattleState->players[i].pl_kind == nFTPlayerKindNot) continue;

                if (gBattleState->players[i].team == team)
                {
                    gBattleState->players[i].placement = sIFCommonBattlePlacement;
                }
            }
            break;
        }
        sIFCommonBattlePlacement--;

        if (sIFCommonBattlePlacement == 0)
        {
            ifCommonAnnounceEndMessage();
        }
    }
    if ((sIFCommonBattlePlacement != 0) && (fp->stock_count == -1))
    {
        if (fp->status_info.pl_kind == nFTPlayerKindMan)
        {
            ftPublicityDefeatedAddID(dIFCommonAnnounceDefeatedVoiceIDs[fp->player]);
        }
        else ftPublicityDefeatedAddID(0x1E0);

        ftPublicityDefeatedAddID(0x1FF);
    }
}

// 0x80113AA8
void ifCommonBattlePauseProcRender(GObj *interface_gobj)
{
    s32 i;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, GCOMBINE32_RGBA5551(GPACK_RGBA5551(0xFF, 0xFF, 0xFF, 0x01)));

    for (i = 0; i < ARRAY_COUNT(dIFCommonBattlePauseBorderRectangle); i++)
    {
        gDPFillRectangle
        (
            gDisplayListHead[0]++, 
            dIFCommonBattlePauseBorderRectangle[i].ulx, 
            dIFCommonBattlePauseBorderRectangle[i].uly, 
            dIFCommonBattlePauseBorderRectangle[i].lrx, 
            dIFCommonBattlePauseBorderRectangle[i].lry
        );
    }
    func_ovl0_800CCEAC();
}

// 0x80113CF8
void ifCommonBattlePausePlayerNumMakeSObj(GObj *interface_gobj, s32 player)
{
    SObj *sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[5], dIFCommonBattlePausePlayerNumSpriteOffsets[player]));

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue  = 0xFF;

    sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

    sobj->pos.x = 213.0F;
    sobj->pos.y = 191.0F;
}

// 0x80113D60
void ifCommonBattlePauseDecalMakeSObjID(GObj *interface_gobj, s32 id)
{
    SObj *sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[5], dIFCommonBattlePauseDecalsSpriteData[id].offset));

    sobj->pos.x = dIFCommonBattlePauseDecalsSpriteData[id].pos.x;
    sobj->pos.y = dIFCommonBattlePauseDecalsSpriteData[id].pos.y;

    sobj->sprite.red   = dIFCommonBattlePauseDecalsSpriteData[id].colors.prim.r;
    sobj->sprite.green = dIFCommonBattlePauseDecalsSpriteData[id].colors.prim.g;
    sobj->sprite.blue  = dIFCommonBattlePauseDecalsSpriteData[id].colors.prim.b;

    sobj->shadow_color.r = dIFCommonBattlePauseDecalsSpriteData[id].colors.env.r;
    sobj->shadow_color.g = dIFCommonBattlePauseDecalsSpriteData[id].colors.env.g;
    sobj->shadow_color.b = dIFCommonBattlePauseDecalsSpriteData[id].colors.env.b;

    sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
}

// 0x80113E04
void ifCommonBattlePauseMakeSObjsAll(GObj *interface_gobj)
{
    // TO DO: make an enum for pause menu icon indexes
    s32 draw_count = (sIFCommonBattlePauseKindInterface != ifPause_Kind_Default) ? 10 : 12;
    s32 i;

    for (i = 0; i < draw_count; i++)
    {
        ifCommonBattlePauseDecalMakeSObjID(interface_gobj, i);
    }
    // If we're in Bonus Practice, display "L: RETRY" in the bottom left corner
    if ((gSceneData.scene_current == scMajor_Kind_1PBonusGame) && (gSceneData.scene_previous != scMajor_Kind_1PGame)) 
    {
        // WARNING: This needs to be updated in case the pause menu icon array is expanded
        for (i = 12; i < ARRAY_COUNT(dIFCommonBattlePauseDecalsSpriteData); i++)
        {
            ifCommonBattlePauseDecalMakeSObjID(interface_gobj, i);
        }
    }
}

// 0x80113EB4
void ifCommonBattlePauseMakeInterface(s32 player)
{
    GObj *interface_gobj;

    omAddGObjRenderProc(omMakeGObjSPAfter(nOMObjCommonKindPauseMenu, NULL, nOMObjCommonLinkIDPauseMenu, GOBJ_LINKORDER_DEFAULT), ifCommonBattlePauseProcRender, 24, GOBJ_DLLINKORDER_DEFAULT, -1);

    interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindPauseMenu, NULL, nOMObjCommonLinkIDPauseMenu, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 24, GOBJ_DLLINKORDER_DEFAULT, -1);

    ifCommonBattlePausePlayerNumMakeSObj(interface_gobj, player);
    ifCommonBattlePauseMakeSObjsAll(interface_gobj);
}

// 0x80113F50
void func_ovl2_80113F50(void)
{
    func_ovl0_800CB608(gOMObjCommonLinks[nOMObjCommonLinkIDPauseMenu]);
}

// 0x80113F74
void ifCommonInterfaceSetGObjFlagsAll(u32 flags)
{
    GObj *interface_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDInterface];

    while (interface_gobj != NULL)
    {
        interface_gobj->flags = flags;

        interface_gobj = interface_gobj->link_next;
    }
}

// 0x80113F9C
void ifCommonBattlePauseSetGObjFlagsAll(u32 flags)
{
    GObj *pausemenu_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDPauseMenu];

    while (pausemenu_gobj != NULL)
    {
        pausemenu_gobj->flags = flags;

        pausemenu_gobj = pausemenu_gobj->link_next;
    }
}

// 0x80113FC4
void ifCommonBattlePauseInitInterface(s32 player)
{
    ifCommonInterfaceSetGObjFlagsAll(GOBJ_FLAG_NORENDER);
    gmRumbleInitPlayers();
    grWallpaperSetPausePerspUpdate();

    gIFPlayerCommonInterface.is_ifmagnify_display = FALSE;
    gBattleState->game_status = nGMBattleGameStatusPause;

    sIFCommonBattlePausePlayer = player;

    func_80026594_27194();
    func_800269C0_275C0(nGMSoundFGMGamePause);
    auSetBGMVolume(0, 0x3C00);
    ifCommonBattlePauseMakeInterface(player);
}

// 0x8011403C
void ifCommonBattleGoUpdateInterface(void)
{
    GObj *fighter_gobj;
    ftStruct *fp;
    s32 player;
    Vec3f sp68;
    Vec3f sp5C;

    for (player = 0; player < (ARRAY_COUNT(gBattleState->players) + ARRAY_COUNT(gPlayerControllers)) / 2; player++) // WARNING: GMBATTLE_PLAYERS_MAX and MAX_CONTROLLERS should be identical
    {
        if (gPlayerControllers[player].button_new & START_BUTTON)
        {
            if (gBattleState->players[player].pl_kind != nFTPlayerKindNot)
            {
                if ((gBattleState->gr_kind != nGRKindBonus3) || (gBattleState->players[player].pl_kind != nFTPlayerKindCom))
                {
                    fighter_gobj = gBattleState->players[player].fighter_gobj;

                    fp = ftGetStruct(fighter_gobj);

                    if ((fp->status_info.status_id == nFTCommonStatusSleep) && (ftCommonSleepCheckIgnorePauseMenu(fighter_gobj) != FALSE)) continue;

                    if (!(fp->is_ignore_training_menu))
                    {
                        if (gBattleState->game_type == nGMBattleGameTypeBonus)
                        {
                            sp68.x = gMPCollisionGroundData->unk_groundinfo_0x9A.x;
                            sp68.y = gMPCollisionGroundData->unk_groundinfo_0x9A.y;
                            sp68.z = gMPCollisionGroundData->unk_groundinfo_0x9A.z;

                            sp5C.x = gMPCollisionGroundData->unk_groundinfo_0xA0.x;
                            sp5C.y = gMPCollisionGroundData->unk_groundinfo_0xA0.y;
                            sp5C.z = gMPCollisionGroundData->unk_groundinfo_0xA0.z;

                            func_ovl2_8010D0A4(&sp68, &sp5C);

                            sIFCommonBattlePauseKindInterface = ifPause_Kind_Bonus;
                        }
                        else if (cmManagerCheckPausePlayerOutBounds(&DObjGetStruct(fighter_gobj)->translate.vec.f) != FALSE)
                        {
                            sIFCommonBattlePauseKindInterface = ifPause_Kind_PlayerNA;
                        }
                        else
                        {
                            func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->closeup_camera_zoom, 0.1F, 29.0F);

                            sIFCommonBattlePauseCameraEyeXOrigin = gCMManagerPauseCameraEyeY;
                            sIFCommonBattlePauseCameraEyeYOrigin = gCMManagerPauseCameraEyeX;

                            sIFCommonBattlePauseKindInterface = ifPause_Kind_Default;

                            sIFCommonBattlePausePlayerLOD = fp->detail_current;

                            ftParamSetModelPartDetailAll(fighter_gobj, nFTPartsDetailHigh);
                        }
                        ifCommonBattlePauseInitInterface(player);

                        return;
                    }
                }
            }
            sIFCommonBattlePauseKindInterface = 0;

            ifCommonBattlePauseInitInterface(player);

            return;
        }
    }
    func_8000A5E4();
}

// 0x801142B4
void ifCommonBattleInterfaceProcSet(void)
{
    ifCommonInterfaceSetGObjFlagsAll(GOBJ_FLAG_NORENDER);

    gBattleState->game_status = nGMBattleGameStatusSet;

    sIFCommonBattlePauseCameraRestoreWait = 3;
}

// 0x801142EC
void ifCommonBattlePauseUpdateInterface(void)
{
    u16 button_new = gPlayerControllers[sIFCommonBattlePausePlayer].button_new;
    u16 button_press = gPlayerControllers[sIFCommonBattlePausePlayer].button_press;

    if (sIFCommonBattlePauseKindInterface == ifPause_Kind_Default)
    {
        s32 stick_x = gPlayerControllers[sIFCommonBattlePausePlayer].stick_range.x;
        s32 stick_y = gPlayerControllers[sIFCommonBattlePausePlayer].stick_range.y;

        if (ABS(stick_x) > 8.0F)
        {
            gCMManagerPauseCameraEyeY += (stick_x * 0.000333F);

            if (gCMManagerPauseCameraEyeY > F_CLC_DTOR32(50.0F))
            {
                gCMManagerPauseCameraEyeY = F_CLC_DTOR32(50.0F);
            }
            else if (gCMManagerPauseCameraEyeY < F_CLC_DTOR32(-50.0F))
            {
                gCMManagerPauseCameraEyeY = F_CLC_DTOR32(-50.0F);
            }
        }
        if (ABS(stick_y) > 8.0F)
        {
            gCMManagerPauseCameraEyeX -= (stick_y * 0.000333F);

            if (gCMManagerPauseCameraEyeX > F_CLC_DTOR32(20.0F))
            {
                gCMManagerPauseCameraEyeX = F_CLC_DTOR32(20.0F);
            }
            else if (gCMManagerPauseCameraEyeX < F_CLC_DTOR32(-20.0F))
            {
                gCMManagerPauseCameraEyeX = F_CLC_DTOR32(-20.0F);
            }
        }
    }
    if (button_new)
    {
        if (button_new & START_BUTTON)
        {
            if (sIFCommonBattlePauseKindInterface != ifPause_Kind_PlayerNA)
            {
                cmManagerSetCameraStatusPrev();

                sIFCommonBattlePauseCameraRestoreWait = 20;
            }
            else sIFCommonBattlePauseCameraRestoreWait = 0;

            gBattleState->game_status = nGMBattleGameStatusUnpause;

            return;
        }
        else button_press = gPlayerControllers[sIFCommonBattlePausePlayer].button_press;

        if
        (
            (button_press & A_BUTTON) &&
            (button_press & B_BUTTON) &&
            (button_press & R_TRIG) &&
            (button_press & Z_TRIG)
        )
        {
            gSceneData.is_reset = TRUE;

            func_8000AF58(func_ovl2_80113638, 0);
            func_800266A0_272A0();
            gmRumbleInitPlayers();
            ifCommonBattlePauseSetGObjFlagsAll(GOBJ_FLAG_NORENDER);
            ifCommonBattleInterfaceProcSet();

            return;
        }
        if ((button_new & L_TRIG) && (gSceneData.scene_current == scMajor_Kind_1PBonusGame) && (gSceneData.scene_previous != scMajor_Kind_1PGame))
        {
            func_800266A0_272A0();
            gmRumbleInitPlayers();
            leoInitUnit_atten();

            return;
        }
    }
    if (sIFCommonBattlePauseKindInterface != ifPause_Kind_PlayerNA)
    {
        cmManagerRunGlobalProcCamera(gCMManagerCameraGObj);
        grWallpaperRunGObjProcess();
    }
}

// 0x80114588
void ifCommonBattlePauseRestoreInterfaceAll(void)
{
    if (sIFCommonBattlePauseCameraRestoreWait != 0)
    {
        sIFCommonBattlePauseCameraRestoreWait--;

        gCMManagerPauseCameraEyeY += (sIFCommonBattlePauseCameraEyeXOrigin - gCMManagerPauseCameraEyeY) * 0.1F;
        gCMManagerPauseCameraEyeX += (sIFCommonBattlePauseCameraEyeYOrigin - gCMManagerPauseCameraEyeX) * 0.1F;

        cmManagerRunGlobalProcCamera(gCMManagerCameraGObj);
        grWallpaperRunGObjProcess();

        return;
    }
    func_ovl2_80113F50();
    ifCommonInterfaceSetGObjFlagsAll(0);
    grWallpaperResetPausePerspUpdate();

    gIFPlayerCommonInterface.is_ifmagnify_display = TRUE;

    gBattleState->game_status = nGMBattleGameStatusGo;

    gCMManagerPauseCameraEyeY = sIFCommonBattlePauseCameraEyeXOrigin;
    gCMManagerPauseCameraEyeX = sIFCommonBattlePauseCameraEyeYOrigin;

    func_800264A4_270A4();
    auSetBGMVolume(0, 0x7800);

    if (sIFCommonBattlePauseKindInterface == ifPause_Kind_Default)
    {
        ftParamSetModelPartDetailAll(gBattleState->players[sIFCommonBattlePausePlayer].fighter_gobj, sIFCommonBattlePausePlayerLOD);
    }
    func_8000A5E4();
}

// 0x801146DC
void ifCommonBattleEndUpdateInterface(void)
{
    sIFCommonBattleInterfaceProcUpdate();

    gBattleState->game_status = nGMBattleGameStatusBossDefeat;

    D_ovl2_80131859 = D_ovl2_8013185A = 0;
}

// 0x80114724
void ifCommonBattleBossDefeatUpdateInterface(void)
{
    if (sIFCommonBattlePauseCameraRestoreWait != 0)
    {
        sIFCommonBattlePauseCameraRestoreWait--;
    }
    else sIFCommonBattleInterfaceProcSet();

    if (D_ovl2_8013185A == 0)
    {
        func_8000A5E4();

        D_ovl2_8013185A = D_ovl2_80131859;
    }
    else
    {
        cmManagerRunGlobalProcCamera(gCMManagerCameraGObj);
        grWallpaperRunGObjProcess();

        D_ovl2_8013185A--;
    }
}

// 0x801147BC
void ifCommonBattleSetUpdateInterface(void)
{
    if (sIFCommonBattlePauseCameraRestoreWait != 0)
    {
        sIFCommonBattlePauseCameraRestoreWait--;
    }
    else leoInitUnit_atten();

    func_8000A5E4();
}

// 0x80114800
void ifCommonSetMaxNumGObj(void)
{
    size_t free_space = (uintptr_t)gGeneralHeap.end - (uintptr_t)gGeneralHeap.ptr;

    if ((omGetMaxNumGObj() == -1) && (free_space < ML_BYTES_TO_KBYTES(25)))
    {
        omSetMaxNumGObj(omGetGObjActiveCount());
    }
}

// 0x8011485C
void ifCommonBattleUpdateInterfaceAll(void)
{
    if (gBattleState->game_status != nGMBattleGameStatusGo)
    {
        sIFCommonTimerIsStarted = FALSE;
    }
    else if (sIFCommonTimerIsStarted == FALSE)
    {
        sIFCommonTimerIsStarted = TRUE;
        D_ovl2_801317FC = 0;

        func_80000920(0);
    }
    switch (gBattleState->game_status)
    {
    case nGMBattleGameStatusWait:
        func_8000A5E4();
        break;

    case nGMBattleGameStatusGo:
        ifCommonBattleGoUpdateInterface();
        break;

    case nGMBattleGameStatusPause:
        ifCommonBattlePauseUpdateInterface();
        break;

    case nGMBattleGameStatusUnpause:
        ifCommonBattlePauseRestoreInterfaceAll();
        break;

    case nGMBattleGameStatusEnd:
        ifCommonBattleEndUpdateInterface();
        /* fallthrough */

    case nGMBattleGameStatusBossDefeat:
        ifCommonBattleBossDefeatUpdateInterface();
        break;

    case nGMBattleGameStatusSet:
        ifCommonBattleSetUpdateInterface();
        break;
    }
    ifCommonSetMaxNumGObj();
}

// 0x80114958
void ifCommonBattleSetGameStatusWait(void)
{
    gBattleState->game_status = nGMBattleGameStatusWait;
}

// 0x80114968
void ifCommonPlayerInterfaceAddToViewport(ftStruct *fp)
{
    func_ovl2_80103974(gIFPlayerCommonInterface.ifplayers_pos_x[fp->player], gIFPlayerCommonInterface.ifplayers_pos_y);
}

// 0x801149CC
void ifCommonPlayerScoreMakeEffect(ftStruct *fp, s32 arg1)
{
    Vec3f pos;

    pos.x = ((gIFPlayerCommonInterface.ifplayers_pos_x[fp->player] + dIFCommonPlayerScorePositionOffsetsX[fp->player]) << 2);
    pos.y = ((gIFPlayerCommonInterface.ifplayers_pos_y + 13) << 2); // ??? Can't get this one to match unless we do bitwise instead of literal multiplication
    pos.z = 0.0F;

    efManagerBattleScoreMakeEffect(&pos, arg1);
}

// 0x80114A48
GObj* ifCommonAnnounceFailureMakeInterface(void)
{
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 23, GOBJ_DLLINKORDER_DEFAULT, -1);
    ifCommonAnnounceSetAttr(interface_gobj, 7, dIFCommonAnnounceFailureSpriteData, ARRAY_COUNT(dIFCommonAnnounceFailureSpriteData));
    ifCommonAnnounceSetColors(interface_gobj, &dIFCommonAnnounceFailureSpriteColors);

    return interface_gobj;
}

// 0x8014AC4
GObj* ifCommonAnnounceCompleteMakeInterface(void)
{
    GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 23, GOBJ_DLLINKORDER_DEFAULT, -1);
    ifCommonAnnounceSetAttr(interface_gobj, 7, dIFCommonAnnounceCompleteSpriteData, ARRAY_COUNT(dIFCommonAnnounceCompleteSpriteData));
    ifCommonAnnounceSetColors(interface_gobj, &dIFCommonAnnounceCompleteSpriteColors);

    return interface_gobj;
}

// 0x80114B40
void ifCommonBonusInterfaceProcUpdate(void)
{
    func_8000AF58(func_ovl2_80113638, 0);
    gmRumbleInitPlayers();
    func_800266A0_272A0();
    ifCommonBattleEndPlaySoundQueue();
}

// 0x80114B80
void ifCommonBattleSetInterface(void (*proc_update)(void), void (*proc_set)(void), u16 sfx_id, u16 restore_wait)
{
    gBattleState->game_status = nGMBattleGameStatusEnd;
    sIFCommonBattlePauseCameraRestoreWait = restore_wait;

    sIFCommonBattleInterfaceProcUpdate = proc_update;
    sIFCommonBattleInterfaceProcSet = proc_set;

    ifCommonBattleEndInitSoundNum();

    if (sfx_id != nGMSoundFGMVoiceEnd)
    {
        ifCommonBattleEndAddSoundQueueID(sfx_id);
    }
}

// 0x80114BE4
void ifCommonBattleBossDefeatSetGameStatus(void)
{
    gBattleState->game_status = nGMBattleGameStatusBossDefeat;

    sIFCommonBattlePauseCameraRestoreWait = -1;

    sIFCommonBattleInterfaceProcSet = ifCommonBattleInterfaceProcSet;
    D_ovl2_80131859 = 2;
}

// 0x80114C20
void ifCommon1PGameInterfaceProcSet(void)
{
    func_8000AEF0(9, func_ovl2_8011366C, 0);
    func_ovl2_80104D30();
    ifCommonInterfaceSetGObjFlagsAll(GOBJ_FLAG_NORENDER);

    gBattleState->game_status = nGMBattleGameStatusSet;

    sIFCommonBattlePauseCameraRestoreWait = 45;

    func_ovl65_8018F3AC();

    gIFPlayerCommonInterface.is_ifmagnify_display = FALSE;
}

// 0x80114C80
void ifCommonAnnounceEndMessage(void)
{
    if (gBattleState->gr_kind >= nGRKindBonusGameStart)
    {
        ifCommonBattleSetInterface(ifCommonBattleInterfaceProcUpdate, ifCommonBattleInterfaceProcSet, 0x1CC, 90);
        ifCommonAnnounceFailureMakeInterface();
    }
    else
    {
        if ((gBattleState->game_type == nGMBattleGameType1PGame) && (gBattleState->players[gSceneData.spgame_player].stock_count != -1))
        {
            ifCommonBattleSetInterface(ifCommonBattleInterfaceProcUpdate, ifCommon1PGameInterfaceProcSet, 0x1E8, 90);
        }
        else ifCommonBattleSetInterface(ifCommonBattleInterfaceProcUpdate, ifCommonBattleInterfaceProcSet, 0x1E8, 90);

        ifCommonAnnounceGameSetMakeInterface();
    }
}

// 0x80114D58
void ifCommonAnnounceCompleteInitInterface(u16 sfx_id)
{
    ifCommonBattleSetInterface(ifCommonBonusInterfaceProcUpdate, ifCommonBattleInterfaceProcSet, sfx_id, 90);
    ifCommonAnnounceCompleteMakeInterface();
}

// 0x80114D98
void ifCommonAnnounceTimeUpInitInterface(void)
{
    ifCommonBattleSetInterface(ifCommonBonusInterfaceProcUpdate, ifCommonBattleInterfaceProcSet, 0x20F, 90);
    ifCommonAnnounceTimeUpMakeInterface();
}

// 0x80114DD4
void ifCommonAnnounceFailureInitInterface(void)
{
    if (gBattleState->game_status != nGMBattleGameStatusEnd)
    {
        ifCommonBattleSetInterface(ifCommonBonusInterfaceProcUpdate, ifCommonBattleInterfaceProcSet, 0x1CC, 90);
        ifCommonAnnounceFailureMakeInterface();
    }
}
