#include <ft/fighter.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

#include "gm1pgame.h"

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern alSoundEffect D_8009EDD0;
extern s32 D_ovl2_80130D70;
extern u8 sGM1PManagerKirbyTeamFinalCopy;
extern void *gGMCommonFiles[/* */];
extern u32 dCommonFileIDs[8];

extern u32 sGM1PManagerTotalFalls;
extern u32 sGM1PManagerTotalFrames;

extern intptr_t D_NF_800A5240;
extern intptr_t lOverlay65ArenaLo;  // 0x80193900
extern intptr_t lOverlay65ArenaHi;  // 0x80392A00
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000040;
extern intptr_t D_NF_000000C8;
extern intptr_t D_NF_000000E6;
extern intptr_t D_NF_00000019;
extern intptr_t D_NF_00000068;
extern intptr_t D_NF_00000080;
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_00004D48;
extern intptr_t D_NF_00006450;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80192FA0 - Total number of enemies on current stage?
u8 sGM1PGameEnemyPlayerCount;

// 0x80192FA1 - Remaining stocks of enemy team
u8 sGM1PGameEnemyStocksRemaining;

// 0x80192FA4 - Flag to hide stock icons of defeated "VS *character* Team" members
u32 sGM1PGameEnemyStockSpriteFlags;

// 0x80192FA8 - "VS *character* Team" members defeated?
u8 sGM1PGameTeamPlayersRemaining;

// 0x80192FA9 - Current enemy variation?
u8 sGM1PGameCurrentEnemyVariation;

// 0x80192FB0 - Number of unique enemy patterns in "VS *character* Team" battles (e.g. 6 randomly selected colors repeated 3 times for Yoshi Team)
u8 sGM1PGameEnemyVariations[GM1PGAME_STAGE_MAX_VARIATIONS_COUNT];

// 0x80192FD0 - Camera target position when Master Hand is defeated
Vec3f sGM1PGameBossDefeatZoomPosition;

// 0x80192FDC
u16 sGM1PGameBossDefeatSoundTerminateTemp;

// 0x80192FE0
gm1PGameFighter sGM1PGamePlayerSetups[GMMATCH_PLAYERS_MAX];

// 0x80193060 - Costume ID for all members of Kirby Team?
s32 sGM1PGameEnemyKirbyCostume;

// 0x80193064 - Base of Fighting Polygon Team stock sprite file?
void *sGM1PGameZakoStockSprite;

// 0x80193068
rdFileNode sGM1PGameStatusBuf[100];

// 0x80193388
rdFileNode sGM1PGameForceBuf[7];

// 0x801933C0
sb32 sGM1PGameIsEndStage;

// 0x801933C4 - Only works on Meta Crystal and Duel Zone?
sb32 sGM1PGameIsStartStage;

// 0x801933C8
s32 sGM1PGameBonusStatEndPlayerStatus;

// 0x801933CC
s32 sGM1PGameBonusStatInvincibleTimer;

// 0x801933D0 - Specific stats of all enemy players?
gm1PGameStats sGM1PGameBonusStatEnemyStats[GM1PGAME_STAGE_MAX_TEAM_COUNT];

// 0x801936A4 - Player's number of KOs scored on enemies
s32 sGM1PGameBonusStatNumPlayerKOs;

// 0x801936A4
sb32 g1PGameBonusStatBrosCalamity;

// 0x801936A8
u8 g1PGameBonusStatTomatoCount;

// 0x801936A9
u8 g1PGameBonusStatHeartCount;

// 0x801936AA
u8 g1PGameBonusStatStarCount;

// 0x801936AB
ub8 g1PGameBonusStatShieldBreaker;

// 0x801936AC
u8 g1PGameBonusStatGiantImpact;

// 0x801936AD
ub8 g1PGameBonusStatMewCatcher;

// 0x801936B0
u32 g1PGameBonusStatAttackIDCount[ftStatus_AttackIndex_EnumMax];

// 0x80193798
u32 g1PGameBonusStatAttackIsSmashCount[2];

// 0x801937A0
u32 g1PGameBonusStatAttackGroundAirCount[2];

// 0x801937A8
u32 g1PGameBonusStatAttackIsProjectileCount[2];

// 0x801937B0
u32 g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_EnumMax];

// 0x80193898
u32 g1PGameBonusStatDefendIsSmashCount[2];

// 0x801938A0
u32 g1PGameBonusStatDefendGroundAirCount[2];

// 0x801938A8
u32 g1PGameBonusStatDefendIsProjectileCount[2];

// 0x801938B0
u32 sGM1PGameStageTimeSec;

// 0x801938B4
u32 sGM1PGameTotalTimeSec;

// 0x801938B8
s32 sGM1PGamePlayerInterfacePositionsX[GMMATCH_PLAYERS_MAX];

// 0x801938C8 - Number of enemy stock icons to display?
u8 sGM1PGameEnemyStocksDisplay;

// 0x801938CC
ftSprites *sGM1PGameEnemyTeamSprites;

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80192800
u8 d1PGameKirbyTeamCopyIDs[/* */] = 
{ 
    Ft_Kind_Mario,
    Ft_Kind_Donkey,
    Ft_Kind_Link,
    Ft_Kind_Samus,
    Ft_Kind_Yoshi,
    Ft_Kind_Fox,
    Ft_Kind_Pikachu
};

// 0x80192808
f32 D_ovl65_80192808[/* */] = { -15.0F, 0.0F, 15.0F, 30.0F, 45.0F, 60.0F };

// 0x80192820
f32 D_ovl65_80192820[/* */] = { 1.0F, 2.0F, -8.0F, -30.0F };

// 0x80192830
gm1PGameCom d1PGameComPlayerDesc[/* */] = 
{
    // VS Link
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_Low,     // Item Switch
        {  1,  2,  3,  6,  8 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Yoshi Team
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_Middle,  // Item Switch
        {  1,  2,  4,  6,  8 },     // Enemy CPU levels per difficulty setting
        { 10, 11, 12, 13, 14 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Fox
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_Middle,  // Item Switch
        {  2,  3,  5,  7,  9 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Bonus Stage: Break the Targets!
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_None,    // Item Switch
        {  1,  1,  1,  1,  1 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Mario Bros.
    {
        FALSE,                      // Is team attack enabled?
        gmMatch_ItemSwitch_Middle,  // Item Switch
        {  2,  3,  5,  7,  9 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  5,  5,  5,  4,  2 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Pikachu
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_Middle,  // Item Switch
        {  3,  4,  5,  7,  9 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Giant Donkey Kong
    {
        FALSE,                      // Is team attack enabled?
        gmMatch_ItemSwitch_High,    // Item Switch
        {  2,  4,  6,  7,  8 },     // Enemy CPU levels per difficulty setting
        { 25, 26, 27, 28, 29 },     // Enemy handicaps per difficulty setting
        {  4,  4,  4,  3,  2 },     // Ally CPU levels per difficulty setting
        {  7,  7,  7,  7,  7 }      // Ally handicaps per difficulty setting
    },

    // Bonus Stage: Board the Platforms!
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_None,    // Item Switch
        {  1,  1,  1,  1,  1 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Kirby Team
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_Middle,  // Item Switch
        {  3,  4,  5,  6,  7 },     // Enemy CPU levels per difficulty setting
        { 15, 16, 17, 18, 19 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Samus
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_Middle,  // Item Switch
        {  5,  6,  8,  9,  9 },     // Enemy CPU levels per difficulty setting
        {  9,  9,  9,  9, 40 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Metal Mario
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_VeryLow, // Item Switch
        {  1,  3,  4,  6,  8 },     // Enemy CPU levels per difficulty setting
        { 30, 31, 32, 33, 34 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Bonus Stage: Race to the Finish!
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_None,    // Item Switch
        {  6,  8,  9,  9,  9 },     // Enemy CPU levels per difficulty setting
        {  1,  3,  5,  7,  9 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // VS Fighting Polygon Team
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_High,    // Item Switch
        {  2,  3,  4,  5,  7 },     // Enemy CPU levels per difficulty setting
        { 20, 21, 22, 23, 24 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Final Stage
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_None,    // Item Switch
        {  1,  2,  3,  4,  5 },     // Enemy CPU levels per difficulty setting
        { 35, 36, 37, 38, 39 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Challenger Approaching: Luigi
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_None,    // Item Switch
        {  6,  7,  7,  8,  9 },     // Enemy CPU levels per difficulty setting
        {  6,  6,  6,  6,  6 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Challenger Approaching: Ness
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_None,    // Item Switch
        {  6,  7,  7,  8,  9 },     // Enemy CPU levels per difficulty setting
        {  6,  6,  6,  6,  6 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Challenger Approaching: Jigglypuff
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_None,    // Item Switch
        {  6,  7,  7,  8,  9 },     // Enemy CPU levels per difficulty setting
        {  6,  6,  6,  6,  6 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    },

    // Challenger Approaching: Captain Falcon
    {
        TRUE,                       // Is team attack enabled?
        gmMatch_ItemSwitch_None,    // Item Switch
        {  6,  7,  7,  8,  9 },     // Enemy CPU levels per difficulty setting
        {  6,  6,  6,  6,  6 },     // Enemy handicaps per difficulty setting
        {  1,  1,  1,  1,  1 },     // Ally CPU levels per difficulty setting
        {  9,  9,  9,  9,  9 }      // Ally handicaps per difficulty setting
    }
};

// 0x801929BC
gm1PGameStage d1PGameStageDesc[/* */] =
{
    // VS Link
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Hyrule,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {                           
            Ft_Kind_Link,                   // Enemy1 ID
            Ft_Kind_Null                    // Enemy2 ID
        },
        ftComputer_Trait_Link,              // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // VS Yoshi Team
    {
        0x80,                               // Screen flash alpha transparency
        Gr_Kind_Yoster1P,                   // Stage ID
        0xFFFFFFFF,                         // Item toggles
        GM1PGAME_STAGE_YOSHI_TEAM_COUNT,    // Number of enemies
        {
            Ft_Kind_Yoshi,                  // Enemy1 ID
            Ft_Kind_Null                    // Enemy2 ID
        },
        ftComputer_Trait_YoshiTeam,         // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // VS Fox
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Sector,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Fox,                    // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // Bonus Stage: Break the Targets!
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Castle,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Null,                   // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // VS Mario Bros.
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Castle,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        2,                                  // Number of enemies
        {
            Ft_Kind_Mario,                  // Enemy Team Member 1 ID
            Ft_Kind_Luigi                   // Enemy Team Member 2 ID
        },
        ftComputer_Trait_MarioBros,         // Enemy trait
        1,                                  // Number of allies
        ftComputer_Trait_Ally               // Ally trait
    },

    // VS Pikachu
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Yamabuki,                   // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Pikachu,                // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // VS Giant Donkey Kong
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Jungle,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_GiantDonkey,            // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_GiantDonkey,       // Enemy trait
        2,                                  // Number of allies
        ftComputer_Trait_Ally               // Ally trait
    },

    // Bonus Stage: Board the Platforms!
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Castle,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Null,                   // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // VS Kirby Team
    {
        0x80,                               // Screen flash alpha transparency
        Gr_Kind_Pupupu,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        GM1PGAME_STAGE_KIRBY_TEAM_COUNT,    // Number of enemies
        {
            Ft_Kind_Kirby,                  // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_KirbyTeam,         // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // VS Samus
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Zebes,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Samus,                  // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // VS Metal Mario
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Crystal,                    // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_MetalMario,             // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // Bonus Stage: Race to the Finish!
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Bonus3,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        3,                                  // Number of enemies
        {
            Ft_Kind_Null,                   // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Bonus3,            // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // VS Fighting Polygon Team
    {
        0x80,                               // Screen flash alpha transparency
        Gr_Kind_Zako,                       // Stage ID
        0xFFFFFFFF,                         // Item toggles
        GM1PGAME_STAGE_MAX_TEAM_COUNT,      // Number of enemies
        {
            Ft_Kind_Null,                   // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_PolyTeam,          // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // Final Stage
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Last,                       // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_MasterHand,             // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // Challenger Approaching: Luigi
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Castle,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Luigi,                  // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // Challenger Approaching: Ness
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Pupupu,                     // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Ness,                   // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // Challenger Approaching: Jigglypuff
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Yamabuki,                   // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Purin,                  // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    },

    // Challenger Approaching: Captain Falcon
    {
        0xFF,                               // Screen flash alpha transparency
        Gr_Kind_Zebes,                      // Stage ID
        0xFFFFFFFF,                         // Item toggles
        1,                                  // Number of enemies
        {
            Ft_Kind_Captain,                // Enemy Team Member 1 ID
            Ft_Kind_Null                    // Enemy Team Member 2 ID
        },
        ftComputer_Trait_Default,           // Enemy trait
        0,                                  // Number of allies
        ftComputer_Trait_Default            // Ally trait
    }
};

// 0x80192ADC
s32 d1PGameInterface4PlayersPositionsX[/* */] = {  55, 125, 195, 265 };

// 0x80192AEC
s32 d1PGameInterface3PlayersPositionsX[/* */] = {  90, 160, 230 };

// 0x80192AF8
s32 d1PGameInterface2PlayersPositionsX[/* */] = { 125, 195 };

// 0x80192B00 - Pointer to player HUD X-Position spacing setups for player counts of 2, 3 and 4
s32 *d1PGameInterfaceCountPositions[/* */] = { d1PGameInterface2PlayersPositionsX, d1PGameInterface3PlayersPositionsX, d1PGameInterface4PlayersPositionsX };

// 0x80192B0C - Some kind of process ID list?
u16 D_ovl65_80192B0C[3] = { 0x16, 0xF, 0x3C };

// 0x80192B14
Unk800D4060 D_ovl65_80192B14;

// 0x80192B18
scUnkDataBounds D_ovl65_80192B18;

// 0x80192B34
scRuntimeInfo D_ovl65_80192B34;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

/*
 
FileInit should be the first function here. Not sure if it should be its own file or if it fits right in.
 
void func_ovl65_8018D0C0(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (uintptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = sGM1PGameStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sGM1PGameStatusBuf);
    rldm_setup.forceBuf = sGM1PGameForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(sGM1PGameForceBuf);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gGMCommonFiles, gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}
*/ 

// 0x8018D160
void gm1PGameSetGameStart(void)
{
    sGM1PGameIsStartStage = TRUE;

    if ((gSceneData.spgame_stage == gm1PGame_Stage_Metal) || (gSceneData.spgame_stage == gm1PGame_Stage_Zako))
    {
        mpCollision_SetPlayMusicID();
    }
}

// 0x8018D1A8
void gm1PGameSetGameEnd(void)
{
    GObj *fighter_gobj;
    ftStruct *fp;

    sGM1PGameIsEndStage = TRUE;

    fighter_gobj = gBattleState->player_block[gSceneData.spgame_player].fighter_gobj;
    fp = ftGetStruct(fighter_gobj);

    sGM1PGameBonusStatEndPlayerStatus = fp->status_info.status_id;
    sGM1PGameBonusStatInvincibleTimer = fp->star_invincible_timer;
}

// 0x8018D200
void func_ovl65_8018D200(void)
{
    func_ovl2_8011485C();

    if ((sGM1PGameIsStartStage == FALSE) && (gBattleState->game_status == gmMatch_GameStatus_Go))
    {
        gm1PGameSetGameStart();
    }
    if ((sGM1PGameIsEndStage == FALSE) && (gBattleState->game_status == gmMatch_GameStatus_Set))
    {
        gm1PGameSetGameEnd();
    }
}

// 0x8018D280
s32 gm1PGameGetNextFreePlayerPort(s32 player)
{
    return (player == (GMMATCH_PLAYERS_MAX - 1)) ? 0 : player + 1;
}

// 0x8018D29C - Really weird match, gets next available costume for CPU player in 1P Game
s32 gm1PGameGetNextFreeCostume(s32 com)
{
    s32 player;
    s32 used_costume;
    s32 cp_costume;
    s32 cp_ft_kind;

    cp_ft_kind = gBattleState->player_block[com].character_kind;

    // WARNING: Newline memes. get_costume should be on the same line as used_costume = 0, player = 0;
    used_costume = 0, player = 0; get_costume:

    cp_costume = ftCostume_GetIndexFFA(cp_ft_kind, used_costume);

    while (player != ARRAY_COUNT(gBattleState->player_block))
    {
        if (player == com) goto l_continue; // This goto is required

        else if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) goto l_continue; // This one is not

        else if ((gBattleState->player_block[player].character_kind == cp_ft_kind) && (gBattleState->player_block[player].costume_index == cp_costume))
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
s32 gm1PGameGetShuffledVariation(u16 shuf, s32 max)
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
void gm1PGameGetSpawnPosition(Vec3f *mpoint_pos, s32 mpoint_kind)
{
    s32 mpoint;

    if (mpCollision_GetMPointCountKind(mpoint_kind) != 1)
    {
        while (TRUE)
        {
            gsFatalPrintF("getMapObjPos:mpGetMapObjNumId(%d) = %d\n", mpoint_kind, mpCollision_GetMPointCountKind(mpoint_kind));
            smCrashPrintGObjStatus();
        }
    }
    mpCollision_GetMPointIDsKind(mpoint_kind, &mpoint);
    mpCollision_GetMPointPositionID(mpoint, mpoint_pos);
}

// 0x8018D45C
void gm1PGameGetRandomSpawnPosition(Vec3f *mpoint_pos, s32 mpoint_kind)
{
    s32 mpoint_count = mpCollision_GetMPointCountKind(mpoint_kind);
    s32 mpoint[10];

    if ((mpoint_count == 0) || (mpoint_count > ARRAY_COUNT(mpoint)))
    {
        while (TRUE)
        {
            gsFatalPrintF("getMapObjPosRandom:mpGetMapObjNumId(%d) = 0\n", mpoint_kind);
            smCrashPrintGObjStatus();
        }
    }
    mpCollision_GetMPointIDsKind(mpoint_kind, mpoint);
    mpCollision_GetMPointPositionID(mpoint[lbRandom_GetIntRange(mpoint_count)], mpoint_pos);
}

// 0x8018D4EC
void gm1PGameSetupEnemyPlayer(gm1PGameStage *stagesetup, gm1PGameCom *comsetup, s32 player, s32 enemy_player_num)
{
    s32 level = comsetup->enemy_level[gSaveData.spgame_difficulty];

    level -= D_ovl2_80130D70;

    if (level <= 0)
    {
        level = 1;
    }
    gBattleState->player_block[player].level = level;
    gBattleState->player_block[player].handicap = comsetup->enemy_handicap[gSaveData.spgame_difficulty];
    gBattleState->player_block[player].character_kind = stagesetup->character_kind[enemy_player_num];
    gBattleState->player_block[player].team_index = gmMatch_TeamIndex_Com;
    gBattleState->player_block[player].costume_index = 0;
    gBattleState->player_block[player].shade_index = 0;
    gBattleState->player_block[player].player_color_index = gmMatch_PlayerColor_CP;
    gBattleState->player_block[player].tag_index = ifPlayerTag_Kind_CP;
    gBattleState->player_block[player].is_permanent_stock = TRUE;
    gBattleState->player_block[player].stock_count = 0;
    gBattleState->player_block[player].is_rebirth_multi = TRUE;
    gBattleState->player_block[player].player_kind = Pl_Kind_Com;

    sGM1PGamePlayerSetups[player].cp_trait = stagesetup->opponent_behavior;

    sGM1PGameTeamPlayersRemaining--;
}

// 0x8018D60C
void gm1PGameStageSetupAll(void)
{
    gm1PGameStage *stagesetup = &d1PGameStageDesc[gSceneData.spgame_stage];
    gm1PGameCom *comsetup = &d1PGameComPlayerDesc[gSceneData.spgame_stage];
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
    case gm1PGame_Stage_Bonus3:
        gBattleState->time_limit = 1;
        break;

    case gm1PGame_Stage_Luigi:
    case gm1PGame_Stage_Ness:
    case gm1PGame_Stage_Purin:
    case gm1PGame_Stage_Captain:
        gBattleState->time_limit = GMMATCH_TIMELIMIT_INFINITE;
        break;

    default:
        gBattleState->time_limit = gSceneData.spgame_time_limit;
        break;
    }
    gBattleState->item_toggles = stagesetup->item_toggles;
    gBattleState->item_switch = comsetup->item_switch;

    sGM1PGameEnemyPlayerCount = sGM1PGameEnemyStocksRemaining = sGM1PGameTeamPlayersRemaining = stagesetup->opponent_count;

    sGM1PGameEnemyStockSpriteFlags = 0;

    for (i = 0; i < (ARRAY_COUNT(gBattleState->player_block) + ARRAY_COUNT(sGM1PGamePlayerSetups)) / 2; i++)
    {
        sGM1PGamePlayerSetups[i].anim_bank = NULL;
        sGM1PGamePlayerSetups[i].copy_kind = Ft_Kind_Kirby;
        sGM1PGamePlayerSetups[i].team_order = 0;
        sGM1PGamePlayerSetups[i].is_skip_entry = FALSE;
        sGM1PGamePlayerSetups[i].is_skip_magnify = FALSE;
        sGM1PGamePlayerSetups[i].cp_trait = 0;
        sGM1PGamePlayerSetups[i].cam_frame_mul = 1.0F;

        if (i != gSceneData.spgame_player)
        {
            gBattleState->player_block[i].player_kind = Pl_Kind_Not;
        }
    }
    if (gSceneData.spgame_stage < gm1PGame_Stage_ChallengerStart)
    {
        D_800A4B18.player_block[gSceneData.spgame_player].is_permanent_stock = FALSE;
        sGM1PGamePlayerSetups[gSceneData.spgame_player].mpoint_kind = mpMPoint_Kind_1PGamePlayerSpawn;
    }
    else
    {
        D_800A4B18.player_block[gSceneData.spgame_player].is_permanent_stock = TRUE;
        sGM1PGamePlayerSetups[gSceneData.spgame_player].mpoint_kind = mpMPoint_Kind_1PGameChallengerPlayerSpawn;
    }
    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Boss:
    case gm1PGame_Stage_Bonus3:
        sGM1PGamePlayerSetups[gSceneData.spgame_player].is_skip_entry = TRUE;
        break;

    default:
        sGM1PGamePlayerSetups[gSceneData.spgame_player].is_skip_entry = FALSE;
        break;
    }
    player = gSceneData.spgame_player;

    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Link:
    case gm1PGame_Stage_Fox:
    case gm1PGame_Stage_MarioBros:
    case gm1PGame_Stage_Pikachu:
    case gm1PGame_Stage_GDonkey:
    case gm1PGame_Stage_Samus:
    case gm1PGame_Stage_Metal:
    case gm1PGame_Stage_Boss:
    case gm1PGame_Stage_Luigi:
    case gm1PGame_Stage_Ness:
    case gm1PGame_Stage_Purin:
    case gm1PGame_Stage_Captain:
        for (i = 0; i < stagesetup->ally_count; i++)
        {
            gBattleState->player_block[gSceneData.cpu_port[i]].level = comsetup->ally_level[gSaveData.spgame_difficulty];
            gBattleState->player_block[gSceneData.cpu_port[i]].handicap = comsetup->ally_handicap[gSaveData.spgame_difficulty];
            gBattleState->player_block[gSceneData.cpu_port[i]].team_index = 0;
            gBattleState->player_block[gSceneData.cpu_port[i]].player_color_index = gSceneData.spgame_player;
            gBattleState->player_block[gSceneData.cpu_port[i]].tag_index = ifPlayerTag_Kind_Heart;
            gBattleState->player_block[gSceneData.cpu_port[i]].is_permanent_stock = TRUE;
            gBattleState->player_block[gSceneData.cpu_port[i]].stock_count = 0;
            gBattleState->player_block[gSceneData.cpu_port[i]].is_rebirth_multi = FALSE;
            gBattleState->player_block[gSceneData.cpu_port[i]].player_kind = Pl_Kind_Com;

            player = gSceneData.cpu_port[i];

            sGM1PGamePlayerSetups[gSceneData.cpu_port[i]].mpoint_kind = i + mpMPoint_Kind_1PGameAllySpawnStart;
            sGM1PGamePlayerSetups[gSceneData.cpu_port[i]].cp_trait = stagesetup->ally_behavior;
        }
        for (i = 0; i < stagesetup->opponent_count; i++)
        {
            player = gm1PGameGetNextFreePlayerPort(player);

            gm1PGameSetupEnemyPlayer(stagesetup, comsetup, player, i);

            gBattleState->player_block[player].costume_index = gm1PGameGetNextFreeCostume(player);

            if (gSceneData.spgame_stage < gm1PGame_Stage_ChallengerStart)
            {
                sGM1PGamePlayerSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;
            }
            else
            {
                sGM1PGamePlayerSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameChallengerEnemySpawnStart;

                level = gBattleState->player_block[player].level - gSceneData.unk43;

                gBattleState->player_block[player].level = (level <= 0) ? 1 : level;
            }
            if (gSceneData.spgame_stage == gm1PGame_Stage_Boss)
            {
                sGM1PGamePlayerSetups[player].is_skip_magnify = TRUE;
            }
        }
        break;

    case gm1PGame_Stage_Yoshi:
        variations = GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i++)
        {
            sGM1PGameEnemyVariations[i] = gm1PGameGetShuffledVariation(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << sGM1PGameEnemyVariations[i]);

            variations--;
        }
        for (costume = 0, i = GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i < stagesetup->opponent_count; i++)
        {
            sGM1PGameEnemyVariations[i] = sGM1PGameEnemyVariations[costume];

            if (costume == (GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT - 1))
            {
                costume = 0;
            }
            else costume++;
        }
        sGM1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = gm1PGameGetNextFreePlayerPort(player);

            gm1PGameSetupEnemyPlayer(stagesetup, comsetup, player, 0);

            gBattleState->player_block[player].costume_index = sGM1PGameEnemyVariations[sGM1PGameCurrentEnemyVariation];

            if ((gSceneData.ft_kind == Ft_Kind_Yoshi) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index))
            {
                gBattleState->player_block[player].shade_index = 1;
            }
            else gBattleState->player_block[player].shade_index = 0;

            sGM1PGamePlayerSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;
            sGM1PGamePlayerSetups[player].team_order = sGM1PGameCurrentEnemyVariation;
            sGM1PGamePlayerSetups[player].cam_frame_mul = 0.3F;
            sGM1PGamePlayerSetups[player].is_skip_magnify = TRUE;

            sGM1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Zako:
        variations = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_VARIATIONS_COUNT; i++)
        {
            sGM1PGameEnemyVariations[i] = gm1PGameGetShuffledVariation(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << sGM1PGameEnemyVariations[i]);

            sGM1PGameEnemyVariations[i] += Ft_Kind_PolyStart;

            variations--;
        }
        for (kind = 0, i = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT; i < stagesetup->opponent_count; i++)
        {
            sGM1PGameEnemyVariations[i] = sGM1PGameEnemyVariations[kind];

            if (kind == (GM1PGAME_STAGE_MAX_VARIATIONS_COUNT - 1))
            {
                kind = 0;
            }
            else kind++;
        }
        sGM1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = gm1PGameGetNextFreePlayerPort(player);

            gm1PGameSetupEnemyPlayer(stagesetup, comsetup, player, 0);

            gBattleState->player_block[player].character_kind = sGM1PGameEnemyVariations[sGM1PGameCurrentEnemyVariation];

            sGM1PGamePlayerSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;
            sGM1PGamePlayerSetups[player].team_order = sGM1PGameCurrentEnemyVariation;
            sGM1PGamePlayerSetups[player].cam_frame_mul = 0.3F;
            sGM1PGamePlayerSetups[player].is_skip_magnify = TRUE;

            sGM1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Kirby:
        sGM1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_KIRBY_SIM_COUNT; i++)
        {
            player = gm1PGameGetNextFreePlayerPort(player);

            gm1PGameSetupEnemyPlayer(stagesetup, comsetup, player, 0);

            sGM1PGameEnemyKirbyCostume = gBattleState->player_block[player].costume_index =

            ((gSceneData.ft_kind == Ft_Kind_Kirby) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index)) ? ftCostume_GetIndexFFA(Ft_Kind_Kirby, 1) : 0;

            sGM1PGamePlayerSetups[player].team_order = sGM1PGameCurrentEnemyVariation;
            sGM1PGamePlayerSetups[player].copy_kind = d1PGameKirbyTeamCopyIDs[sGM1PGameCurrentEnemyVariation];
            sGM1PGamePlayerSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;

            sGM1PGamePlayerSetups[player].cam_frame_mul = 0.3F;
            sGM1PGamePlayerSetups[player].is_skip_magnify = TRUE;

            sGM1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Bonus3:
        variations = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            sGM1PGameEnemyVariations[i] = gm1PGameGetShuffledVariation(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << sGM1PGameEnemyVariations[i]);

            sGM1PGameEnemyVariations[i] += 14;

            variations--;
        }
        sGM1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = gm1PGameGetNextFreePlayerPort(player);

            gm1PGameSetupEnemyPlayer(stagesetup, comsetup, player, 0);

            gBattleState->player_block[player].character_kind = sGM1PGameEnemyVariations[sGM1PGameCurrentEnemyVariation];

            sGM1PGamePlayerSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;
            sGM1PGamePlayerSetups[player].is_skip_magnify = sGM1PGamePlayerSetups[player].is_skip_entry = TRUE;

            sGM1PGameCurrentEnemyVariation++;
        }
        break;

    default:
        break;
    }
    gBattleState->pl_count = gBattleState->cp_count = 0;

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        switch (gBattleState->player_block[i].player_kind)
        {
        case Pl_Kind_Man:
            gBattleState->pl_count++;
            break;

        case Pl_Kind_Com:
            gBattleState->cp_count++;
            break;
        }
    }
    g1PGameBonusStatTomatoCount = 0;
    g1PGameBonusStatHeartCount = 0;
    g1PGameBonusStatStarCount = 0;
    g1PGameBonusStatShieldBreaker = FALSE;
    g1PGameBonusStatGiantImpact = FALSE;
    g1PGameBonusStatMewCatcher = FALSE;

    sGM1PGameIsStartStage = FALSE;
    sGM1PGameIsEndStage = FALSE;

    sGM1PGameBonusStatNumPlayerKOs = 0;
    sGM1PGameBonusStatEndPlayerStatus = -1;
    sGM1PGameBonusStatInvincibleTimer = 0;
    g1PGameBonusStatBrosCalamity = FALSE;

    for (i = 0; i < ((ARRAY_COUNT(g1PGameBonusStatAttackIDCount) + ARRAY_COUNT(g1PGameBonusStatDefendIDCount)) / 2); i++)
    {
        g1PGameBonusStatAttackIDCount[i] = g1PGameBonusStatDefendIDCount[i] = 0;
    }
    for 
    (
        i = 0; 
        i < (ARRAY_COUNT(g1PGameBonusStatAttackIsSmashCount) + ARRAY_COUNT(g1PGameBonusStatAttackGroundAirCount) + ARRAY_COUNT(g1PGameBonusStatAttackIsProjectileCount) +
             ARRAY_COUNT(g1PGameBonusStatDefendIsSmashCount) + ARRAY_COUNT(g1PGameBonusStatDefendGroundAirCount) + ARRAY_COUNT(g1PGameBonusStatDefendIsProjectileCount)) / 6;
        i++
    )
    {
        g1PGameBonusStatAttackIsSmashCount[i] = g1PGameBonusStatDefendIsSmashCount[i] = 0;
        g1PGameBonusStatAttackGroundAirCount[i] = g1PGameBonusStatDefendGroundAirCount[i] = 0;
        g1PGameBonusStatAttackIsProjectileCount[i] = g1PGameBonusStatDefendIsProjectileCount[i] = 0;
    }
}

// 0x8018E18C - Spawn next member of enemy team
void gm1PGameSpawnEnemyTeamNext(GObj *player_gobj)
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

    if (sGM1PGameTeamPlayersRemaining == 0)
    {
        ftCommon_Sleep_SetStatus(player_gobj);
    }
    else
    {
        sGM1PGameTeamPlayersRemaining--;

        ftManagerDestroyFighter(player_gobj);

        gBattleState->player_block[player].stock_count = 0;

        switch (gSceneData.spgame_stage)
        {
        case gm1PGame_Stage_Yoshi:
            gBattleState->player_block[player].costume_index = sGM1PGameEnemyVariations[sGM1PGameCurrentEnemyVariation];

            gBattleState->player_block[player].shade_index = ((gSceneData.ft_kind == Ft_Kind_Yoshi) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index)) ? 1 : 0;

            func_ovl2_8010FF78(player, gBattleState->player_block[player].costume_index, attributes);
            break;

        case gm1PGame_Stage_Zako:
            gBattleState->player_block[player].character_kind = sGM1PGameEnemyVariations[sGM1PGameCurrentEnemyVariation];
            break;

        case gm1PGame_Stage_Kirby:
            sGM1PGamePlayerSetups[player].copy_kind = (sGM1PGameCurrentEnemyVariation == GM1PGAME_STAGE_KIRBY_VARIATIONS_COUNT) ? sGM1PManagerKirbyTeamFinalCopy : d1PGameKirbyTeamCopyIDs[sGM1PGameCurrentEnemyVariation];
            break;
        }
        sGM1PGamePlayerSetups[player].team_order = sGM1PGameCurrentEnemyVariation++;

        player_spawn = dFTDefaultFighterDesc;

        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        gm1PGameGetRandomSpawnPosition(&player_spawn.pos, mpMPoint_Kind_1PGameEnemyTeamSpawn);

        player_spawn.pos.y = (gGroundInfo->cam_bound_top + gGroundInfo->blastzone_top) * 0.5F;

        player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? LR_Left : LR_Right;

        player_spawn.team = gBattleState->player_block[player].team_index;

        player_spawn.player = player;

        player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? ftParts_LOD_HighPoly : ftParts_LOD_LowPoly;

        player_spawn.costume = gBattleState->player_block[player].costume_index;

        player_spawn.shade = gBattleState->player_block[player].shade_index;

        player_spawn.handicap = gBattleState->player_block[player].handicap;

        player_spawn.cp_level = gBattleState->player_block[player].level;

        player_spawn.stock_count = gBattleState->player_block[player].stock_count;

        player_spawn.damage = 0;

        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;

        player_spawn.controller = &gPlayerControllers[player];

        player_spawn.anim_heap = anim_bank;

        player_spawn.copy_kind = sGM1PGamePlayerSetups[player].copy_kind;
        player_spawn.team_order = sGM1PGamePlayerSetups[player].team_order;

        player_spawn.is_skip_entry = TRUE;
        player_spawn.is_skip_magnify = sGM1PGamePlayerSetups[player].is_skip_magnify;
        player_spawn.is_skip_shadow_setup = TRUE;

        com_gobj = ftManagerMakeFighter(&player_spawn);

        fp = ftGetStruct(com_gobj);

        ftCommon_ClearPlayerMatchStats(player, com_gobj);
        ftCommon_SetAllowPlayerControl(com_gobj);

        fp->fighter_com.trait = sGM1PGamePlayerSetups[player].cp_trait;

        ifPlayer_Damage_StopBreakAnim(fp);

        fp->cam_zoom_frame *= sGM1PGamePlayerSetups[player].cam_frame_mul;
    }
}

// 0x8018E598
void gm1PGameSetPlayerInterfacePositions(void)
{
    s32 *pos = d1PGameInterfaceCountPositions[(gBattleState->pl_count + gBattleState->cp_count) - 2];
    s32 player = gSceneData.spgame_player;
    s32 i;

    for (i = 0; i < (gBattleState->pl_count + gBattleState->cp_count); i++)
    {
        sGM1PGamePlayerInterfacePositionsX[player] = *pos;
        player = gm1PGameGetNextFreePlayerPort(player);

        pos++;
    }
    gPlayerCommonInterface.ifplayers_pos_x = sGM1PGamePlayerInterfacePositionsX;
    gPlayerCommonInterface.ifplayers_pos_y = 210;
}

// 0x8018E670
void func_ovl65_8018E670(void)
{
    GObj *fighter_gobj;
    s32 random;
    s32 player_count;
    s32 process_id;
    s32 player;
    s32 i;

    random = lbRandom_GetIntRange(ARRAY_COUNT(D_ovl65_80192B0C));
    gsStopCurrentProcess(0x5A);
    func_ovl2_80112668();

    process_id = D_ovl65_80192B0C[random];

    if (random == 1)
    {
        gsStopCurrentProcess(0x5A);
    }
    player_count = gBattleState->pl_count + gBattleState->cp_count;

    if (player_count < 3)
    {
        gsStopCurrentProcess(process_id);
    }
    player = gSceneData.spgame_player;

    for (i = 0; i < player_count; i++)
    {
        fighter_gobj = gBattleState->player_block[player].fighter_gobj;

        ftCommon_Appear_SetStatus(fighter_gobj);

        if (random == 2)
        {
            gsStopCurrentProcess(0x1E);
            func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom, 0.1F, 28.0F);
            gsStopCurrentProcess(process_id - 0x1E);
        }
        else gsStopCurrentProcess(process_id);

        player = gm1PGameGetNextFreePlayerPort(player);
    }
    if (random == 2)
    {
        gsStopCurrentProcess(0x1E);
        func_ovl2_8010CF20();
    }
}

// 0x8018E824
void func_ovl65_8018E824(void)
{
    GObj *fighter_gobj;
    s32 player_count;
    s32 player;
    s32 i;

    gsStopCurrentProcess(0x5A);
    func_ovl2_80112668();

    player_count = gBattleState->pl_count + gBattleState->cp_count;
    player = gSceneData.spgame_player;

    for (i = 0; i < player_count; i++)
    {
        fighter_gobj = gBattleState->player_block[player].fighter_gobj;

        if (player == gSceneData.spgame_player)
        {
            ftCommon_Appear_SetStatus(fighter_gobj);
        }
        else ftCommon_Appear_SetPosition(fighter_gobj);

        gsStopCurrentProcess(0x3C);

        player = gm1PGameGetNextFreePlayerPort(player);
    }
}

// 0x8018E8F8
void func_ovl65_8018E8F8(void)
{
    func_ovl2_8010CFA8(gBattleState->player_block[gSceneData.spgame_player].fighter_gobj, 0.0F, F_DEG_TO_RAD(-15.0F), 7000.0F, 0.3F, 31.5F);
    gsStopCurrentProcess(0x3C);
    func_ovl2_801120D4();
    ifPlayer_Damage_InitInterface();
    func_800269C0(0x1EA);
    func_ovl2_801121C4();
    omEjectGObj(NULL);
    gsStopCurrentProcess(1);
}

// 0x8018E9A4
void func_ovl65_8018E9A4(void)
{
    GObj *player_gobj;
    ftStruct *player_fp;
    ftStruct *com_fp;
    GObj *com_gobj;
    s32 player;
    Vec3f sp20;

    player_gobj = gBattleState->player_block[gSceneData.spgame_player].fighter_gobj;

    player_fp = ftGetStruct(player_gobj);

    sp20.x = 0.0F;
    sp20.y = 0.0F;
    sp20.z = 0.0F;

    func_ovl2_8010D030((void*) (((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)&D_NF_00004D48) + (intptr_t)&D_NF_00006010), 0.0F, &sp20);

    for (player = 0; TRUE; player++) // Wut da haeiyll
    {
        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not)
        {
            continue;
        }
        else if (gBattleState->player_block[player].is_rebirth_multi == FALSE)
        {
            continue;
        }
        else
        {
            com_gobj = gBattleState->player_block[player].fighter_gobj;

            break;
        }
    }
    com_fp = ftGetStruct(com_gobj);

    ftCommon_Appear_SetStatus(com_gobj);
    gsStopCurrentProcess(0x258);
    ftCommon_SetAllowPlayerControl(player_gobj);
    ftCommon_SetAllowPlayerControl(com_gobj);

    player_fp->camera_mode = 0;
    com_fp->camera_mode = 0;
    gBattleState->game_status = gmMatch_GameStatus_Go;
    gPlayerCommonInterface.is_ifmagnify_display = TRUE;

    ifPlayer_Damage_InitInterface();

    gMusicIndexDefault = 0x19;
    ftSpecialITem_BGMCheckFighters();
}

// 0x8018EADC
void gm1PGameThreadUpdate(GObj *gobj)
{
    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Link:
    case gm1PGame_Stage_Fox:
    case gm1PGame_Stage_MarioBros:
    case gm1PGame_Stage_Pikachu:
    case gm1PGame_Stage_GDonkey:
    case gm1PGame_Stage_Samus:
    case gm1PGame_Stage_Metal:
    case gm1PGame_Stage_Luigi:
    case gm1PGame_Stage_Ness:
    case gm1PGame_Stage_Purin:
    case gm1PGame_Stage_Captain:
        func_ovl65_8018E670();
        break;

    case gm1PGame_Stage_Yoshi:
    case gm1PGame_Stage_Kirby:
    case gm1PGame_Stage_Zako:
        func_ovl65_8018E824();
        break;

    case gm1PGame_Stage_Bonus3:
        func_ovl65_8018E8F8();
        break;

    case gm1PGame_Stage_Boss:
        func_ovl65_8018E9A4();
        break;
    }
    omEjectGObj(NULL);
    gsStopCurrentProcess(1);
}

// 0x8018EB68
void func_ovl65_8018EB68(void)
{
    omAddGObjCommonProc(omMakeGObjSPAfter(GObj_Kind_Interface, NULL, 0xA, 0x80000000), gm1PGameThreadUpdate, GObjProcess_Kind_OSThread, 5);
    gBattleState->game_status = gmMatch_GameStatus_Wait;
}

// 0x8018EBB8
void gmUpdate1PGameTeamStockDisplay(GObj *interface_gobj)
{
    SObj *sobj;
    s32 stock_num;
    s32 ix, iy;

    if (sGM1PGameEnemyStocksRemaining != 0)
    {
        if (sGM1PGameEnemyStocksRemaining != sGM1PGameEnemyStocksDisplay)
        {
            sGM1PGameEnemyStocksDisplay = sGM1PGameEnemyStocksRemaining;

            sobj = SObjGetStruct(interface_gobj);

            for (stock_num = sGM1PGameEnemyPlayerCount - 1, ix = iy = 0; sobj != NULL; sobj = sobj->next, stock_num--)
            {
                if ((1 << stock_num) & sGM1PGameEnemyStockSpriteFlags)
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
                    case gm1PGame_Stage_Yoshi:
                        sobj->sprite = *sGM1PGameEnemyTeamSprites->stock_spr;
                        sobj->sprite.LUT = sGM1PGameEnemyTeamSprites->stock_lut[sGM1PGameEnemyVariations[stock_num]];
                        break;

                    case gm1PGame_Stage_Kirby:
                        sobj->sprite = *sGM1PGameEnemyTeamSprites->stock_spr;
                        sobj->sprite.LUT = sGM1PGameEnemyTeamSprites->stock_lut[sGM1PGameEnemyKirbyCostume];
                        break;

                    case gm1PGame_Stage_Zako:
                        sobj->sprite = *spGetSpriteFromFile(sGM1PGameZakoStockSprite, &D_NF_00000080);
                        break;
                    }
                    sobj->sprite.attr &= ~SP_HIDDEN;
                }
            }
        }
        func_ovl0_800CCF00(interface_gobj);
    }
}

// 0x8018EE44
void func_ovl65_8018EE44(void)
{
    GObj *interface_gobj;
    ftStruct *fp;
    Sprite *sprite;
    s32 i;

    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Yoshi:
    case gm1PGame_Stage_Kirby:
        for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
        {
            if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

            else if (gBattleState->player_block[i].is_rebirth_multi == FALSE) continue;

            else
            {
                fp = ftGetStruct(gBattleState->player_block[i].fighter_gobj);

                break;
            }
        }
        sGM1PGameEnemyTeamSprites = fp->attributes->sprites;

        sprite = sGM1PGameEnemyTeamSprites->stock_spr;

        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

        goto make_gobj;

    case gm1PGame_Stage_Zako:
        sGM1PGameZakoStockSprite = rdManagerGetFileWithExternHeap((uintptr_t)&D_NF_00000019, gsMemoryAlloc(rdManagerGetFileSize((uintptr_t)&D_NF_00000019), 0x10));

        sprite = spGetSpriteFromFile(sGM1PGameZakoStockSprite, &D_NF_00000080);

        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

    make_gobj:
        interface_gobj = omMakeGObjSPAfter(GObj_Kind_Interface, NULL, 0xB, 0x80000000);

        omAddGObjRenderProc(interface_gobj, gmUpdate1PGameTeamStockDisplay, 0x17, 0x80000000, -1);

        for (i = 0; i < sGM1PGameEnemyStocksRemaining; i++)
        {
            gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(gGMCommonFiles[4], &D_NF_00000068));
        }
        sGM1PGameEnemyStocksDisplay = sGM1PGameEnemyStocksRemaining + 1;

        break;
    }
}

// 0x8018EFFC
void gmSet1PGamePlayerDefeatStats(s32 player, s32 stock_num)
{
    GObj *fighter_gobj = gBattleState->player_block[player].fighter_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);
    gm1PGameStats *enemy_stats;

    if ((player == gSceneData.spgame_player) && (gBattleState->player_block[player].stock_count == -1) && (gBattleState->game_status != gmMatch_GameStatus_End))
    {
        ifAnnounce_GameEnd_DisplayMessage();
    }
    else if (gBattleState->player_block[player].is_rebirth_multi != FALSE)
    {
        sGM1PGameEnemyStocksRemaining--;
        sGM1PGameEnemyStockSpriteFlags |= (1 << stock_num);

        enemy_stats = &sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs];

        enemy_stats->team_order = fp->team_order;
        enemy_stats->damage_status_id = fp->status_info.status_id;
        enemy_stats->damage_player = fp->damage_player;
        enemy_stats->damage_object_class = fp->damage_object_class;
        enemy_stats->damage_object_kind = fp->damage_object_kind;
        enemy_stats->damage_stat_flags = fp->damage_stat_flags;
        enemy_stats->damage_stat_count = fp->damage_stat_count;

        sGM1PGameBonusStatNumPlayerKOs++;

        if ((gSceneData.spgame_stage == gm1PGame_Stage_MarioBros) && (fp->ft_kind == Ft_Kind_Luigi) && (sGM1PGameEnemyStocksRemaining != 0) && (fp->damage_player == gSceneData.spgame_player))
        {
            if (gBattleState->player_block[(fp->player == 0) ? (GMMATCH_PLAYERS_MAX - 1) : fp->player - 1].total_damage_player[gSceneData.spgame_player] == 0)
            {
                g1PGameBonusStatBrosCalamity = TRUE; // Bros. Calamity bonus
            }
        }
        if (sGM1PGameEnemyStocksRemaining == 0)
        {
            ifAnnounce_GameEnd_DisplayMessage();
        }
    }
}

// 0x8018F1C0
void func_ovl65_8018F1C0(void)
{
    if (gSceneData.spgame_stage != gm1PGame_Stage_Bonus3)
    {
        func_ovl2_8010E2D4();
        func_ovl2_801118E4();
    }
}

// 0x8018F1F8
void func_ovl65_8018F1F8(void)
{
    if (gSceneData.spgame_stage != gm1PGame_Stage_Bonus3)
    {
        func_ovl2_80113398(func_ovl2_80114D98);
    }
    else func_ovl2_80113398(func_ovl2_80114DD4);
}

// 0x8018F240
s32 gm1PGameEnemyGetSpawnLR(s32 target_player)
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

    gm1PGameGetSpawnPosition(&target_pos, sGM1PGamePlayerSetups[target_player].mpoint_kind);

    for (current_player = 0; current_player < (ARRAY_COUNT(gBattleState->player_block) + ARRAY_COUNT(sGM1PGamePlayerSetups)) / 2; current_player++)
    {
        if (current_player == target_player) continue;

        else if (gBattleState->player_block[current_player].player_kind == Pl_Kind_Not) continue;

        else if (gBattleState->player_block[current_player].team_index != gBattleState->player_block[target_player].team_index)
        {
            gm1PGameGetSpawnPosition(&current_pos, sGM1PGamePlayerSetups[current_player].mpoint_kind);

            current_dist = (current_pos.x < target_pos.x) ? -(current_pos.x - target_pos.x) : (current_pos.x - target_pos.x);

            if (current_dist < closest_dist)
            {
                closest_dist = current_dist;

                lr_dist = (current_pos.x - target_pos.x);
            }
        }
    }
    lr = (lr_dist >= 0.0F) ? LR_Right : LR_Left;

    return lr;
}

// 0x8018F3AC
void func_ovl65_8018F3AC(void)
{
    GObj *fighter_gobj = gBattleState->player_block[gSceneData.spgame_player].fighter_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_8010CF44
    (
        fighter_gobj,
        F_DEG_TO_RAD(D_ovl65_80192808[lbRandom_GetIntRange(ARRAY_COUNT(D_ovl65_80192808))]) * fp->lr,
        F_DEG_TO_RAD(D_ovl65_80192820[lbRandom_GetIntRange(ARRAY_COUNT(D_ovl65_80192820))]),
        ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom,
        0.06F,
        28.0F
    );
    ftCommon_SetModelPartLevelDetailAll(fighter_gobj, ftParts_LOD_HighPoly);
}

// 0x8018F4B0
void gm1PGameBossSetZoomCamera(ftStruct *fp)
{
    Vec3f world_pos;
    Vec3f zoom;

    world_pos.x = world_pos.y = world_pos.z = 0.0F;

    ftParts_GetDObjWorldPosition(fp->joint[fp->damage_joint_id], &world_pos);

    sGM1PGameBossDefeatZoomPosition = world_pos;

    zoom.x = world_pos.x;
    zoom.y = world_pos.y;
    zoom.z = world_pos.z + 3000.0F;

    func_ovl2_8010D0A4(&world_pos, &zoom);
}

// 0x8018F540
void gm1PGameBossHidePlayerTagAll(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        fp->is_playertag_bossend = TRUE;

        fighter_gobj = fighter_gobj->link_next;
    }
}

// 0x8018F574
void func_ovl65_8018F574(GObj *fighter_gobj, s32 arg1)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ft_kind == Ft_Kind_MasterHand)
    {
        func_ovl2_80114968(fp);
    }
}

// 0x8018F5AC
void gm1PGameBossLockPlayerInputs(GObj *fighter_gobj, s32 arg1)
{
    ftCommon_ResetControllerInputs(fighter_gobj);
}

// 0x8018F5CC
void gm1PGameBossSetIgnorePlayerBlastzone(GObj *fighter_gobj, s32 arg1)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_ignore_blastzone = TRUE;
}

// 0x8018F5E4 - Unused?
void func_ovl65_8018F5E4(void)
{
    return;
}

// 0x8018F5EC
void func_ovl65_8018F5EC(void)
{
    func_8000AEF0(3, func_ovl65_8018F574, 0);
    func_8000AEF0(3, gm1PGameBossLockPlayerInputs, 0);
    func_8000AEF0(3, gm1PGameBossSetIgnorePlayerBlastzone, 0);
    func_8000AF58(func_ovl2_80113638, 0);

    func_8000AEF0(9, func_ovl2_8011366C, 0);
    func_ovl2_80115834();
    func_8000AEF0(0xB, func_ovl2_8011366C, 0);
    func_8000AEF0(6, func_ovl2_8011366C, 0);
    func_ovl65_801910B0();
    func_800266A0();
    func_80020A74();
    func_ovl2_8011379C();
    func_800269C0(alSound_SFX_ExplodeL);
    func_800269C0(0x1EC);
    func_800269C0(alSound_SFX_BossDefeatL);

    sGM1PGameBossDefeatSoundTerminateTemp = D_8009EDD0.sfx_max;
    D_8009EDD0.sfx_max = 0;
}

// 0x8018F6DC
void func_ovl65_8018F6DC(void)
{
    D_8009EDD0.sfx_max = sGM1PGameBossDefeatSoundTerminateTemp;
}

// 0x8018F6F0
void func_ovl65_8018F6F0(void)
{
    func_8000AF58(func_ovl2_8011366C, 0);
    gm1PGameBossSetChangeBackground();
    func_ovl2_8010D030((void*) (((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)&D_NF_00004D48) + (intptr_t)&D_NF_00006450), 0.0F, &sGM1PGameBossDefeatZoomPosition);
    func_ovl2_80114BE4();
}

// 0x8018F75C
void func_ovl65_8018F75C(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    gPlayerCommonInterface.is_ifmagnify_display = FALSE;

    gm1PGameBossHidePlayerTagAll();
    ifPlayer_Damage_StartBreakAnim(fp);
    gm1PGameBossSetZoomCamera(fp);
    func_ovl2_80114B80(func_ovl65_8018F5EC, func_ovl65_8018F6F0, 0x2B7, 90);
}

// 0x8018F7B4
void gm1PGameStageInitAll(void)
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

    gm1PGameStageSetupAll();
    func_ovl65_8018D0C0();

    if (!(gSaveData.mprotect_fail & GMSAVE_PROTECTFAIL_VSMODECASTLE) && (gSaveData.unk5E3 > 0x5C))
    {
        dma_rom_read(0xF10, spA0, ARRAY_COUNT(spA0));

        addr = rdManagerGetFileWithExternHeap((uintptr_t)&D_NF_000000C8, gsMemoryAlloc(rdManagerGetFileSize((uintptr_t)&D_NF_000000C8), 0x10));

        proc = (sb32(*)(void*)) ((uintptr_t)addr + (intptr_t)&D_NF_00000000);

        osWritebackDCache(proc, *(s32*) ((uintptr_t)addr + (intptr_t)&D_NF_00000040));
        osInvalICache(proc, *(s32*) ((uintptr_t)addr + (intptr_t)&D_NF_00000040));

        if (proc(spA0) == FALSE)
        {
            gSaveData.mprotect_fail |= GMSAVE_PROTECTFAIL_VSMODECASTLE;
        }
    }
    func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_SetMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    itManagerInitItems();
    grNodeInit_SetGroundFiles();
    func_ovl2_800D7194(2, 4);
    wpManagerAllocWeapons();
    efManager_AllocUserData();
    ifScreenFlash_InitInterfaceVars(d1PGameStageDesc[gSceneData.spgame_stage].screenflash_alpha);
    func_ovl2_801156E4();
    func_ovl3_801653E0();

    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Kirby:
        // Need to load PK Fire graphics from Ness' file
        plns = dFTManagerDataFiles[Ft_Kind_Ness];

        rdManagerGetFileWithExternHeap((uintptr_t)&D_NF_000000E6, gsMemoryAlloc(rdManagerGetFileSize((uintptr_t)&D_NF_000000E6), 0x10));
        efAlloc_SetParticleBank(plns->o_particles1, plns->o_particles2, plns->o_particles3, plns->o_particles4);
        break;

    case gm1PGame_Stage_Zako:
        for (i = Ft_Kind_PolyStart; i <= Ft_Kind_PolyEnd; i++)
        {
            ftManagerSetupDataKind(i);
        }
        largest_size = 0;

        for (i = Ft_Kind_PolyStart; i <= Ft_Kind_PolyEnd; i++)
        {
            if (largest_size < dFTManagerDataFiles[i]->anim_file_size)
            {
                largest_size = dFTManagerDataFiles[i]->anim_file_size;
            }
        }
        for (i = 0; i < (ARRAY_COUNT(gBattleState->player_block) + ARRAY_COUNT(sGM1PGamePlayerSetups)) / 2; i++)
        {
            if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

            else if (gBattleState->player_block[i].is_rebirth_multi == FALSE) continue;

            else sGM1PGamePlayerSetups[i].anim_bank = gsMemoryAlloc(largest_size, 0x10);
        }
        break;
    }
    for (i = 0; i < (ARRAY_COUNT(gBattleState->player_block) + ARRAY_COUNT(sGM1PGamePlayerSetups)) / 2; i++)
    {
        player_spawn = dFTDefaultFighterDesc;

        if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

        ftManagerSetupDataKind(gBattleState->player_block[i].character_kind);

        player_spawn.ft_kind = gBattleState->player_block[i].character_kind;

        gm1PGameGetSpawnPosition(&player_spawn.pos, sGM1PGamePlayerSetups[i].mpoint_kind);

        player_spawn.lr_spawn = gm1PGameEnemyGetSpawnLR(i);

        player_spawn.team = gBattleState->player_block[i].team_index;

        player_spawn.player = i;

        player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? ftParts_LOD_HighPoly : ftParts_LOD_LowPoly;

        player_spawn.costume = gBattleState->player_block[i].costume_index;

        player_spawn.shade = gBattleState->player_block[i].shade_index;

        player_spawn.handicap = gBattleState->player_block[i].handicap;

        player_spawn.cp_level = gBattleState->player_block[i].level;

        player_spawn.stock_count = gBattleState->player_block[i].stock_count;

        player_spawn.damage = 0;

        player_spawn.pl_kind = gBattleState->player_block[i].player_kind;

        player_spawn.controller = &gPlayerControllers[i];

        player_spawn.anim_heap = (sGM1PGamePlayerSetups[i].anim_bank != NULL) ? sGM1PGamePlayerSetups[i].anim_bank : ftManagerAllocAnimHeapKind(gBattleState->player_block[i].character_kind);

        player_spawn.copy_kind = sGM1PGamePlayerSetups[i].copy_kind;

        player_spawn.team_order = sGM1PGamePlayerSetups[i].team_order;

        player_spawn.is_skip_entry = sGM1PGamePlayerSetups[i].is_skip_entry;

        player_spawn.is_skip_magnify = sGM1PGamePlayerSetups[i].is_skip_magnify;

        fighter_gobj = ftManagerMakeFighter(&player_spawn), fp = ftGetStruct(fighter_gobj);

        ftCommon_ClearPlayerMatchStats(i, fighter_gobj);

        fp->fighter_com.trait = sGM1PGamePlayerSetups[i].cp_trait;

        fp->cam_zoom_frame *= sGM1PGamePlayerSetups[i].cam_frame_mul;
    }
    ftManagerSetupDataPlayables();
    func_ovl2_80114958();
    func_ovl65_8018F1C0();
    func_ovl2_8010E1A4();
    func_ovl2_80111440();
    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    func_ovl2_80111BE4();
    gm1PGameSetPlayerInterfacePositions();
    func_ovl2_8010F3C0();
    func_ovl2_80110514();
    func_ovl65_8018EE44();
    func_ovl65_8018EB68();

    if ((gSceneData.spgame_stage == gm1PGame_Stage_Metal) || (gSceneData.spgame_stage == gm1PGame_Stage_Zako))
    {
        mpCollision_SetMusicID();
        func_800269C0(alSound_SFX_PublicCheer1);
    }
    else
    {
        mpCollision_SetPlayMusicID();
        func_800269C0(0x272);
    }
    func_ovl65_8018F1F8();
    func_ovl2_80112F68();

    sp58 = D_ovl65_80192B14;
    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp58, 0xC, 1, 0);
}

// 0x8018FD5C
void gm1PGameAppendBonusStats(void)
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
    u8 variation_order[GM1PGAME_STAGE_MAX_VARIATIONS_COUNT]; // Full array of 12? Almost half of this goes unused, but stack suggests this is correct.
    s32 i;

    sGM1PGameStageTimeSec = I_FRAMES_TO_SEC(gBattleState->match_time_current);
    sGM1PGameTotalTimeSec = I_FRAMES_TO_SEC(sGM1PManagerTotalFrames);

    if (sGM1PGameBonusStatNumPlayerKOs != 0)
    {
        for (i = 0; i < sGM1PGameBonusStatNumPlayerKOs; i++)
        {
            if
            (
                 (sGM1PGameBonusStatEnemyStats[i].damage_player != gSceneData.spgame_player) ||
                 (sGM1PGameBonusStatEnemyStats[i].damage_status_id != ftStatus_Common_DeadUpStar) &&
                 (sGM1PGameBonusStatEnemyStats[i].damage_status_id != ftStatus_Common_DeadUpFall)
            )
            {
                goto loop_item_strike;
            }
        }
        switch (gSceneData.spgame_stage)
        {
        case gm1PGame_Stage_Yoshi:
        case gm1PGame_Stage_Kirby:
        case gm1PGame_Stage_Zako:
            gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_TRICKSTER;
            break;

        default:
            gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_STARFINISH;
            break;
        }
    }
loop_item_strike:
    is_item_strike = FALSE;

    for (i = ftStatus_AttackIndex_AttackStart; i < ARRAY_COUNT(g1PGameBonusStatDefendIDCount); i++)
    {
        if (g1PGameBonusStatDefendIDCount[i] != 0)
        {
            if ((i >= ftStatus_AttackIndex_ItemStart) && (i <= ftStatus_AttackIndex_ItemEnd) || (i == ftStatus_AttackIndex_Null))
            {
                is_item_strike = TRUE;
            }
            else goto check_item_strike;
        }
    }
    if (is_item_strike != FALSE)
    {
        // Item Strike
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_ITEMSTRIKE;
    }
check_item_strike:
    if (!(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_ITEMSTRIKE))
    {
        if (gBattleState->item_switch != 0)
        {
            if ((g1PGameBonusStatTomatoCount == 0) && (g1PGameBonusStatHeartCount == 0) && (g1PGameBonusStatStarCount == 0))
            {
                for (i = ftStatus_AttackIndex_AttackStart; i < ARRAY_COUNT(g1PGameBonusStatAttackIDCount); i++)
                {
                    if (g1PGameBonusStatAttackIDCount[i] != 0)
                    {
                        goto check_shieldbreaker;
                    }
                }
                if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Null] != 0)
                {
                    goto check_shieldbreaker;
                }
                else
                {
                    // Item Throw?
                    gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_NOITEM;

                    if (sGM1PGameBonusStatNumPlayerKOs); // Bogus, but it matches
                }
            }
        }
    }
check_shieldbreaker:
    if (g1PGameBonusStatShieldBreaker != FALSE)
    {
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_SHIELDBREAKER;
    }
    if ((g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_ThrowF] != 0) || (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_ThrowB] != 0))
    {
        for (i = ftStatus_AttackIndex_AttackStart; i < ARRAY_COUNT(g1PGameBonusStatDefendIDCount); i++)
        {
            if ((i != ftStatus_AttackIndex_ThrowF) && (i != ftStatus_AttackIndex_ThrowB) && (g1PGameBonusStatDefendIDCount[i] != 0))
            {
                goto check_hawk;
            }
        }
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_JUDOWARRIOR;
    }
check_hawk:
    if ((g1PGameBonusStatDefendGroundAirCount[GA_Air] != 0) && (g1PGameBonusStatDefendGroundAirCount[GA_Ground] == 0))
    {
        // Hawk
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_HAWK;
    }

    if ((g1PGameBonusStatDefendIsProjectileCount[TRUE] != 0) && (g1PGameBonusStatDefendIsProjectileCount[FALSE] == 0))
    {
        // Shooter
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_SHOOTER;
    }
    for (i = ftStatus_AttackIndex_AttackStart; i < ftStatus_AttackIndex_JabStart; i++)
    {
        if (g1PGameBonusStatDefendIDCount[i] != 0)
        {
            continue;
        }
        else goto check_itemthrow;
    }
    switch (gSceneData.ft_kind)
    {
    case Ft_Kind_Mario:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack13] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case Ft_Kind_Fox:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack100] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case Ft_Kind_Donkey:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case Ft_Kind_Samus:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] != 0)
        {
            break;
        }
        goto check_itemthrow;

    case Ft_Kind_Luigi:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack13] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case Ft_Kind_Link:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack13] == 0)
        {
            goto check_itemthrow;
        }
        else if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack100] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case Ft_Kind_Yoshi:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case Ft_Kind_Captain:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack13] == 0)
        {
            goto check_itemthrow;
        }
        else if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack100] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case Ft_Kind_Kirby:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] == 0)
        {
            goto check_itemthrow;
        }
        else if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack100] != 0)
        {
            break;
        }
        else goto check_itemthrow;

    case Ft_Kind_Purin:
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] != 0)
        {
            break;
        }
        goto check_itemthrow;

    case Ft_Kind_Ness:
        // This should also check Attack13, as Ness has a 3-hit jab.
        if (g1PGameBonusStatDefendIDCount[ftStatus_AttackIndex_Attack12] != 0)
        {
            break;
        }
        goto check_itemthrow;
    }
    // All Variations
    gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_ALLVARIATIONS;

check_itemthrow:
    is_thrown_item = FALSE;

    for (i = ftStatus_AttackIndex_AttackStart; i < ARRAY_COUNT(g1PGameBonusStatDefendIDCount); i++)
    {
        if (g1PGameBonusStatDefendIDCount[i] != 0)
        {
            if (i == ftStatus_AttackIndex_Hammer)
            {
                is_thrown_item = TRUE;
            }
            else goto check_smash;
        }
    }
    if (is_thrown_item != FALSE)
    {
        // Item Throw; why is this checking for Hammer usage?
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_ITEMTHROW;
    }
check_smash:
    if ((g1PGameBonusStatDefendIsSmashCount[TRUE] != 0) && (g1PGameBonusStatDefendIsSmashCount[FALSE] == 0))
    {
        // Smash Mania
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_SMASHMANIA;
    }

    if ((g1PGameBonusStatDefendIsSmashCount[TRUE] == 0) && (g1PGameBonusStatDefendIsSmashCount[FALSE] != 0))
    {
        // Smash-less
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_SMASHLESS;
    }
    special_count = 0;

    for (i = ftStatus_AttackIndex_AttackStart; i < ARRAY_COUNT(g1PGameBonusStatDefendIDCount); i++)
    {
        if (g1PGameBonusStatDefendIDCount[i] != 0)
        {
            if ((i >= ftStatus_AttackIndex_SpecialStart) && (i <= ftStatus_AttackIndex_SpecialEnd))
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
            gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_SINGLEMOVE;
        }
        else
        {
            // Special Move
            gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_SPECIALMOVE;
        }
    }
check_heavy_damage:
    if (gBattleState->player_block[gSceneData.spgame_player].stock_damage_all >= 200)
    {
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_HEAVYDAMAGE;
    }
    if (sGM1PGameStageTimeSec <= 30)
    {
        // Speedster
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_SPEEDSTER;
    }
    if (gBattleState->player_block[gSceneData.spgame_player].total_damage_dealt == 0)
    {
        // Pacifist
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_PACIFIST;
    }
    if (sGM1PManagerTotalFalls == 0)
    {
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_NOMISS;
    }
    if ((gBattleState->player_block[gSceneData.spgame_player].falls == 0) && (gBattleState->player_block[gSceneData.spgame_player].total_damage_all == 0))
    {
        // No Damage?
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_NODAMAGE;
    }
    if (gBattleState->player_block[gSceneData.spgame_player].stock_damage_all == 0)
    {
        // Full Power?
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_FULLPOWER;
    }
    if (sGM1PGameBonusStatInvincibleTimer != 0)
    {
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_STARCLEAR;
    }
    if (g1PGameBonusStatTomatoCount >= 3)
    {
        // Vegetarian
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_VEGETARIAN;
    }
    if (g1PGameBonusStatHeartCount >= 3)
    {
        // Heartthrob
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_HEARTTHROB;
    }
    if (g1PGameBonusStatMewCatcher != FALSE)
    {
        // Mew Catcher
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_MEWCATCHER;
    }
    if
    (
        (sGM1PGameBonusStatNumPlayerKOs != 0) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_player == gSceneData.spgame_player) &&
        (
            (
                (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_class == ftHitlog_ObjectClass_Item) &&
                (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind >= It_Kind_MbMonsterStart) &&
                (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind <= It_Kind_MbMonsterEnd)
            )
            ||
            (
                (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_class == ftHitlog_ObjectClass_Weapon) &&
                (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind >= Wp_Kind_MonsterStart) &&
                (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind <= Wp_Kind_MonsterEnd)
            )
        )
    )
    {
        // Pok�mon Finish
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_POKEMONFINISH;
    }
    if
    (
        (sGM1PGameBonusStatNumPlayerKOs != 0) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_player == gSceneData.spgame_player) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_class == ftHitlog_ObjectClass_Item) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == It_Kind_MSBomb) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_stat_flags.stat_attack_id == ftStatus_AttackIndex_Null)
    )
    {
        // Booby Trap
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_BOOBYTRAP;
    }
    if
    (
        (sGM1PGameBonusStatNumPlayerKOs != 0) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_player == gSceneData.spgame_player) &&
        (
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_stat_flags.stat_attack_id == ftStatus_AttackIndex_ThrowF) ||
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_stat_flags.stat_attack_id == ftStatus_AttackIndex_ThrowB)
        )
    )
    {
        // Throw Down
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_THROWDOWN;
    }
    if (sGM1PGameBonusStatEndPlayerStatus == ftStatus_Common_Appeal)
    {
        // Fighter Stance
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_FIGHTERSTANCE;
    }
    if ((sGM1PGameBonusStatEndPlayerStatus == ftStatus_Common_DeadDown) || (sGM1PGameBonusStatEndPlayerStatus == ftStatus_Common_DeadLeftRight))
    {
        // Mystic
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_MYSTIC;
    }
    if (sGM1PGameBonusStatEndPlayerStatus == ftStatus_Common_DeadUpStar)
    {
        // Comet Mystic
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_COMETMYSTIC;
    }
    if
    (
        (sGM1PGameBonusStatNumPlayerKOs != 0) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_player != -1) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_class == ftHitlog_ObjectClass_Ground) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == gmHitEnvironment_Kind_Acid)
    )
    {
        // Acid Clear
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_ACIDCLEAR;
    }
    if
    (
        (
            (sGM1PGameBonusStatNumPlayerKOs != 0) &&
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_player != -1) &&
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_class == ftHitlog_ObjectClass_Item) &&
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == It_Kind_GBumper)
        )
        ||
        (
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_player == gSceneData.spgame_player) &&
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_class == ftHitlog_ObjectClass_Item) &&
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == It_Kind_NBumper)
        )
    )
    {
        // Bumper Clear
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_BUMPERCLEAR;
    }

    if
    (
        (sGM1PGameBonusStatNumPlayerKOs != 0) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_player != -1) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_class == ftHitlog_ObjectClass_Ground) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == gmHitEnvironment_Kind_Twister)
    )
    {
        // Twister Clear
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_TORNADOCLEAR;
    }
    if
    (
        (sGM1PGameBonusStatNumPlayerKOs != 0) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_player != -1) &&
        (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_class == ftHitlog_ObjectClass_Weapon) &&
        (
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == Wp_Kind_ArwingLaser2D) ||
            (sGM1PGameBonusStatEnemyStats[sGM1PGameBonusStatNumPlayerKOs - 1].damage_object_kind == Wp_Kind_ArwingLaser3D)
        )
    )
    {
        // Arwing Clear
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_ARWINGCLEAR;
    }
    if ((gBattleState->time_limit != GMMATCH_TIMELIMIT_INFINITE) && (gSceneData.spgame_time_seconds == 1))
    {
        // Last Second
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_LASTSECOND;
    }
    if ((gBattleState->time_limit != GMMATCH_TIMELIMIT_INFINITE) && (gSceneData.spgame_time_seconds == 213))
    {
        // Lucky 3
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_LUCKY3;
    }
    damage_jackpot_bak = gBattleState->player_block[gSceneData.spgame_player].stock_damage_all;

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
    else if (damage_jackpot_mod / 10 != 0)
    {
        if ((damage_jackpot_mod - ((damage_jackpot_mod / 10) * 10)) == (damage_jackpot_mod / 10))
        {
            is_jackpot = TRUE;
        }
    }
    if (is_jackpot != FALSE)
    {
        // Jackpot
        gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_JACKPOT;
    }
    if ((gSceneData.spgame_stage == gm1PGame_Stage_Yoshi) && (sGM1PGameEnemyStocksRemaining == 0))
    {
        is_ordered_variation = TRUE;

        for (i = 0; i < GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i++)
        {
            variation_order[i] = sGM1PGameEnemyVariations[sGM1PGameBonusStatEnemyStats[i].team_order];
        }
        for (variation = 0; i < sGM1PGameBonusStatNumPlayerKOs; i++, variation = (variation == (GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT - 1)) ? 0 : variation++)
        {
            if (sGM1PGameEnemyVariations[sGM1PGameBonusStatEnemyStats[i].team_order] != variation_order[variation])
            {
                is_ordered_variation = FALSE;
            }
        }
        if (is_ordered_variation != FALSE)
        {
            // Yoshi Rainbow
            gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_YOSHIRAINBOW;
        }
    }
    if ((gSceneData.spgame_stage == gm1PGame_Stage_Kirby) && (sGM1PGameEnemyStocksRemaining == 0))
    {
        is_ordered_variation = TRUE;

        for (i = 0; i < GM1PGAME_STAGE_KIRBY_VARIATIONS_COUNT; i++)
        {
            if (d1PGameKirbyTeamCopyIDs[sGM1PGameBonusStatEnemyStats[i].team_order] != d1PGameKirbyTeamCopyIDs[i])
            {
                is_ordered_variation = FALSE;
            }
        }
        if (is_ordered_variation != FALSE)
        {
            // Kirby Ranks
            gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_KIRBYRANKS;
        }
    }
    if (gSceneData.spgame_stage == gm1PGame_Stage_MarioBros)
    {
        if (gBattleState->player_block[gSceneData.cpu_port[0]].falls == 0)
        {
            if (gBattleState->player_block[gSceneData.cpu_port[0]].total_damage_all == 0)
            {
                // True Friend
                gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_TRUEFRIEND;
            }
            else
            {
                // Good Friend
                gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_GOODFRIEND;
            }
        }
        if (g1PGameBonusStatBrosCalamity != FALSE)
        {
            // Bros. Calamity
            gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_BROSCALAMITY;
        }
    }
    if ((gSceneData.spgame_stage == gm1PGame_Stage_GDonkey) && (gBattleState->player_block[gSceneData.cpu_port[0]].falls == 0) && (gBattleState->player_block[gSceneData.cpu_port[1]].falls == 0))
    {
        if ((gBattleState->player_block[gSceneData.cpu_port[0]].total_damage_all == 0) && (gBattleState->player_block[gSceneData.cpu_port[1]].total_damage_all == 0))
        {
            // DK Perfect
            gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_DKPERFECT;
        }
        else
        {
            // DK Defender
            gSceneData.bonus_get_mask[1] |= GM1PGAME_BONUS_MASK1_DKDEFENDER;
        }
    }
    if (gSceneData.spgame_stage == gm1PGame_Stage_Boss)
    {
        gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_GAMECLEAR;

        if (sGM1PManagerTotalFalls == 0)
        {
            // No Miss Clear
            gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_NOMISSCLEAR;
        }
        if (sGM1PManagerTotalDamageTaken == 0)
        {
            // No Damage Clear
            gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_NODAMAGECLEAR;
        }
        if (sGM1PGameTotalTimeSec <= I_MIN_TO_SEC(8))
        {
            // Speed Demon
            gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_SPEEDDEMON;
        }
        else if (sGM1PGameTotalTimeSec <= I_MIN_TO_SEC(12)) // 12 minutes? Wiki claims this should be 20 minutes
        {
            // Speed King
            gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_SPEEDKING;
        }
    }
    if
    (
        !(gSceneData.bonus_get_mask[1] & GM1PGAME_BONUS_MASK1_SINGLEMOVE)   &&
        !(gSceneData.bonus_get_mask[1] & GM1PGAME_BONUS_MASK1_SPECIALMOVE)  &&
        !(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_HAWK)         &&
        !(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_JUDOWARRIOR)  &&
        !(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_SHOOTER)      &&
        !(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_ALLVARIATIONS)&&
        !(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_ITEMSTRIKE)   &&
        !(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_TRICKSTER)    &&
        !(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_ITEMTHROW)    &&
        !(gSceneData.bonus_get_mask[0] & GM1PGAME_BONUS_MASK0_PACIFIST)     &&
        !(gSceneData.bonus_get_mask[1] & GM1PGAME_BONUS_MASK1_SMASHMANIA)
    )
    {
        attack_count = 0;

        for (i = ftStatus_AttackIndex_AttackStart; i < ARRAY_COUNT(g1PGameBonusStatAttackIDCount); i++)
        {
            attack_count += g1PGameBonusStatAttackIDCount[i];
        }
        if (attack_count != 0)
        {
            for (i = ftStatus_AttackIndex_AttackStart; i < ARRAY_COUNT(g1PGameBonusStatAttackIDCount); i++)
            {
                if ((g1PGameBonusStatAttackIDCount[i] / (f32)attack_count) >= F_PCT_TO_DEC(35.0F))
                {
                    // Cheap Shot
                    gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_CHEAPSHOT;

                    break;
                }
            }
        }
    }
}

// 0x80190E58
void gm1PGameSetBonusStats(void)
{
    gSceneData.bonus_get_mask[0] = gSceneData.bonus_get_mask[1] = gSceneData.bonus_tasks_complete = 0;

    gSceneData.spgame_time_seconds = (gBattleState->time_limit == GMMATCH_TIMELIMIT_INFINITE) ? 0 : I_FRAMES_TO_SEC(gBattleState->match_time_remain + 59);

    sGM1PManagerTotalFrames += gBattleState->match_time_current;
    sGM1PManagerTotalFalls += gBattleState->player_block[gSceneData.spgame_player].falls;
    sGM1PManagerTotalDamageTaken += gBattleState->player_block[gSceneData.spgame_player].total_damage_all;

    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Bonus3:
        if ((gBattleState->player_block[gSceneData.spgame_player].falls == 0) && (gSceneData.spgame_time_seconds != 0) && (gBattleState->player_block[gSceneData.spgame_player].total_damage_all == 0))
        {
            gSceneData.bonus_get_mask[0] |= GM1PGAME_BONUS_MASK0_NODAMAGE;
        }
        break;

    default:
        gSceneData.spgame_score += gBattleState->player_block[gSceneData.spgame_player].score * 1000;
        gm1PGameAppendBonusStats();
        break;
    }
}

// 0x80190F8C
void func_ovl65_80190F8C(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(display_list, gMPLightAngleX, gMPLightAngleY);
}

// 0x80190FD8
void sc1PGameStartScene(void)
{
    gBattleState = &D_800A4B18;
    gBattleState->game_type = gmMatch_GameType_1PGame;

    D_ovl65_80192B18.unk_scdatabounds_0xC = (void*)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl65_80192B18);
    D_ovl65_80192B34.arena_size = (u32) ((uintptr_t)&lOverlay65ArenaHi - (uintptr_t)&lOverlay65ArenaLo);
    D_ovl65_80192B34.proc_start = gm1PGameStageInitAll;
    func_800A2698(&D_ovl65_80192B34);
    gm1PGameSetBonusStats();
    func_80020A74();

    while (func_80020D58(0) != FALSE)
    {
        continue;
    }
    func_80020B38(0, 0x7800);
    func_800266A0();
    func_ovl2_801157EC();
}
