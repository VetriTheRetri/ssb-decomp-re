#ifndef _MENU_H_
#define _MENU_H_

#include "mntypes.h"
#include "mnfunctions.h"

extern u32 lMNPlayersPortraitsFileID;                   // 0x00000013
extern u32 lMNSelectCommonFileID;                       // 0x00000015
extern u32 lMNDataCommonFileID;						    // 0x00000020
extern u32 lMNCommonFontsFileID;					    // 0x00000021

extern intptr_t lMNSelectCommonWallpaperSprite;         // 0x00000440

extern intptr_t lMNCommonFontsLetterASprite;		    // 0x00000040
extern intptr_t lMNCommonFontsLetterBSprite;		    // 0x000000D0
extern intptr_t lMNCommonFontsLetterCSprite;		    // 0x00000160
extern intptr_t lMNCommonFontsLetterDSprite;		    // 0x000001F0
extern intptr_t lMNCommonFontsLetterESprite;		    // 0x00000280
extern intptr_t lMNCommonFontsLetterFSprite;		    // 0x00000310
extern intptr_t lMNCommonFontsLetterGSprite;		    // 0x000003A0
extern intptr_t lMNCommonFontsLetterHSprite;		    // 0x00000430
extern intptr_t lMNCommonFontsLetterISprite;		    // 0x000004C0
extern intptr_t lMNCommonFontsLetterJSprite;		    // 0x00000550
extern intptr_t lMNCommonFontsLetterKSprite;		    // 0x000005E0
extern intptr_t lMNCommonFontsLetterLSprite;		    // 0x00000670
extern intptr_t lMNCommonFontsLetterMSprite;		    // 0x00000700
extern intptr_t lMNCommonFontsLetterNSprite;		    // 0x00000790
extern intptr_t lMNCommonFontsLetterOSprite;		    // 0x00000820
extern intptr_t lMNCommonFontsLetterPSprite;		    // 0x000008B0
extern intptr_t lMNCommonFontsLetterQSprite;		    // 0x00000940
extern intptr_t lMNCommonFontsLetterRSprite;		    // 0x000009D0
extern intptr_t lMNCommonFontsLetterSSprite;		    // 0x00000A60
extern intptr_t lMNCommonFontsLetterTSprite;		    // 0x00000AF0
extern intptr_t lMNCommonFontsLetterUSprite;		    // 0x00000B80
extern intptr_t lMNCommonFontsLetterVSprite;		    // 0x00000C10
extern intptr_t lMNCommonFontsLetterWSprite;		    // 0x00000CA0
extern intptr_t lMNCommonFontsLetterXSprite;		    // 0x00000D30
extern intptr_t lMNCommonFontsLetterYSprite;		    // 0x00000DC0
extern intptr_t lMNCommonFontsLetterZSprite;		    // 0x00000E50
extern intptr_t lMNCommonFontsSymbolApostropheSprite;   // 0x00000ED0
extern intptr_t lMNCommonFontsSymbolPercentSprite;      // 0x00000F60
extern intptr_t lMNCommonFontsSymbolPeriodSprite;	    // 0x00000FD0

extern intptr_t lMNCommonOptionTabLeftSprite;           // 0x000001E8
extern intptr_t lMNCommonOptionTabMiddleSprite;         // 0x00000330
extern intptr_t lMNCommonOptionTabRightSprite;          // 0x00000568
extern intptr_t lMNCommonDecalPaperSprite;              // 0x00002A30
extern intptr_t lMNCommonSmashLogoSprite;               // 0x000031F8
extern intptr_t lMNCommonTextOnSprite;                  // 0x0000B818
extern intptr_t lMNCommonTextOffSprite;                 // 0x0000B958
extern intptr_t lMNCommonTextSlashSprite;               // 0x0000BA28
extern intptr_t lMNCommonLabelGameModeSprite;           // 0x0000D240
extern intptr_t lMNCommonDigit0Sprite;                  // 0x0000D310
extern intptr_t lMNCommonDigit1Sprite;                  // 0x0000D3E0
extern intptr_t lMNCommonDigit2Sprite;                  // 0x0000D4B0
extern intptr_t lMNCommonDigit3Sprite;                  // 0x0000D580
extern intptr_t lMNCommonDigit4Sprite;                  // 0x0000D650
extern intptr_t lMNCommonDigit5Sprite;                  // 0x0000D720
extern intptr_t lMNCommonDigit6Sprite;                  // 0x0000D7F0
extern intptr_t lMNCommonDigit7Sprite;                  // 0x0000D8C0
extern intptr_t lMNCommonDigit8Sprite;                  // 0x0000D990
extern intptr_t lMNCommonDigit9Sprite;                  // 0x0000DA60
extern intptr_t lMNCommonSymbolPercentSprite;           // 0x0000DB30
extern intptr_t lMNCommonInfinitySprite;                // 0x0000DC48
extern intptr_t lMNCommonRightArrowSprite;              // 0x0000DD90
extern intptr_t lMNCommonLeftArrowSprite;               // 0x0000DE30
extern intptr_t lMNCommonTextAutoSprite;                // 0x0000DF48
extern intptr_t lMNCommonWallpaperSprite;               // 0x00018000

extern intptr_t lMNDataCommonDataHeaderSprite;          // 0x00000B40
extern intptr_t lMNDataCommonArrowLeftSprite;           // 0x00000BE0
extern intptr_t lMNDataCommonArrowRightSprite;          // 0x00000C80

// lMNPlayers is only temporarily here
extern intptr_t lMNPlayersMarioPortraitSprite;		    // 0x00004728
extern intptr_t lMNPlayersFoxPortraitSprite;		    // 0x0000D068
extern intptr_t lMNPlayersDonkeyPortraitSprite;		    // 0x00008BC8
extern intptr_t lMNPlayersSamusPortraitSprite;		    // 0x0000AE18
extern intptr_t lMNPlayersLuigiPortraitSprite;		    // 0x00006978
extern intptr_t lMNPlayersLinkPortraitSprite;		    // 0x00011508
extern intptr_t lMNPlayersYoshiPortraitSprite;		    // 0x00013758
extern intptr_t lMNPlayersCaptainPortraitSprite;	    // 0x00019E48
extern intptr_t lMNPlayersKirbyPortraitSprite;		    // 0x0000F2B8
extern intptr_t lMNPlayersPikachuPortraitSprite;	    // 0x000159A8
extern intptr_t lMNPlayersPurinPortraitSprite;		    // 0x0001C098
extern intptr_t lMNPlayersNessPortraitSprite;		    // 0x00017BF8

extern intptr_t lMNVSModeVSSprite;                      // 0x00006118
extern intptr_t lMNVSModeVSStartSprite;                 // 0x000024C8
extern intptr_t lMNVSModeSmallStockSprite;              // 0x00002A80
extern intptr_t lMNVSModeSmallTimeSprite;               // 0x000028E0
extern intptr_t lMNVSModeTeamSprite;                    // 0x00002C20
extern intptr_t lMNVSModeRuleSprite;                    // 0x00002748
extern intptr_t lMNVSModeTimeSprite;                    // 0x00002EC8
extern intptr_t lMNVSModeMinSprite;                     // 0x00002FC8
extern intptr_t lMNVSModeStockSprite;                   // 0x00003248
extern intptr_t lMNVSModeVSOptionsSprite;               // 0x00003828
extern intptr_t lMNVSModeN64ConsoleSprite;              // 0x00005EB0

extern intptr_t lMNDataCharactersOptionSprite;          // 0x000014E0
extern intptr_t lMNDataVSRecordOptionSprite;            // 0x00001900
extern intptr_t lMNDataSoundTestOptionSprite;           // 0x00001D20
extern intptr_t lMNDataHeaderTextSprite;                // 0x000023A8
extern intptr_t lMNDataDecalNotebookSprite;             // 0x00004A78

extern intptr_t lMNOptionMonoTextSprite;                // 0x000071F8
extern intptr_t lMNOptionStereoTextSprite;              // 0x000073A8
extern intptr_t lMNOptionSoundTextSprite;               // 0x00007628
extern intptr_t lMNOptionScreenAdjustTextSprite;        // 0x00008138
extern intptr_t lMNOptionBackupClearTextSprite;         // 0x00008780
extern intptr_t lMNOptionLabelTextSprite;               // 0x00009288
extern intptr_t lMNOptionKnobSprite;                    // 0x0000B958

#endif