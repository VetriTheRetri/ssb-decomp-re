#include <ft/fighter.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <cm/camera.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>

extern void func_800A26B8();

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define SC1PGAME_STAGE_MAX_TEAM_COUNT 30
#define SC1PGAME_STAGE_MAX_VARIATIONS_COUNT 12

#define SC1PGAME_STAGE_YOSHI_VARIATIONS_COUNT 6
#define SC1PGAME_STAGE_YOSHI_TEAM_COUNT 18

#define SC1PGAME_STAGE_KIRBY_VARIATIONS_COUNT 7
#define SC1PGAME_STAGE_KIRBY_TEAM_COUNT	8
#define SC1PGAME_STAGE_KIRBY_SIM_COUNT 2				// Number of opponents fought at once

#define SC1PGAME_STAGE_MAX_OPPONENT_COUNT 3

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern alSoundEffect D_8009EDD0_406D0;

extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000040;
extern intptr_t D_NF_000000C8;
extern intptr_t D_NF_000000E6;
extern intptr_t D_NF_00000019;
extern intptr_t D_NF_00000068;
extern intptr_t D_NF_00000080;
extern intptr_t D_NF_00004D48;
extern intptr_t D_NF_00006010;
extern intptr_t D_NF_00006450;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80192FA0 - Total number of enemies on current stage?
u8 sSC1PGameEnemyPlayerCount;

// 0x80192FA1 - Remaining stocks of enemy team
u8 sSC1PGameEnemyStocksRemaining;

// 0x80192FA4 - Flag to hide stock icons of defeated "VS *character* Team" members
u32 sSC1PGameEnemyStockSpriteFlags;

// 0x80192FA8 - "VS *character* Team" members defeated?
u8 sSC1PGameTeamPlayersRemaining;

// 0x80192FA9 - Current enemy variation?
u8 sSC1PGameCurrentEnemyVariation;

// 0x80192FAC
s32 sSC1PGamePad0x80192FAC;

// 0x80192FB0 - Number of unique enemy patterns in "VS *character* Team" battles (e.g. 6 randomly selected colors repeated 3 times for Yoshi Team)
u8 sSC1PGameEnemyVariations[SC1PGAME_STAGE_MAX_TEAM_COUNT];

// 0x80192FD0 - Camera target position when Master Hand is defeated
Vec3f sSC1PGameBossDefeatZoomPosition;

// 0x80192FDC
u16 sSC1PGameBossDefeatSoundTerminateTemp;

// 0x80192FE0
sc1PGameFighter sSC1PGamePlayerSetups[GMCOMMON_PLAYERS_MAX];

// 0x80193060 - Costume ID for all members of Kirby Team?
s32 sSC1PGameEnemyKirbyCostume;

// 0x80193064 - Base of Fighting Polygon Team stock sprite file?
void *sSC1PGameZakoStockSprite;

// 0x80193068
rdFileNode sSC1PGameStatusBuf[100];

// 0x80193388
rdFileNode sSC1PGameForceBuf[7];

// 0x801933C0
sb32 sSC1PGameIsEndStage;

// 0x801933C4 - Only works on Meta Crystal and Duel Zone?
sb32 sSC1PGameIsStartStage;

// 0x801933C8
s32 sSC1PGameBonusStatEndPlayerStatus;

// 0x801933CC
s32 sSC1PGameBonusStatInvincibleTimer;

// 0x801933D0 - Specific stats of all enemy players?
sc1PGameStats sSC1PGameBonusStatEnemyStats[SC1PGAME_STAGE_MAX_TEAM_COUNT];

// 0x801936A0 - Player's number of KOs scored on enemies
s32 sSC1PGameBonusStatNumPlayerKOs;

// 0x801936A4
sb32 gSC1PGameBonusBrosCalamity;

// 0x801936A8
u8 gSC1PGameBonusTomatoCount;

// 0x801936A9
u8 gSC1PGameBonusHeartCount;

// 0x801936AA
u8 gSC1PGameBonusStarCount;

// 0x801936AB
ub8 gSC1PGameBonusShieldBreaker;

// 0x801936AC
ub8 gSC1PGameBonusGiantImpact;

// 0x801936AD
ub8 gSC1PGameBonusMewCatcher;

// 0x801936B0
u32 gSC1PGameBonusAttackIDCount[nFTStatusAttackIDEnumMax];

// 0x80193798
u32 gSC1PGameBonusAttackIsSmashCount[2];

// 0x801937A0
u32 gSC1PGameBonusAttackGroundAirCount[2];

// 0x801937A8
u32 gSC1PGameBonusAttackIsProjectileCount[2];

// 0x801937B0
u32 gSC1PGameBonusDefendIDCount[nFTStatusAttackIDEnumMax];

// 0x80193898
u32 gSC1PGameBonusDefendIsSmashCount[2];

// 0x801938A0
u32 gSC1PGameBonusDefendGroundAirCount[2];

// 0x801938A8
u32 gSC1PGameBonusDefendIsProjectileCount[2];

// 0x801938B0
u32 sSC1PGameStageTimeSec;

// 0x801938B4
u32 sSC1PGameTotalTimeSec;

// 0x801938B8
s32 sSC1PGamePlayerInterfacePositionsX[GMCOMMON_PLAYERS_MAX];

// 0x801938C8 - Number of enemy stock icons to display?
u8 sSC1PGameEnemyStocksDisplay;

// 0x801938CC
ftSprites *sSC1PGameEnemyTeamSprites;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80192800
u8 dSC1PGameKirbyTeamCopyKinds[/* */] = 
{ 
    nFTKindMario,
    nFTKindDonkey,
    nFTKindLink,
    nFTKindSamus,
    nFTKindYoshi,
    nFTKindFox,
    nFTKindPikachu
};

// 0x80192808
f32 D_ovl65_80192808[/* */] = { -15.0F, 0.0F, 15.0F, 30.0F, 45.0F, 60.0F };

// 0x80192820
f32 D_ovl65_80192820[/* */] = { 1.0F, 2.0F, -8.0F, -30.0F };

// 0x80192830
sc1PGameComputer dSC1PGameComputerDesc[/* */] = 
{
    // VS Link
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchLow,     // Item Switch
        {  1,  2,  3,  6,  8 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Yoshi Team
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchMiddle,  // Item Switch
        {  1,  2,  4,  6,  8 },     // Enemy CPU levels per difficulty setting
        { 10, 11, 12, 13, 14 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Fox
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchMiddle,  // Item Switch
        {  2,  3,  5,  7,  9 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Bonus Stage: Break the Targets!
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchNone,    // Item Switch
        {  1,  1,  1,  1,  1 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Mario Bros.
    {
        FALSE,                      // Is team attack enabled?
        nSCBattleItemSwitchMiddle,  // Item Switch
        {  2,  3,  5,  7,  9 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  5,  5,  5,  4,  2 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Pikachu
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchMiddle,  // Item Switch
        {  3,  4,  5,  7,  9 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Giant Donkey Kong
    {
        FALSE,                      // Is team attack enabled?
        nSCBattleItemSwitchHigh,    // Item Switch
        {  2,  4,  6,  7,  8 },     // Enemy CPU levels per difficulty setting
        { 25, 26, 27, 28, 29 },     // Enemy handicaps per difficulty setting
        {  4,  4,  4,  3,  2 },     // Ally CPU levels per difficulty setting
        {  7,  7,  7,  7,  7 }      // Ally handicaps per difficulty setting
    },

    // Bonus Stage: Board the Platforms!
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchNone,    // Item Switch
        {  1,  1,  1,  1,  1 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Kirby Team
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchMiddle,  // Item Switch
        {  3,  4,  5,  6,  7 },     // Enemy CPU levels per difficulty setting
        { 15, 16, 17, 18, 19 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Samus
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchMiddle,  // Item Switch
        {  5,  6,  8,  9,  9 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9, 40 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Metal Mario
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchVeryLow, // Item Switch
        {  1,  3,  4,  6,  8 },     // Enemy CPU levels per difficulty setting
        { 30, 31, 32, 33, 34 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Bonus Stage: Race to the Finish!
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchNone,    // Item Switch
        {  6,  8,  9,  9,  9 },     // Enemy CPU levels per difficulty setting
        {  1,  3,  5,  7,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Fighting Polygon Team
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchHigh,    // Item Switch
        {  2,  3,  4,  5,  7 },     // Enemy CPU levels per difficulty setting
        { 20, 21, 22, 23, 24 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Final Stage
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchNone,    // Item Switch
        {  1,  2,  3,  4,  5 },     // Enemy CPU levels per difficulty setting
        { 35, 36, 37, 38, 39 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Challenger Approaching: Luigi
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchNone,    // Item Switch
        {  6,  7,  7,  8,  9 },     // Enemy CPU levels per difficulty setting
        {  6,  6,  6,  6,  6 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Challenger Approaching: Ness
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchNone,    // Item Switch
        {  6,  7,  7,  8,  9 },     // Enemy CPU levels per difficulty setting
        {  6,  6,  6,  6,  6 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Challenger Approaching: Jigglypuff
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchNone,    // Item Switch
        {  6,  7,  7,  8,  9 },     // Enemy CPU levels per difficulty setting
        {  6,  6,  6,  6,  6 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Challenger Approaching: Captain Falcon
    {
        TRUE,                       // Is team attack enabled?
        nSCBattleItemSwitchNone,    // Item Switch
        {  6,  7,  7,  8,  9 },     // Enemy CPU levels per difficulty setting
        {  6,  6,  6,  6,  6 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    }
};

// 0x801929BC
sc1PGameStage dSC1PGameStageDesc[/* */] =
{
    // VS Link
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindHyrule,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {                           
            nFTKindLink,                    // Enemy1 ID
            nFTKindNull                     // Enemy2 ID
        },
        nFTComputerTraitLink,               // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // VS Yoshi Team
    {
        0x80,                               // Screen flash alpha transparency
        nGRKindYosterSmall,                 // Stage ID
        0xFFFFFFFF,                         // Item toggles
        SC1PGAME_STAGE_YOSHI_TEAM_COUNT,    // Number of enemies
        {
            nFTKindYoshi,                   // Enemy1 ID
            nFTKindNull                     // Enemy2 ID
        },
        nFTComputerTraitYoshiTeam,          // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // VS Fox
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindSector,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindFox,                     // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // Bonus Stage: Break the Targets!
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindCastle,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindNull,                    // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // VS Mario Bros.
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindCastle,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        2,                                  // Number of enemies
        {
            nFTKindMario,                   // Enemy Team Member 1 ID
            nFTKindLuigi                    // Enemy Team Member 2 ID
        },
        nFTComputerTraitMarioBros,          // Enemy trait
        1,                                  // Number of allies
        nFTComputerTraitAlly                // Ally trait
    },

    // VS Pikachu
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindYamabuki,                    // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindPikachu,                 // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // VS Giant Donkey Kong
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindJungle,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindGDonkey,                 // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitGDonkey,            // Enemy trait
        2,                                  // Number of allies
        nFTComputerTraitAlly                // Ally trait
    },

    // Bonus Stage: Board the Platforms!
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindCastle,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindNull,                    // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // VS Kirby Team
    {
        0x80,                               // Screen flash alpha transparency
        nGRKindPupupu,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        SC1PGAME_STAGE_KIRBY_TEAM_COUNT,    // Number of enemies
        {
            nFTKindKirby,                   // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitKirbyTeam,          // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // VS Samus
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindZebes,                       // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindSamus,                   // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // VS Metal Mario
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindMetal,                       // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindMMario,                  // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // Bonus Stage: Race to the Finish!
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindBonus3,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        3,                                  // Number of enemies
        {
            nFTKindNull,                    // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitBonus3,             // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // VS Fighting Polygon Team
    {
        0x80,                               // Screen flash alpha transparency
        nGRKindZako,                        // Stage ID
        0xFFFFFFFF,                         // Item toggles
        SC1PGAME_STAGE_MAX_TEAM_COUNT,      // Number of enemies
        {
            nFTKindNull,                    // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitPolyTeam,           // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // Final Stage
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindLast,                        // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindBoss,                    // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // Challenger Approaching: Luigi
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindCastle,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindLuigi,                   // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // Challenger Approaching: Ness
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindPupupu,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindNess,                    // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // Challenger Approaching: Jigglypuff
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindYamabuki,                    // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindPurin,                   // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    },

    // Challenger Approaching: Captain Falcon
    {
        0xFF,                               // Screen flash alpha transparency
        nGRKindZebes,                       // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            nFTKindCaptain,                 // Enemy Team Member 1 ID
            nFTKindNull                     // Enemy Team Member 2 ID
        },
        nFTComputerTraitDefault,            // Enemy trait
        0,                                  // Number of allies
        nFTComputerTraitDefault             // Ally trait
    }
};

// 0x80192ADC
s32 dSC1PGameInterface4PlayersPositionsX[/* */] = {  55, 125, 195, 265 };

// 0x80192AEC
s32 dSC1PGameInterface3PlayersPositionsX[/* */] = {  90, 160, 230 };

// 0x80192AF8
s32 dSC1PGameInterface2PlayersPositionsX[/* */] = { 125, 195 };

// 0x80192B00 - Pointer to player HUD X-Position spacing setups for player counts of 2, 3 and 4
s32 *dSC1PGameInterfaceCountPositions[/* */] = 
{ 
    dSC1PGameInterface2PlayersPositionsX, 
    dSC1PGameInterface3PlayersPositionsX, 
    dSC1PGameInterface4PlayersPositionsX
};

// 0x80192B0C - Some kind of process ID list?
u16 D_ovl65_80192B0C[/* */] = { 0x16, 0xF, 0x3C };

// 0x80192B14
Unk800D4060 D_ovl65_80192B14 = { 0 };

// 0x80192B18
syDisplaySetup dSC1PGameDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80192B34
scRuntimeInfo dSC1PGameGtlSetup =
{
    0,
    sc1PGameProcScene,
    func_800A26B8,
    &ovl65_BSS_END,
    0,
    1,
    2,
    0xF000,
    0x5000,
    0,
    0,
    0xD000,
    0x20000,
    0xC000,
    sc1PGameProcLights,
    update_contdata,
    0,
    0x600,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0x800D5CAC,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0x6C,
    0,
    0x90,
    sc1PGameProcStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018D0C0
void sc1PGameSetupFiles(void)
{
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sSC1PGameStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sSC1PGameStatusBuf);
    rd_setup.force_buf = sSC1PGameForceBuf;
    rd_setup.force_buf_size = ARRAY_COUNT(sSC1PGameForceBuf);

    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dGMCommonFileIDs, 
        ARRAY_COUNT(dGMCommonFileIDs), 
        gGMCommonFiles, 
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dGMCommonFileIDs, 
                ARRAY_COUNT(dGMCommonFileIDs)
            ), 
            0x10
        )
    );
}

// 0x8018D160
void sc1PGameSetGameStart(void)
{
    sSC1PGameIsStartStage = TRUE;

    if ((gSceneData.spgame_stage == nSC1PGameStageMetal) || (gSceneData.spgame_stage == nSC1PGameStageZako))
    {
        mpCollisionSetPlayBGM();
    }
}

// 0x8018D1A8
void sc1PGameSetGameEnd(void)
{
    GObj *fighter_gobj;
    ftStruct *fp;

    sSC1PGameIsEndStage = TRUE;

    fighter_gobj = gBattleState->players[gSceneData.spgame_player].fighter_gobj;
    fp = ftGetStruct(fighter_gobj);

    sSC1PGameBonusStatEndPlayerStatus = fp->status_info.status_id;
    sSC1PGameBonusStatInvincibleTimer = fp->star_invincible_timer;
}

// 0x8018D200
void sc1PGameProcScene(void)
{
    ifCommonBattleUpdateInterfaceAll();

    if ((sSC1PGameIsStartStage == FALSE) && (gBattleState->game_status == nSCBattleGameStatusGo))
    {
        sc1PGameSetGameStart();
    }
    if ((sSC1PGameIsEndStage == FALSE) && (gBattleState->game_status == nSCBattleGameStatusSet))
    {
        sc1PGameSetGameEnd();
    }
}

// 0x8018D280
s32 sc1PGameGetNextFreePlayerPort(s32 player)
{
    return (player == (GMCOMMON_PLAYERS_MAX - 1)) ? 0 : player + 1;
}

// 0x8018D29C - Really weird match, gets next available costume for CPU player in 1P Game
s32 sc1PGameGetNextFreeCostume(s32 com)
{
    s32 player;
    s32 used_costume;
    s32 cp_costume;
    s32 cp_ft_kind;

    cp_ft_kind = gBattleState->players[com].ft_kind;

    // WARNING: Newline memes. get_costume should be on the same line as used_costume = 0, player = 0;
    used_costume = 0, player = 0; get_costume:

    cp_costume = ftParamGetCostumeCommonID(cp_ft_kind, used_costume);

    while (player != ARRAY_COUNT(gBattleState->players))
    {
        if (player == com) 
        {
            goto l_continue; // This goto is required
        }
        else if (gBattleState->players[player].pl_kind == nFTPlayerKindNot) 
        {
            goto l_continue; // This one is not
        }
        else if
        (
            (gBattleState->players[player].ft_kind == cp_ft_kind) && 
            (gBattleState->players[player].costume == cp_costume)
        )
        {
            used_costume++, player = 0;

            goto get_costume;
        }
    l_continue:
        player++;
    }
    return cp_costume;
}

// 0x8018D38C - Empty function because of course
void func_ovl65_8018D38C(void)
{
    return;
}

// 0x8018D394 - Get random shuffled variable, used for Yoshi Team, Kirby Team (?), Race to the Finish and Fighting Polygon Team
s32 sc1PGameGetShuffledVariation(u16 shuf, s32 max)
{
    s32 i = -1;

    max++;

    do
    {
        i++;

        if (!(shuf & (1 << i)))
        {
            max--;
        }
    } 
    while (max != 0);

    return i;
}

// 0x8018D3D0 - Yet ANOTHER empty function
void func_ovl65_8018D3D0(void)
{
    return;
}

// 0x8018D3D8
void sc1PGameGetSpawnPosition(Vec3f *mapobj_pos, s32 mapobj_kind)
{
    s32 mapobj;

    if (mpCollisionGetMapObjCountKind(mapobj_kind) != 1)
    {
        while (TRUE)
        {
            syErrorPrintf("getMapObjPos:mpGetMapObjNumId(%d) = %d\n", mapobj_kind, mpCollisionGetMapObjCountKind(mapobj_kind));
            scManagerRunPrintGObjStatus();
        }
    }
    mpCollisionGetMapObjIDsKind(mapobj_kind, &mapobj);
    mpCollisionGetMapObjPositionID(mapobj, mapobj_pos);
}

// 0x8018D45C
void sc1PGameGetRandomSpawnPosition(Vec3f *mapobj_pos, s32 mapobj_kind)
{
    s32 mapobj_count = mpCollisionGetMapObjCountKind(mapobj_kind);
    s32 mapobj[10];

    if ((mapobj_count == 0) || (mapobj_count > ARRAY_COUNT(mapobj)))
    {
        while (TRUE)
        {
            syErrorPrintf("getMapObjPosRandom:mpGetMapObjNumId(%d) = 0\n", mapobj_kind);
            scManagerRunPrintGObjStatus();
        }
    }
    mpCollisionGetMapObjIDsKind(mapobj_kind, mapobj);
    mpCollisionGetMapObjPositionID(mapobj[mtTrigGetRandomIntRange(mapobj_count)], mapobj_pos);
}

// 0x8018D4EC
void sc1PGameSetupEnemyPlayer(sc1PGameStage *stagesetup, sc1PGameComputer *comsetup, s32 player, s32 enemy_player_num)
{
    s32 level = comsetup->enemy_level[gSaveData.spgame_difficulty];

    level -= gSC1PManagerLevelDrop;

    if (level <= 0)
    {
        level = 1;
    }
    gBattleState->players[player].level = level;
    gBattleState->players[player].handicap = comsetup->enemy_handicap[gSaveData.spgame_difficulty];
    gBattleState->players[player].ft_kind = stagesetup->ft_kind[enemy_player_num];
    gBattleState->players[player].team = nSCBattleTeamIDCom;
    gBattleState->players[player].costume = 0;
    gBattleState->players[player].shade = 0;
    gBattleState->players[player].player_color = nSCBattlePlayerColorCP;
    gBattleState->players[player].tag_kind = nIFPlayerTagKindCP;
    gBattleState->players[player].is_single_stockicon = TRUE;
    gBattleState->players[player].stock_count = 0;
    gBattleState->players[player].is_spgame_team = TRUE;
    gBattleState->players[player].pl_kind = nFTPlayerKindCom;

    sSC1PGamePlayerSetups[player].cp_trait = stagesetup->opponent_behavior;

    sSC1PGameTeamPlayersRemaining--;
}

// 0x8018D60C
void sc1PGameSetupStageAll(void)
{
    sc1PGameStage *stagesetup = &dSC1PGameStageDesc[gSceneData.spgame_stage];
    sc1PGameComputer *comsetup = &dSC1PGameComputerDesc[gSceneData.spgame_stage];
    s32 player, com;
    u16 flags;
    s32 i;
    s32 variations;
    s32 level;
    s32 costume, kind;

    gSceneData.is_reset = FALSE;

    gBattleState->gr_kind = stagesetup->gr_kind;
    gBattleState->is_team_attack = comsetup->is_team_attack;

    switch (gSceneData.spgame_stage)
    {
    case nSC1PGameStageBonus3:
        gBattleState->time_limit = 1;
        break;

    case nSC1PGameStageLuigi:
    case nSC1PGameStageNess:
    case nSC1PGameStagePurin:
    case nSC1PGameStageCaptain:
        gBattleState->time_limit = SCBATTLE_TIMELIMIT_INFINITE;
        break;

    default:
        gBattleState->time_limit = gSceneData.spgame_time_limit;
        break;
    }
    gBattleState->item_toggles = stagesetup->item_toggles;
    gBattleState->item_switch = comsetup->item_switch;

    sSC1PGameEnemyPlayerCount = sSC1PGameEnemyStocksRemaining = sSC1PGameTeamPlayersRemaining = stagesetup->opponent_count;

    sSC1PGameEnemyStockSpriteFlags = 0;

    for (i = 0; i < (ARRAY_COUNT(gBattleState->players) + ARRAY_COUNT(sSC1PGamePlayerSetups)) / 2; i++)
    {
        sSC1PGamePlayerSetups[i].anim_bank = NULL;
        sSC1PGamePlayerSetups[i].copy_kind = nFTKindKirby;
        sSC1PGamePlayerSetups[i].team_order = 0;
        sSC1PGamePlayerSetups[i].is_skip_entry = FALSE;
        sSC1PGamePlayerSetups[i].is_skip_magnify = FALSE;
        sSC1PGamePlayerSetups[i].cp_trait = nFTComputerTraitDefault;
        sSC1PGamePlayerSetups[i].camera_frame_mul = 1.0F;

        if (i != gSceneData.spgame_player)
        {
            gBattleState->players[i].pl_kind = nFTPlayerKindNot;
        }
    }
    if (gSceneData.spgame_stage <= nSC1PGameStageCommonEnd)
    {
        gSCManager1PGameBattleState.players[gSceneData.spgame_player].is_single_stockicon = FALSE;
        sSC1PGamePlayerSetups[gSceneData.spgame_player].mapobj_kind = nMPMapObjKind1PGamePlayerSpawn;
    }
    else
    {
        gSCManager1PGameBattleState.players[gSceneData.spgame_player].is_single_stockicon = TRUE;
        sSC1PGamePlayerSetups[gSceneData.spgame_player].mapobj_kind = nMPMapObjKind1PGameChallengerPlayerSpawn;
    }
    switch (gSceneData.spgame_stage)
    {
    case nSC1PGameStageBoss:
    case nSC1PGameStageBonus3:
        sSC1PGamePlayerSetups[gSceneData.spgame_player].is_skip_entry = TRUE;
        break;

    default:
        sSC1PGamePlayerSetups[gSceneData.spgame_player].is_skip_entry = FALSE;
        break;
    }
    player = gSceneData.spgame_player;

    switch (gSceneData.spgame_stage)
    {
    case nSC1PGameStageLink:
    case nSC1PGameStageFox:
    case nSC1PGameStageMario:
    case nSC1PGameStagePikachu:
    case nSC1PGameStageDonkey:
    case nSC1PGameStageSamus:
    case nSC1PGameStageMetal:
    case nSC1PGameStageBoss:
    case nSC1PGameStageLuigi:
    case nSC1PGameStageNess:
    case nSC1PGameStagePurin:
    case nSC1PGameStageCaptain:
        for (i = 0; i < stagesetup->ally_count; i++)
        {
            gBattleState->players[gSceneData.ally_players[i]].level = comsetup->ally_level[gSaveData.spgame_difficulty];
            gBattleState->players[gSceneData.ally_players[i]].handicap = comsetup->ally_handicap[gSaveData.spgame_difficulty];
            gBattleState->players[gSceneData.ally_players[i]].team = 0;
            gBattleState->players[gSceneData.ally_players[i]].player_color = gSceneData.spgame_player;
            gBattleState->players[gSceneData.ally_players[i]].tag_kind = nIFPlayerTagKindHeart;
            gBattleState->players[gSceneData.ally_players[i]].is_single_stockicon = TRUE;
            gBattleState->players[gSceneData.ally_players[i]].stock_count = 0;
            gBattleState->players[gSceneData.ally_players[i]].is_spgame_team = FALSE;
            gBattleState->players[gSceneData.ally_players[i]].pl_kind = nFTPlayerKindCom;

            player = gSceneData.ally_players[i];

            sSC1PGamePlayerSetups[gSceneData.ally_players[i]].mapobj_kind = i + nMPMapObjKind1PGameAllySpawnStart;
            sSC1PGamePlayerSetups[gSceneData.ally_players[i]].cp_trait = stagesetup->ally_behavior;
        }
        for (i = 0; i < stagesetup->opponent_count; i++)
        {
            player = sc1PGameGetNextFreePlayerPort(player);

            sc1PGameSetupEnemyPlayer(stagesetup, comsetup, player, i);

            gBattleState->players[player].costume = sc1PGameGetNextFreeCostume(player);

            if (gSceneData.spgame_stage <= nSC1PGameStageCommonEnd)
            {
                sSC1PGamePlayerSetups[player].mapobj_kind = i + nMPMapObjKind1PGameEnemySpawnStart;
            }
            else
            {
                sSC1PGamePlayerSetups[player].mapobj_kind = i + nMPMapObjKind1PGameChallengerEnemySpawnStart;

                level = gBattleState->players[player].level - gSceneData.challenger_level_drop;

                gBattleState->players[player].level = (level <= 0) ? 1 : level;
            }
            if (gSceneData.spgame_stage == nSC1PGameStageBoss)
            {
                sSC1PGamePlayerSetups[player].is_skip_magnify = TRUE;
            }
        }
        break;

    case nSC1PGameStageYoshi:
        variations = SC1PGAME_STAGE_YOSHI_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < SC1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i++)
        {
            sSC1PGameEnemyVariations[i] = sc1PGameGetShuffledVariation(flags, mtTrigGetRandomIntRange(variations));

            flags |= (1 << sSC1PGameEnemyVariations[i]);

            variations--;
        }
        for (costume = 0, i = SC1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i < stagesetup->opponent_count; i++)
        {
            sSC1PGameEnemyVariations[i] = sSC1PGameEnemyVariations[costume];

            if (costume == (SC1PGAME_STAGE_YOSHI_VARIATIONS_COUNT - 1))
            {
                costume = 0;
            }
            else costume++;
        }
        sSC1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < SC1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = sc1PGameGetNextFreePlayerPort(player);

            sc1PGameSetupEnemyPlayer(stagesetup, comsetup, player, 0);

            gBattleState->players[player].costume = sSC1PGameEnemyVariations[sSC1PGameCurrentEnemyVariation];

            if ((gSceneData.ft_kind == nFTKindYoshi) && (gSceneData.costume == gBattleState->players[player].costume))
            {
                gBattleState->players[player].shade = 1;
            }
            else gBattleState->players[player].shade = 0;

            sSC1PGamePlayerSetups[player].mapobj_kind = i + nMPMapObjKind1PGameEnemySpawnStart;
            sSC1PGamePlayerSetups[player].team_order = sSC1PGameCurrentEnemyVariation;
            sSC1PGamePlayerSetups[player].camera_frame_mul = 0.3F;
            sSC1PGamePlayerSetups[player].is_skip_magnify = TRUE;

            sSC1PGameCurrentEnemyVariation++;
        }
        break;

    case nSC1PGameStageZako:
        variations = SC1PGAME_STAGE_MAX_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < SC1PGAME_STAGE_MAX_VARIATIONS_COUNT; i++)
        {
            sSC1PGameEnemyVariations[i] = sc1PGameGetShuffledVariation(flags, mtTrigGetRandomIntRange(variations));

            flags |= (1 << sSC1PGameEnemyVariations[i]);

            sSC1PGameEnemyVariations[i] += nFTKindNStart;

            variations--;
        }
        for (kind = 0, i = SC1PGAME_STAGE_MAX_VARIATIONS_COUNT; i < stagesetup->opponent_count; i++)
        {
            sSC1PGameEnemyVariations[i] = sSC1PGameEnemyVariations[kind];

            if (kind == (SC1PGAME_STAGE_MAX_VARIATIONS_COUNT - 1))
            {
                kind = 0;
            }
            else kind++;
        }
        sSC1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < SC1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = sc1PGameGetNextFreePlayerPort(player);

            sc1PGameSetupEnemyPlayer(stagesetup, comsetup, player, 0);

            gBattleState->players[player].ft_kind = sSC1PGameEnemyVariations[sSC1PGameCurrentEnemyVariation];

            sSC1PGamePlayerSetups[player].mapobj_kind = i + nMPMapObjKind1PGameEnemySpawnStart;
            sSC1PGamePlayerSetups[player].team_order = sSC1PGameCurrentEnemyVariation;
            sSC1PGamePlayerSetups[player].camera_frame_mul = 0.3F;
            sSC1PGamePlayerSetups[player].is_skip_magnify = TRUE;

            sSC1PGameCurrentEnemyVariation++;
        }
        break;

    case nSC1PGameStageKirby:
        sSC1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < SC1PGAME_STAGE_KIRBY_SIM_COUNT; i++)
        {
            player = sc1PGameGetNextFreePlayerPort(player);

            sc1PGameSetupEnemyPlayer(stagesetup, comsetup, player, 0);

            sSC1PGameEnemyKirbyCostume = gBattleState->players[player].costume =

            ((gSceneData.ft_kind == nFTKindKirby) && (gSceneData.costume == gBattleState->players[player].costume)) ? 
                                                                          ftParamGetCostumeCommonID(nFTKindKirby, 1) : 
                                                                                                                  0 ;

            sSC1PGamePlayerSetups[player].team_order = sSC1PGameCurrentEnemyVariation;
            sSC1PGamePlayerSetups[player].copy_kind = dSC1PGameKirbyTeamCopyKinds[sSC1PGameCurrentEnemyVariation];
            sSC1PGamePlayerSetups[player].mapobj_kind = i + nMPMapObjKind1PGameEnemySpawnStart;

            sSC1PGamePlayerSetups[player].camera_frame_mul = 0.3F;
            sSC1PGamePlayerSetups[player].is_skip_magnify = TRUE;

            sSC1PGameCurrentEnemyVariation++;
        }
        break;

    case nSC1PGameStageBonus3:
        variations = SC1PGAME_STAGE_MAX_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < SC1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            sSC1PGameEnemyVariations[i] = sc1PGameGetShuffledVariation(flags, mtTrigGetRandomIntRange(variations));

            flags |= (1 << sSC1PGameEnemyVariations[i]);

            sSC1PGameEnemyVariations[i] += 14;

            variations--;
        }
        sSC1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < SC1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = sc1PGameGetNextFreePlayerPort(player);

            sc1PGameSetupEnemyPlayer(stagesetup, comsetup, player, 0);

            gBattleState->players[player].ft_kind = sSC1PGameEnemyVariations[sSC1PGameCurrentEnemyVariation];

            sSC1PGamePlayerSetups[player].mapobj_kind = i + nMPMapObjKind1PGameEnemySpawnStart;
            sSC1PGamePlayerSetups[player].is_skip_magnify = sSC1PGamePlayerSetups[player].is_skip_entry = TRUE;

            sSC1PGameCurrentEnemyVariation++;
        }
        break;

    default:
        break;
    }
    gBattleState->pl_count = gBattleState->cp_count = 0;

    for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
    {
        switch (gBattleState->players[i].pl_kind)
        {
        case nFTPlayerKindMan:
            gBattleState->pl_count++;
            break;

        case nFTPlayerKindCom:
            gBattleState->cp_count++;
            break;
        }
    }
    gSC1PGameBonusTomatoCount = 0;
    gSC1PGameBonusHeartCount = 0;
    gSC1PGameBonusStarCount = 0;
    gSC1PGameBonusShieldBreaker = FALSE;
    gSC1PGameBonusGiantImpact = FALSE;
    gSC1PGameBonusMewCatcher = FALSE;

    sSC1PGameIsStartStage = FALSE;
    sSC1PGameIsEndStage = FALSE;

    sSC1PGameBonusStatNumPlayerKOs = 0;
    sSC1PGameBonusStatEndPlayerStatus = -1;
    sSC1PGameBonusStatInvincibleTimer = 0;
    gSC1PGameBonusBrosCalamity = FALSE;

    for (i = 0; i < ((ARRAY_COUNT(gSC1PGameBonusAttackIDCount) + ARRAY_COUNT(gSC1PGameBonusDefendIDCount)) / 2); i++)
    {
        gSC1PGameBonusAttackIDCount[i] = gSC1PGameBonusDefendIDCount[i] = 0;
    }
    for 
    (
        i = 0; 
        i < (ARRAY_COUNT(gSC1PGameBonusAttackIsSmashCount) + ARRAY_COUNT(gSC1PGameBonusAttackGroundAirCount) + ARRAY_COUNT(gSC1PGameBonusAttackIsProjectileCount) +
             ARRAY_COUNT(gSC1PGameBonusDefendIsSmashCount) + ARRAY_COUNT(gSC1PGameBonusDefendGroundAirCount) + ARRAY_COUNT(gSC1PGameBonusDefendIsProjectileCount)) / 6;
        i++
    )
    {
        gSC1PGameBonusAttackIsSmashCount[i] = gSC1PGameBonusDefendIsSmashCount[i] = 0;
        gSC1PGameBonusAttackGroundAirCount[i] = gSC1PGameBonusDefendGroundAirCount[i] = 0;
        gSC1PGameBonusAttackIsProjectileCount[i] = gSC1PGameBonusDefendIsProjectileCount[i] = 0;
    }
}

// 0x8018E18C - Spawn next member of enemy team
void sc1PGameSpawnEnemyTeamNext(GObj *player_gobj)
{
    ftStruct *fp;
    ftAttributes *attributes;
    void *unused2;
    ftCreateDesc player_spawn;
    void *anim_bank;
    GObj *com_gobj;
    s32 player;
    void *unused1;

    fp = ftGetStruct(player_gobj);
    attributes = fp->attributes;
    player = fp->player;
    anim_bank = fp->anim_load;

    if (sSC1PGameTeamPlayersRemaining == 0)
    {
        ftCommonSleepSetStatus(player_gobj);
    }
    else
    {
        sSC1PGameTeamPlayersRemaining--;

        ftManagerDestroyFighter(player_gobj);

        gBattleState->players[player].stock_count = 0;

        switch (gSceneData.spgame_stage)
        {
        case nSC1PGameStageYoshi:
            gBattleState->players[player].costume = sSC1PGameEnemyVariations[sSC1PGameCurrentEnemyVariation];

            gBattleState->players[player].shade = ((gSceneData.ft_kind == nFTKindYoshi) && (gSceneData.costume == gBattleState->players[player].costume)) ? 1 : 0;

            ifCommonPlayerStockSetLUT(player, gBattleState->players[player].costume, attributes);
            break;

        case nSC1PGameStageZako:
            gBattleState->players[player].ft_kind = sSC1PGameEnemyVariations[sSC1PGameCurrentEnemyVariation];
            break;

        case nSC1PGameStageKirby:
            sSC1PGamePlayerSetups[player].copy_kind = 
            (sSC1PGameCurrentEnemyVariation == SC1PGAME_STAGE_KIRBY_VARIATIONS_COUNT)  ? 
                                                        gSC1PManagerKirbyTeamFinalCopy :
                            dSC1PGameKirbyTeamCopyKinds[sSC1PGameCurrentEnemyVariation];
            break;
        }
        sSC1PGamePlayerSetups[player].team_order = sSC1PGameCurrentEnemyVariation++;

        player_spawn = dFTManagerDefaultFighterDesc;

        player_spawn.ft_kind = gBattleState->players[player].ft_kind;

        sc1PGameGetRandomSpawnPosition(&player_spawn.pos, nMPMapObjKind1PGameEnemyTeamSpawn);

        player_spawn.pos.y = (gMPCollisionGroundData->cam_bound_top + gMPCollisionGroundData->map_bound_top) * 0.5F;

        player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? nGMFacingL : nGMFacingR;

        player_spawn.team = gBattleState->players[player].team;

        player_spawn.player = player;

        player_spawn.detail = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

        player_spawn.costume = gBattleState->players[player].costume;

        player_spawn.shade = gBattleState->players[player].shade;

        player_spawn.handicap = gBattleState->players[player].handicap;

        player_spawn.cp_level = gBattleState->players[player].level;

        player_spawn.stock_count = gBattleState->players[player].stock_count;

        player_spawn.damage = 0;

        player_spawn.pl_kind = gBattleState->players[player].pl_kind;

        player_spawn.controller = &gPlayerControllers[player];

        player_spawn.anim_heap = anim_bank;

        player_spawn.copy_kind = sSC1PGamePlayerSetups[player].copy_kind;

        player_spawn.team_order = sSC1PGamePlayerSetups[player].team_order;

        player_spawn.is_skip_entry = TRUE;
        player_spawn.is_skip_magnify = sSC1PGamePlayerSetups[player].is_skip_magnify;
        player_spawn.is_skip_shadow_setup = TRUE;

        com_gobj = ftManagerMakeFighter(&player_spawn);

        fp = ftGetStruct(com_gobj);

        ftParamInitPlayerBattleStats(player, com_gobj);
        ftParamUnlockPlayerControl(com_gobj);

        fp->fighter_com.trait = sSC1PGamePlayerSetups[player].cp_trait;

        ifCommonPlayerDamageStopBreakAnim(fp);

        fp->camera_zoom_frame *= sSC1PGamePlayerSetups[player].camera_frame_mul;
    }
}

// 0x8018E598
void sc1PGameSetPlayerInterfacePositions(void)
{
    s32 *pos = dSC1PGameInterfaceCountPositions[(gBattleState->pl_count + gBattleState->cp_count) - 2];
    s32 player = gSceneData.spgame_player;
    s32 i;

    for (i = 0; i < (gBattleState->pl_count + gBattleState->cp_count); i++)
    {
        sSC1PGamePlayerInterfacePositionsX[player] = *pos;
        player = sc1PGameGetNextFreePlayerPort(player);

        pos++;
    }
    gIFCommonPlayerInterface.ifplayers_pos_x = sSC1PGamePlayerInterfacePositionsX;
    gIFCommonPlayerInterface.ifplayers_pos_y = 210;
}

// 0x8018E670
void sc1PGameWaitStageCommonUpdate(void)
{
    GObj *fighter_gobj;
    s32 random;
    s32 player_count;
    s32 process_id;
    s32 player;
    s32 i;

    random = mtTrigGetRandomIntRange(ARRAY_COUNT(D_ovl65_80192B0C));
    gcStopCurrentProcess(0x5A);
    ifCommonCountdownMakeInterface();

    process_id = D_ovl65_80192B0C[random];

    if (random == 1)
    {
        gcStopCurrentProcess(0x5A);
    }
    player_count = gBattleState->pl_count + gBattleState->cp_count;

    if (player_count < 3)
    {
        gcStopCurrentProcess(process_id);
    }
    player = gSceneData.spgame_player;

    for (i = 0; i < player_count; i++)
    {
        fighter_gobj = gBattleState->players[player].fighter_gobj;

        ftCommonAppearSetStatus(fighter_gobj);

        if (random == 2)
        {
            gcStopCurrentProcess(0x1E);
            func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->closeup_camera_zoom, 0.1F, 28.0F);
            gcStopCurrentProcess(process_id - 0x1E);
        }
        else gcStopCurrentProcess(process_id);

        player = sc1PGameGetNextFreePlayerPort(player);
    }
    if (random == 2)
    {
        gcStopCurrentProcess(0x1E);
        cmManagerSetCameraStatusDefault();
    }
}

// 0x8018E824
void sc1PGameWaitStageTeamUpdate(void)
{
    GObj *fighter_gobj;
    s32 player_count;
    s32 player;
    s32 i;

    gcStopCurrentProcess(0x5A);
    ifCommonCountdownMakeInterface();

    player_count = gBattleState->pl_count + gBattleState->cp_count;
    player = gSceneData.spgame_player;

    for (i = 0; i < player_count; i++)
    {
        fighter_gobj = gBattleState->players[player].fighter_gobj;

        if (player == gSceneData.spgame_player)
        {
            ftCommonAppearSetStatus(fighter_gobj);
        }
        else ftCommonAppearSetPosition(fighter_gobj);

        gcStopCurrentProcess(0x3C);

        player = sc1PGameGetNextFreePlayerPort(player);
    }
}

// 0x8018E8F8
void sc1PGameWaitStageBonus3Update(void)
{
    func_ovl2_8010CFA8
    (
        gBattleState->players[gSceneData.spgame_player].fighter_gobj, 
        0.0F, 
        F_CST_DTOR32(-15.0F), 
        7000.0F, 
        0.3F, 
        31.5F
    );
    gcStopCurrentProcess(0x3C);
    ifCommonAnnounceGoMakeInterface();
    ifCommonPlayerDamageSetShowInterface();
    func_800269C0_275C0(nSYAudioVoiceAnnounceGo);
    ifCommonAnnounceGoSetStatus();
    gcEjectGObj(NULL);
    gcStopCurrentProcess(1);
}

// 0x8018E9A4
void sc1PGameWaitStageBossUpdate(void)
{
    GObj *player_gobj;
    ftStruct *player_fp;
    ftStruct *com_fp;
    GObj *com_gobj;
    s32 player;
    Vec3f sp20;

    player_gobj = gBattleState->players[gSceneData.spgame_player].fighter_gobj;

    player_fp = ftGetStruct(player_gobj);

    sp20.x = 0.0F;
    sp20.y = 0.0F;
    sp20.z = 0.0F;

    func_ovl2_8010D030((void*) (((uintptr_t)gMPCollisionGroundData->gr_desc[1].dobj_desc - (intptr_t)&D_NF_00004D48) + (intptr_t)&D_NF_00006010), 0.0F, &sp20);

    for (player = 0; TRUE; player++) // Wut da haeiyll
    {
        if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
        {
            continue;
        }
        else if (gBattleState->players[player].is_spgame_team == FALSE)
        {
            continue;
        }
        else
        {
            com_gobj = gBattleState->players[player].fighter_gobj;

            break;
        }
    }
    com_fp = ftGetStruct(com_gobj);

    ftCommonAppearSetStatus(com_gobj);

    gcStopCurrentProcess(0x258);

    ftParamUnlockPlayerControl(player_gobj);
    ftParamUnlockPlayerControl(com_gobj);

    player_fp->camera_mode = 0;
    com_fp->camera_mode = 0;

    gBattleState->game_status = nSCBattleGameStatusGo;

    gIFCommonPlayerInterface.is_ifmagnify_display = TRUE;

    ifCommonPlayerDamageSetShowInterface();

    gMPCollisionBGMDefault = nSYAudioBGMLast;

    ftParamTryUpdateItemMusic();
}

// 0x8018EADC
void sc1PGameWaitThreadUpdate(GObj *gobj)
{
    switch (gSceneData.spgame_stage)
    {
    case nSC1PGameStageLink:
    case nSC1PGameStageFox:
    case nSC1PGameStageMario:
    case nSC1PGameStagePikachu:
    case nSC1PGameStageDonkey:
    case nSC1PGameStageSamus:
    case nSC1PGameStageMetal:
    case nSC1PGameStageLuigi:
    case nSC1PGameStageNess:
    case nSC1PGameStagePurin:
    case nSC1PGameStageCaptain:
        sc1PGameWaitStageCommonUpdate();
        break;

    case nSC1PGameStageYoshi:
    case nSC1PGameStageKirby:
    case nSC1PGameStageZako:
        sc1PGameWaitStageTeamUpdate();
        break;

    case nSC1PGameStageBonus3:
        sc1PGameWaitStageBonus3Update();
        break;

    case nSC1PGameStageBoss:
        sc1PGameWaitStageBossUpdate();
        break;
    }
    gcEjectGObj(NULL);
    gcStopCurrentProcess(1);
}

// 0x8018EB68
void sc1PGameSetGameStatusWait(void)
{
    gcAddGObjProcess
    (
        gcMakeGObjSPAfter
        (
            nOMObjCommonKindInterface, 
            NULL, 
            nOMObjCommonLinkIDInterfaceActor, 
            GOBJ_LINKORDER_DEFAULT
        ),     
        sc1PGameWaitThreadUpdate, 
        nOMObjProcessKindThread, 
        5
    );
    gBattleState->game_status = nSCBattleGameStatusWait;
}

// 0x8018EBB8
void sc1PGameTeamStockDisplayProcRender(GObj *interface_gobj)
{
    SObj *sobj;
    s32 stock_num;
    s32 ix, iy;

    if (sSC1PGameEnemyStocksRemaining != 0)
    {
        if (sSC1PGameEnemyStocksRemaining != sSC1PGameEnemyStocksDisplay)
        {
            sSC1PGameEnemyStocksDisplay = sSC1PGameEnemyStocksRemaining;

            sobj = SObjGetStruct(interface_gobj);

            for (stock_num = sSC1PGameEnemyPlayerCount - 1, ix = iy = 0; sobj != NULL; sobj = sobj->next, stock_num--)
            {
                if ((1 << stock_num) & sSC1PGameEnemyStockSpriteFlags)
                {
                    sobj->sprite.attr |= SP_HIDDEN;
                }
                else
                {
                    sobj->pos.x = (ix * 10) + 20;
                    sobj->pos.y = (iy * 10) + 20;

                    ix++;

                    if (ix >= 10)
                    {
                        ix = 0, iy++;
                    }
                    switch (gSceneData.spgame_stage)
                    {
                    case nSC1PGameStageYoshi:
                        sobj->sprite = *sSC1PGameEnemyTeamSprites->stock_spr;
                        sobj->sprite.LUT = sSC1PGameEnemyTeamSprites->stock_lut[sSC1PGameEnemyVariations[stock_num]];
                        break;

                    case nSC1PGameStageKirby:
                        sobj->sprite = *sSC1PGameEnemyTeamSprites->stock_spr;
                        sobj->sprite.LUT = sSC1PGameEnemyTeamSprites->stock_lut[sSC1PGameEnemyKirbyCostume];
                        break;

                    case nSC1PGameStageZako:
                        sobj->sprite = *gcGetDataFromFile(Sprite*, sSC1PGameZakoStockSprite, &D_NF_00000080);
                        break;
                    }
                    sobj->sprite.attr &= ~SP_HIDDEN;
                }
            }
        }
        lbCommonDrawSObjAttr(interface_gobj);
    }
}

// 0x8018EE44
void sc1PGameInitTeamStockDisplay(void)
{
    GObj *interface_gobj;
    ftStruct *fp;
    Sprite *sprite;
    s32 i;

    switch (gSceneData.spgame_stage)
    {
    case nSC1PGameStageYoshi:
    case nSC1PGameStageKirby:
        for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
        {
            if (gBattleState->players[i].pl_kind == nFTPlayerKindNot)
            {
                continue;
            }
            else if (gBattleState->players[i].is_spgame_team == FALSE)
            {
                continue;
            }
            else
            {
                fp = ftGetStruct(gBattleState->players[i].fighter_gobj);

                break;
            }
        }
        sSC1PGameEnemyTeamSprites = fp->attributes->sprites;

        sprite = sSC1PGameEnemyTeamSprites->stock_spr;

        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

        goto make_gobj;

    case nSC1PGameStageZako:
        sSC1PGameZakoStockSprite = rdManagerGetFileWithExternHeap
        (
            (uintptr_t)&D_NF_00000019, 
            gsMemoryAlloc
            (
                rdManagerGetFileSize((uintptr_t)&D_NF_00000019), 
                0x10
            )
        );
        sprite = gcGetDataFromFile(Sprite*, sSC1PGameZakoStockSprite, &D_NF_00000080);

        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

    make_gobj:
        interface_gobj = gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

        gcAddGObjDisplay(interface_gobj, sc1PGameTeamStockDisplayProcRender, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

        for (i = 0; i < sSC1PGameEnemyStocksRemaining; i++)
        {
            lbCommonMakeSObjForGObj(interface_gobj, gcGetDataFromFile(Sprite*, gGMCommonFiles[4], &D_NF_00000068));
        }
        sSC1PGameEnemyStocksDisplay = sSC1PGameEnemyStocksRemaining + 1;

        break;
    }
}

// 0x8018EFFC
void sc1PGameSetPlayerDefeatStats(s32 player, s32 team_order)
{
    GObj *fighter_gobj = gBattleState->players[player].fighter_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);
    sc1PGameStats *enemy_stats;

    if 
    (
        (player == gSceneData.spgame_player) && 
        (gBattleState->players[player].stock_count == -1) && 
        (gBattleState->game_status != nSCBattleGameStatusEnd)
    )
    {
        ifCommonAnnounceEndMessage();
    }
    else if (gBattleState->players[player].is_spgame_team != FALSE)
    {
        sSC1PGameEnemyStocksRemaining--;
        sSC1PGameEnemyStockSpriteFlags |= (1 << team_order);

        enemy_stats = &sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs];

        enemy_stats->team_order = fp->team_order;
        enemy_stats->damage_status_id = fp->status_info.status_id;
        enemy_stats->damage_player = fp->damage_player;
        enemy_stats->damage_object_class = fp->damage_object_class;
        enemy_stats->damage_object_kind = fp->damage_object_kind;
        enemy_stats->damage_stat_flags = fp->damage_stat_flags;
        enemy_stats->damage_stat_count = fp->damage_stat_count;

        sSC1PGameBonusStatNumPlayerKOs++;

        if ((gSceneData.spgame_stage == nSC1PGameStageMario) && (fp->ft_kind == nFTKindLuigi) && (sSC1PGameEnemyStocksRemaining != 0) && (fp->damage_player == gSceneData.spgame_player))
        {
            if (gBattleState->players[(fp->player == 0) ? (GMCOMMON_PLAYERS_MAX - 1) : fp->player - 1].total_damage_player[gSceneData.spgame_player] == 0)
            {
                gSC1PGameBonusBrosCalamity = TRUE; // Bros. Calamity bonus
            }
        }
        if (sSC1PGameEnemyStocksRemaining == 0)
        {
            ifCommonAnnounceEndMessage();
        }
    }
}

// 0x8018F1C0
void sc1PGameTryInitPlayerArrows(void)
{
    if (gSceneData.spgame_stage != nSC1PGameStageBonus3)
    {
        func_ovl2_8010E2D4();
        ifCommonPlayerArrowsInitInterface();
    }
}

// 0x8018F1F8
void sc1PGameInitTimeUpMessage(void)
{
    if (gSceneData.spgame_stage != nSC1PGameStageBonus3)
    {
        ifCommonTimerMakeInterface(ifCommonAnnounceTimeUpInitInterface);
    }
    else ifCommonTimerMakeInterface(ifCommonAnnounceFailureInitInterface);
}

// 0x8018F240
s32 sc1PGameGetEnemySpawnLR(s32 target_player)
{
    f32 lr_dist;
    f32 closest_dist;
    f32 current_dist;
    s32 current_player;
    Vec3f current_pos;
    Vec3f target_pos;
    s32 lr;

    closest_dist = 65536.0F;
    lr_dist = 0.0F;

    sc1PGameGetSpawnPosition(&target_pos, sSC1PGamePlayerSetups[target_player].mapobj_kind);

    for (current_player = 0; current_player < (ARRAY_COUNT(gBattleState->players) + ARRAY_COUNT(sSC1PGamePlayerSetups)) / 2; current_player++)
    {
        if (current_player == target_player)
        {
            continue;
        }
        else if (gBattleState->players[current_player].pl_kind == nFTPlayerKindNot)
        {
            continue;
        }
        else if (gBattleState->players[current_player].team != gBattleState->players[target_player].team)
        {
            sc1PGameGetSpawnPosition(&current_pos, sSC1PGamePlayerSetups[current_player].mapobj_kind);

            current_dist = (current_pos.x < target_pos.x) ? -(current_pos.x - target_pos.x) : (current_pos.x - target_pos.x);

            if (current_dist < closest_dist)
            {
                closest_dist = current_dist;

                lr_dist = (current_pos.x - target_pos.x);
            }
        }
    }
    lr = (lr_dist >= 0.0F) ? nGMFacingR : nGMFacingL;

    return lr;
}

// 0x8018F3AC
void func_ovl65_8018F3AC(void)
{
    GObj *fighter_gobj = gBattleState->players[gSceneData.spgame_player].fighter_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_8010CF44
    (
        fighter_gobj,
        F_CLC_DTOR32(D_ovl65_80192808[mtTrigGetRandomIntRange(ARRAY_COUNT(D_ovl65_80192808))]) * fp->lr,
        F_CLC_DTOR32(D_ovl65_80192820[mtTrigGetRandomIntRange(ARRAY_COUNT(D_ovl65_80192820))]),
        ftGetStruct(fighter_gobj)->attributes->closeup_camera_zoom,
        0.06F,
        28.0F
    );
    ftParamSetModelPartDetailAll(fighter_gobj, nFTPartsDetailHigh);
}

// 0x8018F4B0
void sc1PGameBossSetZoomCamera(ftStruct *fp)
{
    Vec3f world_pos;
    Vec3f zoom;

    world_pos.x = world_pos.y = world_pos.z = 0.0F;

    gmCollisionGetFighterPartsWorldPosition(fp->joints[fp->damage_joint_id], &world_pos);

    sSC1PGameBossDefeatZoomPosition = world_pos;

    zoom.x = world_pos.x;
    zoom.y = world_pos.y;
    zoom.z = world_pos.z + 3000.0F;

    func_ovl2_8010D0A4(&world_pos, &zoom);
}

// 0x8018F540
void sc1PGameBossHidePlayerTagAll(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        fp->is_playertag_bossend = TRUE;

        fighter_gobj = fighter_gobj->link_next;
    }
}

// 0x8018F574
void sc1PGameBossAddBossInterface(GObj *fighter_gobj, s32 arg1)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ft_kind == nFTKindBoss)
    {
        ifCommonPlayerInterfaceAddToViewport(fp);
    }
}

// 0x8018F5AC
void sc1PGameBossLockPlayerControl(GObj *fighter_gobj, s32 arg1)
{
    ftParamLockPlayerControl(fighter_gobj);
}

// 0x8018F5CC
void sc1PGameBossSetIgnorePlayerMapBounds(GObj *fighter_gobj, s32 arg1)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_limit_map_bounds = TRUE;
}

// 0x8018F5E4 - Unused?
void func_ovl65_8018F5E4(void)
{
    return;
}

// 0x8018F5EC
void sc1PGameBossDefeatInterfaceProcUpdate(void)
{
    gcApplyByLink(3, sc1PGameBossAddBossInterface, 0);
    gcApplyByLink(3, sc1PGameBossLockPlayerControl, 0);
    gcApplyByLink(3, sc1PGameBossSetIgnorePlayerMapBounds, 0);
    gcApplyToAll(func_ovl2_80113638, 0);

    gcApplyByLink(9, func_ovl2_8011366C, 0);
    func_ovl2_80115834();
    gcApplyByLink(0xB, func_ovl2_8011366C, 0);
    gcApplyByLink(6, func_ovl2_8011366C, 0);
    func_ovl65_801910B0();
    func_800266A0_272A0();
    auStopBGM();
    ifCommonBattleEndPlaySoundQueue();
    func_800269C0_275C0(nSYAudioFGMExplodeL);
    func_800269C0_275C0(nSYAudioVoiceBossDead);
    func_800269C0_275C0(nSYAudioFGMBossDefeatL);

    sSC1PGameBossDefeatSoundTerminateTemp = D_8009EDD0_406D0.sfx_max;
    D_8009EDD0_406D0.sfx_max = 0;
}

// 0x8018F6DC
void func_ovl65_8018F6DC(void)
{
    D_8009EDD0_406D0.sfx_max = sSC1PGameBossDefeatSoundTerminateTemp;
}

// 0x8018F6F0
void sc1PGameBossDefeatInterfaceProcSet(void)
{
    gcApplyToAll(func_ovl2_8011366C, 0);
    sc1PGameBossSetChangeWallpaper();
    func_ovl2_8010D030((void*) (((uintptr_t)gMPCollisionGroundData->gr_desc[1].dobj_desc - (intptr_t)&D_NF_00004D48) + (intptr_t)&D_NF_00006450), 0.0F, &sSC1PGameBossDefeatZoomPosition);
    ifCommonBattleBossDefeatSetGameStatus();
}

// 0x8018F75C
void sc1PGameBossDefeatInitInterface(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    gIFCommonPlayerInterface.is_ifmagnify_display = FALSE;

    sc1PGameBossHidePlayerTagAll();
    ifCommonPlayerDamageStartBreakAnim(fp);
    sc1PGameBossSetZoomCamera(fp);
    ifCommonBattleSetInterface(sc1PGameBossDefeatInterfaceProcUpdate, sc1PGameBossDefeatInterfaceProcSet, nSYAudioFGMVoiceEnd, 90);
}

// 0x8018F7B4
void sc1PGameProcStart(void)
{
    GObj *fighter_gobj;
    ftData *plns;
    u32 largest_size;
    ftStruct *fp;
    sb32(*proc)(void*);
    void *addr;
    u8 spA0[0x10];
    s32 i;
    ftCreateDesc player_spawn;
    Unk800D4060 sp58;

    sc1PGameSetupStageAll();
    sc1PGameSetupFiles();

    if (!(gSaveData.error_flags & SCBACKUP_ERROR_BATTLECASTLE) && (gSaveData.unk5E3 > 0x5C))
    {
        syDmaRomRead(0xF10, spA0, ARRAY_COUNT(spA0));

        addr = rdManagerGetFileWithExternHeap((uintptr_t)&D_NF_000000C8, gsMemoryAlloc(rdManagerGetFileSize((uintptr_t)&D_NF_000000C8), 0x10));

        proc = (sb32(*)(void*)) ((uintptr_t)addr + (intptr_t)&D_NF_00000000);

        osWritebackDCache(proc, *(s32*) ((uintptr_t)addr + (intptr_t)&D_NF_00000040));
        osInvalICache(proc, *(s32*) ((uintptr_t)addr + (intptr_t)&D_NF_00000040));

        if (proc(spA0) == FALSE)
        {
            gSaveData.error_flags |= SCBACKUP_ERROR_BATTLECASTLE;
        }
    }
    func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
    efAllocInitParticleBank();
    ftParamInitGame();
    mpCollisionInitGroundData();
    cmManagerSetViewportDimensions(10, 10, 310, 230);
    cmManagerMakeWallpaperCamera();
    grWallpaperMakeGroundWallpaper();
    func_ovl2_8010DB00();
    itManagerInitItems();
    grCommonSetupInitAll();
    ftManagerAllocFighter(FTDATA_FLAG_MAINMOTION, 4);
    wpManagerAllocWeapons();
    efManagerInitEffects();
    ifScreenFlashMakeInterface(dSC1PGameStageDesc[gSceneData.spgame_stage].screenflash_alpha);
    gmRumbleMakeActor();
    ftPublicityMakeActor();

    switch (gSceneData.spgame_stage)
    {
    case nSC1PGameStageKirby:
        // Need to load PK Fire graphics from Ness' file
        plns = dFTManagerDataFiles[nFTKindNess];

        rdManagerGetFileWithExternHeap((uintptr_t)&D_NF_000000E6, gsMemoryAlloc(rdManagerGetFileSize((uintptr_t)&D_NF_000000E6), 0x10));
        efAllocGetAddParticleBankID
        (
            plns->particles_header_lo, 
            plns->particles_header_hi, 
            plns->particles_texture_lo, 
            plns->particles_texture_hi
        );
        break;

    case nSC1PGameStageZako:
        for (i = nFTKindNStart; i <= nFTKindNEnd; i++)
        {
            ftManagerSetupFilesAllKind(i);
        }
        largest_size = 0;

        for (i = nFTKindNStart; i <= nFTKindNEnd; i++)
        {
            if (largest_size < dFTManagerDataFiles[i]->file_anim_size)
            {
                largest_size = dFTManagerDataFiles[i]->file_anim_size;
            }
        }
        for (i = 0; i < (ARRAY_COUNT(gBattleState->players) + ARRAY_COUNT(sSC1PGamePlayerSetups)) / 2; i++)
        {
            if (gBattleState->players[i].pl_kind == nFTPlayerKindNot)
            {
                continue;
            }
            else if (gBattleState->players[i].is_spgame_team == FALSE)
            {
                continue;
            }
            else sSC1PGamePlayerSetups[i].anim_bank = gsMemoryAlloc(largest_size, 0x10);
        }
        break;
    }
    for (i = 0; i < (ARRAY_COUNT(gBattleState->players) + ARRAY_COUNT(sSC1PGamePlayerSetups)) / 2; i++)
    {
        player_spawn = dFTManagerDefaultFighterDesc;

        if (gBattleState->players[i].pl_kind == nFTPlayerKindNot)
        {
            continue;
        }
        ftManagerSetupFilesAllKind(gBattleState->players[i].ft_kind);

        player_spawn.ft_kind = gBattleState->players[i].ft_kind;

        sc1PGameGetSpawnPosition(&player_spawn.pos, sSC1PGamePlayerSetups[i].mapobj_kind);

        player_spawn.lr_spawn = sc1PGameGetEnemySpawnLR(i);

        player_spawn.team = gBattleState->players[i].team;

        player_spawn.player = i;

        player_spawn.detail = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

        player_spawn.costume = gBattleState->players[i].costume;

        player_spawn.shade = gBattleState->players[i].shade;

        player_spawn.handicap = gBattleState->players[i].handicap;

        player_spawn.cp_level = gBattleState->players[i].level;

        player_spawn.stock_count = gBattleState->players[i].stock_count;

        player_spawn.damage = 0;

        player_spawn.pl_kind = gBattleState->players[i].pl_kind;

        player_spawn.controller = &gPlayerControllers[i];

        player_spawn.anim_heap = (sSC1PGamePlayerSetups[i].anim_bank != NULL) ? sSC1PGamePlayerSetups[i].anim_bank : ftManagerAllocAnimHeapKind(gBattleState->players[i].ft_kind);

        player_spawn.copy_kind = sSC1PGamePlayerSetups[i].copy_kind;

        player_spawn.team_order = sSC1PGamePlayerSetups[i].team_order;

        player_spawn.is_skip_entry = sSC1PGamePlayerSetups[i].is_skip_entry;

        player_spawn.is_skip_magnify = sSC1PGamePlayerSetups[i].is_skip_magnify;

        fighter_gobj = ftManagerMakeFighter(&player_spawn), fp = ftGetStruct(fighter_gobj);

        ftParamInitPlayerBattleStats(i, fighter_gobj);

        fp->fighter_com.trait = sSC1PGamePlayerSetups[i].cp_trait;

        fp->camera_zoom_frame *= sSC1PGamePlayerSetups[i].camera_frame_mul;
    }
    ftManagerSetupFilesPlayablesAll();
    ifCommonBattleSetGameStatusWait();
    sc1PGameTryInitPlayerArrows();
    func_ovl2_8010E1A4();
    ifCommonPlayerMagnifyMakeInterface();
    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    ifCommonPlayerTagMakeInterface();
    sc1PGameSetPlayerInterfacePositions();
    ifCommonPlayerDamageInitInterface();
    ifCommonPlayerStockInitInterface();
    sc1PGameInitTeamStockDisplay();
    sc1PGameSetGameStatusWait();

    if ((gSceneData.spgame_stage == nSC1PGameStageMetal) || (gSceneData.spgame_stage == nSC1PGameStageZako))
    {
        mpCollisionSetBGM();
        func_800269C0_275C0(nSYAudioFGMPublicityPrologue);
    }
    else
    {
        mpCollisionSetPlayBGM();
        func_800269C0_275C0(nSYAudioVoicePublicityExcited);
    }
    sc1PGameInitTimeUpMessage();
    ifCommonTimerMakeDigitSObjs();

    sp58 = D_ovl65_80192B14;
    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp58, 0xC, 1, 0);
}

// 0x8018FD5C
void sc1PGameAppendBonusStats(void)
{
    sb32 is_thrown_item;
    sb32 is_jackpot;
    sb32 is_item_strike;
    sb32 is_ordered_variation;
    s32 damage_jackpot_div;
    s32 damage_jackpot_mod;
    s32 damage_jackpot_bak;
    s32 variation;
    s32 special_count;
    u32 attack_count;
    u8 variation_order[SC1PGAME_STAGE_MAX_VARIATIONS_COUNT]; // Full array of 12? Almost half of this goes unused, but stack suggests this is correct.
    s32 i;

    sSC1PGameStageTimeSec = I_FRAMES_TO_SEC(gBattleState->battle_time_current);
    sSC1PGameTotalTimeSec = I_FRAMES_TO_SEC(gSC1PManagerTotalTimeTics);

    if (sSC1PGameBonusStatNumPlayerKOs != 0)
    {
        for (i = 0; i < sSC1PGameBonusStatNumPlayerKOs; i++)
        {
            if
            (
                (sSC1PGameBonusStatEnemyStats[i].damage_player != gSceneData.spgame_player)     ||
                (sSC1PGameBonusStatEnemyStats[i].damage_status_id != nFTCommonStatusDeadUpStar) &&
                (sSC1PGameBonusStatEnemyStats[i].damage_status_id != nFTCommonStatusDeadUpFall)
            )
            {
                goto loop_item_strike;
            }
        }
        switch (gSceneData.spgame_stage)
        {
        case nSC1PGameStageYoshi:
        case nSC1PGameStageKirby:
        case nSC1PGameStageZako:
            gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_TRICKSTER;
            break;

        default:
            gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_STARFINISH;
            break;
        }
    }
loop_item_strike:
    is_item_strike = FALSE;

    for (i = nFTStatusAttackIDAttackStart; i < ARRAY_COUNT(gSC1PGameBonusDefendIDCount); i++)
    {
        if (gSC1PGameBonusDefendIDCount[i] != 0)
        {
            if ((i >= nFTStatusAttackIDItemStart) && (i <= nFTStatusAttackIDItemEnd) || (i == nFTStatusAttackIDNull))
            {
                is_item_strike = TRUE;
            }
            else goto check_item_strike;
        }
    }
    if (is_item_strike != FALSE)
    {
        // Item Strike
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_ITEMSTRIKE;
    }
check_item_strike:
    if (!(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_ITEMSTRIKE))
    {
        if (gBattleState->item_switch != nSCBattleItemSwitchNone)
        {
            if ((gSC1PGameBonusTomatoCount == 0) && (gSC1PGameBonusHeartCount == 0) && (gSC1PGameBonusStarCount == 0))
            {
                for (i = nFTMotionAttackIDItemStart; i <= nFTMotionAttackIDItemEnd; i++)
                {
                    if (gSC1PGameBonusAttackIDCount[i] != 0)
                    {
                        goto check_shieldbreaker;
                    }
                }
                if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDNull] != 0)
                {
                    goto check_shieldbreaker;
                }
                else
                {
                    // No Item
                    gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_NOITEM;

                    if (sSC1PGameBonusStatNumPlayerKOs); // Bogus, but it matches
                }
            }
        }
    }
check_shieldbreaker:
    if (gSC1PGameBonusShieldBreaker != FALSE)
    {
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_SHIELDBREAKER;
    }
    if ((gSC1PGameBonusDefendIDCount[nFTStatusAttackIDThrowF] != 0) || (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDThrowB] != 0))
    {
        for (i = nFTStatusAttackIDAttackStart; i < ARRAY_COUNT(gSC1PGameBonusDefendIDCount); i++)
        {
            if ((i != nFTStatusAttackIDThrowF) && (i != nFTStatusAttackIDThrowB) && (gSC1PGameBonusDefendIDCount[i] != 0))
            {
                goto check_hawk;
            }
        }
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_JUDOWARRIOR;
    }
check_hawk:
    if ((gSC1PGameBonusDefendGroundAirCount[nMPKineticsAir] != 0) && (gSC1PGameBonusDefendGroundAirCount[nMPKineticsGround] == 0))
    {
        // Hawk
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_HAWK;
    }

    if ((gSC1PGameBonusDefendIsProjectileCount[TRUE] != 0) && (gSC1PGameBonusDefendIsProjectileCount[FALSE] == 0))
    {
        // Shooter
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_SHOOTER;
    }
    for (i = nFTStatusAttackIDAttackStart; i < nFTStatusAttackIDJabStart; i++)
    {
        if (gSC1PGameBonusDefendIDCount[i] != 0)
        {
            continue;
        }
        else goto check_itemthrow;
    }
    switch (gSceneData.ft_kind)
    {
    case nFTKindMario:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack13] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case nFTKindFox:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack100] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case nFTKindDonkey:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case nFTKindSamus:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] != 0)
        {
            break;
        }
        goto check_itemthrow;

    case nFTKindLuigi:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack13] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case nFTKindLink:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack13] == 0)
        {
            goto check_itemthrow;
        }
        else if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack100] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case nFTKindYoshi:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case nFTKindCaptain:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack13] == 0)
        {
            goto check_itemthrow;
        }
        else if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack100] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case nFTKindKirby:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack100] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case nFTKindPurin:
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] != 0)
        {
            break;
        }
        goto check_itemthrow;

    case nFTKindNess:
        // This should also check Attack13, as Ness has a 3-hit jab.
        if (gSC1PGameBonusDefendIDCount[nFTStatusAttackIDAttack12] != 0)
        {
            break;
        }
        goto check_itemthrow;
    }
    // All Variations
    gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_ALLVARIATIONS;

check_itemthrow:
    is_thrown_item = FALSE;

    for (i = nFTStatusAttackIDAttackStart; i < ARRAY_COUNT(gSC1PGameBonusDefendIDCount); i++)
    {
        if (gSC1PGameBonusDefendIDCount[i] != 0)
        {
            if (i == nFTMotionAttackIDItemThrow)
            {
                is_thrown_item = TRUE;
            }
            else goto check_smash;
        }
    }
    if (is_thrown_item != FALSE)
    {
        // Item Throw; why is this checking for Hammer usage?
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_ITEMTHROW;
    }
check_smash:
    if ((gSC1PGameBonusDefendIsSmashCount[TRUE] != 0) && (gSC1PGameBonusDefendIsSmashCount[FALSE] == 0))
    {
        // Smash Mania
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_SMASHMANIA;
    }

    if ((gSC1PGameBonusDefendIsSmashCount[TRUE] == 0) && (gSC1PGameBonusDefendIsSmashCount[FALSE] != 0))
    {
        // Smash-less
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_SMASHLESS;
    }
    special_count = 0;

    for (i = nFTStatusAttackIDAttackStart; i < ARRAY_COUNT(gSC1PGameBonusDefendIDCount); i++)
    {
        if (gSC1PGameBonusDefendIDCount[i] != 0)
        {
            if ((i >= nFTStatusAttackIDSpecialStart) && (i <= nFTStatusAttackIDSpecialEnd))
            {
                special_count++;
            }
            else goto check_heavy_damage;
        }
    }
    if (special_count != 0)
    {
        if (special_count == 1)
        {
            // Single Move
            gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_SINGLEMOVE;
        }
        else
        {
            // Special Move
            gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_SPECIALMOVE;
        }
    }
check_heavy_damage:
    if (gBattleState->players[gSceneData.spgame_player].stock_damage_all >= 200)
    {
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_HEAVYDAMAGE;
    }
    if (sSC1PGameStageTimeSec <= 30)
    {
        // Speedster
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_SPEEDSTER;
    }
    if (gBattleState->players[gSceneData.spgame_player].total_damage_dealt == 0)
    {
        // Pacifist
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_PACIFIST;
    }
    if (gSC1PManagerTotalFalls == 0)
    {
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_NOMISS;
    }
    if ((gBattleState->players[gSceneData.spgame_player].falls == 0) && (gBattleState->players[gSceneData.spgame_player].total_damage_all == 0))
    {
        // No Damage?
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_NODAMAGE;
    }
    if (gBattleState->players[gSceneData.spgame_player].stock_damage_all == 0)
    {
        // Full Power?
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_FULLPOWER;
    }
    if (sSC1PGameBonusStatInvincibleTimer != 0)
    {
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_STARCLEAR;
    }
    if (gSC1PGameBonusTomatoCount >= 3)
    {
        // Vegetarian
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_VEGETARIAN;
    }
    if (gSC1PGameBonusHeartCount >= 3)
    {
        // Heartthrob
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_HEARTTHROB;
    }
    if (gSC1PGameBonusMewCatcher != FALSE)
    {
        // Mew Catcher
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_MEWCATCHER;
    }
    if
    (
        (sSC1PGameBonusStatNumPlayerKOs != 0) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_player == gSceneData.spgame_player) &&
        (
            (
                (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_class == nFTHitlogObjectItem) &&
                (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind >= nITKindMBallMonsterStart) &&
                (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind <= nITKindMBallMonsterEnd)
            )
            ||
            (
                (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_class == nFTHitlogObjectWeapon) &&
                (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind >= nWPKindMonsterStart) &&
                (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind <= nWPKindMonsterEnd)
            )
        )
    )
    {
        // Pokémon Finish
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_POKEMONFINISH;
    }
    if
    (
        (sSC1PGameBonusStatNumPlayerKOs != 0) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_player == gSceneData.spgame_player) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_class == nFTHitlogObjectItem) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == nITKindMSBomb) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_stat_flags.stat_attack_id == nFTStatusAttackIDNull)
    )
    {
        // Booby Trap
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_BOOBYTRAP;
    }
    if
    (
        (sSC1PGameBonusStatNumPlayerKOs != 0) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_player == gSceneData.spgame_player) &&
        (
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_stat_flags.stat_attack_id == nFTStatusAttackIDThrowF) ||
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_stat_flags.stat_attack_id == nFTStatusAttackIDThrowB)
        )
    )
    {
        // Throw Down
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_THROWDOWN;
    }
    if (sSC1PGameBonusStatEndPlayerStatus == nFTCommonStatusAppeal)
    {
        // Fighter Stance
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_FIGHTERSTANCE;
    }
    if ((sSC1PGameBonusStatEndPlayerStatus == nFTCommonStatusDeadDown) || (sSC1PGameBonusStatEndPlayerStatus == nFTCommonStatusDeadLeftRight))
    {
        // Mystic
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_MYSTIC;
    }
    if (sSC1PGameBonusStatEndPlayerStatus == nFTCommonStatusDeadUpStar)
    {
        // Comet Mystic
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_COMETMYSTIC;
    }
    if
    (
        (sSC1PGameBonusStatNumPlayerKOs != 0) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_player != -1) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_class == nFTHitlogObjectGround) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == nGMHitEnvironmentAcid)
    )
    {
        // Acid Clear
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_ACIDCLEAR;
    }
    if
    (
        (
            (sSC1PGameBonusStatNumPlayerKOs != 0) &&
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_player != -1) &&
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_class == nFTHitlogObjectItem) &&
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == nITKindGBumper)
        )
        ||
        (
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_player == gSceneData.spgame_player) &&
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_class == nFTHitlogObjectItem) &&
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == nITKindNBumper)
        )
    )
    {
        // Bumper Clear
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_BUMPERCLEAR;
    }

    if
    (
        (sSC1PGameBonusStatNumPlayerKOs != 0) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_player != -1) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_class == nFTHitlogObjectGround) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == nGMHitEnvironmentTwister)
    )
    {
        // Twister Clear
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_TORNADOCLEAR;
    }
    if
    (
        (sSC1PGameBonusStatNumPlayerKOs != 0) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_player != -1) &&
        (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_class == nFTHitlogObjectWeapon) &&
        (
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == nWPKindArwingLaser2D) ||
            (sSC1PGameBonusStatEnemyStats[sSC1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == nWPKindArwingLaser3D)
        )
    )
    {
        // Arwing Clear
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_ARWINGCLEAR;
    }
    if ((gBattleState->time_limit != SCBATTLE_TIMELIMIT_INFINITE) && (gSceneData.spgame_time_seconds == 1))
    {
        // Last Second
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_LASTSECOND;
    }
    if ((gBattleState->time_limit != SCBATTLE_TIMELIMIT_INFINITE) && (gSceneData.spgame_time_seconds == 213))
    {
        // Lucky 3
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_LUCKY3;
    }
    damage_jackpot_bak = gBattleState->players[gSceneData.spgame_player].stock_damage_all;

    is_jackpot = FALSE;

    damage_jackpot_div = damage_jackpot_bak / 100;

    damage_jackpot_bak -= (damage_jackpot_div * 100);

    damage_jackpot_mod = damage_jackpot_bak;

    if (damage_jackpot_div != 0)
    {
        if (damage_jackpot_div == (damage_jackpot_mod / 10))
        {
            if ((damage_jackpot_mod - ((damage_jackpot_mod / 10) * 10)) == (damage_jackpot_mod / 10))
            {
                is_jackpot = TRUE;
            }
        }
    }
    else if ((damage_jackpot_mod / 10) != 0)
    {
        if ((damage_jackpot_mod - ((damage_jackpot_mod / 10) * 10)) == (damage_jackpot_mod / 10))
        {
            is_jackpot = TRUE;
        }
    }
    if (is_jackpot != FALSE)
    {
        // Jackpot
        gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_JACKPOT;
    }
    if ((gSceneData.spgame_stage == nSC1PGameStageYoshi) && (sSC1PGameEnemyStocksRemaining == 0))
    {
        is_ordered_variation = TRUE;

        for (i = 0; i < SC1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i++)
        {
            variation_order[i] = sSC1PGameEnemyVariations[sSC1PGameBonusStatEnemyStats[i].team_order];
        }
        for (variation = 0; i < sSC1PGameBonusStatNumPlayerKOs; i++, variation = (variation == (SC1PGAME_STAGE_YOSHI_VARIATIONS_COUNT - 1)) ? 0 : variation++)
        {
            if (sSC1PGameEnemyVariations[sSC1PGameBonusStatEnemyStats[i].team_order] != variation_order[variation])
            {
                is_ordered_variation = FALSE;
            }
        }
        if (is_ordered_variation != FALSE)
        {
            // Yoshi Rainbow
            gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_YOSHIRAINBOW;
        }
    }
    if ((gSceneData.spgame_stage == nSC1PGameStageKirby) && (sSC1PGameEnemyStocksRemaining == 0))
    {
        is_ordered_variation = TRUE;

        for (i = 0; i < SC1PGAME_STAGE_KIRBY_VARIATIONS_COUNT; i++)
        {
            if (dSC1PGameKirbyTeamCopyKinds[sSC1PGameBonusStatEnemyStats[i].team_order] != dSC1PGameKirbyTeamCopyKinds[i])
            {
                is_ordered_variation = FALSE;
            }
        }
        if (is_ordered_variation != FALSE)
        {
            // Kirby Ranks
            gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_KIRBYRANKS;
        }
    }
    if (gSceneData.spgame_stage == nSC1PGameStageMario)
    {
        if (gBattleState->players[gSceneData.ally_players[0]].falls == 0)
        {
            if (gBattleState->players[gSceneData.ally_players[0]].total_damage_all == 0)
            {
                // True Friend
                gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_TRUEFRIEND;
            }
            else
            {
                // Good Friend
                gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_GOODFRIEND;
            }
        }
        if (gSC1PGameBonusBrosCalamity != FALSE)
        {
            // Bros. Calamity
            gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_BROSCALAMITY;
        }
    }
    if ((gSceneData.spgame_stage == nSC1PGameStageDonkey) && (gBattleState->players[gSceneData.ally_players[0]].falls == 0) && (gBattleState->players[gSceneData.ally_players[1]].falls == 0))
    {
        if ((gBattleState->players[gSceneData.ally_players[0]].total_damage_all == 0) && (gBattleState->players[gSceneData.ally_players[1]].total_damage_all == 0))
        {
            // DK Perfect
            gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_DKPERFECT;
        }
        else
        {
            // DK Defender
            gSceneData.bonus_get_mask[1] |= SC1PGAME_BONUS_MASK1_DKDEFENDER;
        }
    }
    if (gSceneData.spgame_stage == nSC1PGameStageBoss)
    {
        gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_GAMECLEAR;

        if (gSC1PManagerTotalFalls == 0)
        {
            // No Miss Clear
            gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_NOMISSCLEAR;
        }
        if (gSC1PManagerTotalDamage == 0)
        {
            // No Damage Clear
            gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_NODAMAGECLEAR;
        }
        if (sSC1PGameTotalTimeSec <= I_MIN_TO_SEC(8))
        {
            // Speed Demon
            gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_SPEEDDEMON;
        }
        else if (sSC1PGameTotalTimeSec <= I_MIN_TO_SEC(12)) // 12 minutes? Wiki claims this should be 20 minutes
        {
            // Speed King
            gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_SPEEDKING;
        }
    }
    if
    (
        !(gSceneData.bonus_get_mask[1] & SC1PGAME_BONUS_MASK1_SINGLEMOVE)   &&
        !(gSceneData.bonus_get_mask[1] & SC1PGAME_BONUS_MASK1_SPECIALMOVE)  &&
        !(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_HAWK)         &&
        !(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_JUDOWARRIOR)  &&
        !(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_SHOOTER)      &&
        !(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_ALLVARIATIONS)&&
        !(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_ITEMSTRIKE)   &&
        !(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_TRICKSTER)    &&
        !(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_ITEMTHROW)    &&
        !(gSceneData.bonus_get_mask[0] & SC1PGAME_BONUS_MASK0_PACIFIST)     &&
        !(gSceneData.bonus_get_mask[1] & SC1PGAME_BONUS_MASK1_SMASHMANIA)
    )
    {
        attack_count = 0;

        for (i = nFTStatusAttackIDAttackStart; i < ARRAY_COUNT(gSC1PGameBonusAttackIDCount); i++)
        {
            attack_count += gSC1PGameBonusAttackIDCount[i];
        }
        if (attack_count != 0)
        {
            for (i = nFTStatusAttackIDAttackStart; i < ARRAY_COUNT(gSC1PGameBonusAttackIDCount); i++)
            {
                if ((gSC1PGameBonusAttackIDCount[i] / (f32)attack_count) >= F_PCT_TO_DEC(35.0F))
                {
                    // Cheap Shot
                    gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_CHEAPSHOT;

                    break;
                }
            }
        }
    }
}

// 0x80190E58
void sc1PGameInitBonusStats(void)
{
    gSceneData.bonus_get_mask[0] = gSceneData.bonus_get_mask[1] = gSceneData.bonus_get_mask[2] = 0;

    gSceneData.spgame_time_seconds = (gBattleState->time_limit == SCBATTLE_TIMELIMIT_INFINITE) ? 0 : I_FRAMES_TO_SEC(gBattleState->battle_time_remain + 59);

    gSC1PManagerTotalTimeTics += gBattleState->battle_time_current;
    gSC1PManagerTotalFalls += gBattleState->players[gSceneData.spgame_player].falls;
    gSC1PManagerTotalDamage += gBattleState->players[gSceneData.spgame_player].total_damage_all;

    switch (gSceneData.spgame_stage)
    {
    case nSC1PGameStageBonus3:
        if ((gBattleState->players[gSceneData.spgame_player].falls == 0) && (gSceneData.spgame_time_seconds != 0) && (gBattleState->players[gSceneData.spgame_player].total_damage_all == 0))
        {
            gSceneData.bonus_get_mask[0] |= SC1PGAME_BONUS_MASK0_NODAMAGE;
        }
        break;

    default:
        gSceneData.spgame_score += gBattleState->players[gSceneData.spgame_player].score * 1000;
        sc1PGameAppendBonusStats();
        break;
    }
}

// 0x80190F8C
void sc1PGameProcLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);

    ftRenderLightsDrawReflect(dls, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x80190FD8
void sc1PGameStartScene(void)
{
    gBattleState = &gSCManager1PGameBattleState;
    gBattleState->game_type = nSCBattleGameType1PGame;

    dSC1PGameDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);
    func_80007024(&dSC1PGameDisplaySetup);

    dSC1PGameGtlSetup.arena_size = (size_t) ((uintptr_t)&gSCSubsysFramebuffer0 - (uintptr_t)&ovl65_BSS_END);
    dSC1PGameGtlSetup.proc_start = sc1PGameProcStart;
    func_800A2698(&dSC1PGameGtlSetup);
    sc1PGameInitBonusStats();
    auStopBGM();

    while (auIsBGMPlaying(0) != FALSE)
    {
        continue;
    }
    auSetBGMVolume(0, 0x7800);
    func_800266A0_272A0();
    gmRumbleInitPlayers();
}
