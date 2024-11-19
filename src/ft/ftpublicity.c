#include <ft/fighter.h>
#include <sc/scene.h>

extern alSoundEffect* func_800269C0_275C0(u16);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018CF90
s32 sFTPublicityCommonFramesSince;              // Frames passed since last audience reaction

// 0x8018CF94
u32 sFTPublicityCommonPlayerNum;                // Can go beyond actual max player num? Also, either this...

// 0x8018CF98
f32 sFTPublicityCommonKnockback;                // Last knockback value that prompted audience reaction?

// 0x8018CF9C
alSoundEffect *sFTPublicityCommonALSound;       // Current common reaction sound struct

// 0x8018CFA0
u16 sFTPublicityCommonOrder;                    // Current common reaction's sound effect number

// 0x8018CFA4
sb32 sFTPublicityCallIsInterrupt;              // If TRUE, stop player's crowd chant

// 0x8018CFA8
s32 sFTPublicityCallWait;                      // Wait this much before new audience cheer can occur?

// 0x8018CFAC
s32 sFTPublicityCallPlayerNum;                 // ...or this is u32 and the other s32, not entirely sure which

// 0x8018CFB0
alSoundEffect *sFTPublicityCallALSound;        // Fighter's chant sound struct

// 0x8018CFB4
u16 sFTPublicityCallOrder;                     // Current chant's sound effect number

// 0x8018CFB8
s32 sFTPublicityCallCount;                     // Number of times fighter's name has been chanted

// 0x8018CFBC
u32 sFTPublicityCallID;                        // Sound effect ID of audience chant for fighter

// 0x8018CFC0
s32 sFTPublicityPlayersDown;                    // Number of players too close to the bottom blast zone

// 0x8018CFC4
// s32 D_ovl3_8018CFC4;                         // Might be required padding? Not sure

// 0x8018CFC8                       
u16 sFTPublicityDefeatedVoiceIDs[10];           // Array of announcer voices to play for when a player is defeated  

// 0x8018CFDC
u32 sFTPublicityDefeatedQueueCurrent;           // Current array index to play from queued "<player> defeated" announcement voice IDs

// 0x8018CFE0
u32 sFTPublicityDefeatedQueueEnd;               // Last array index of queued "<player> defeated" announcement voice IDs

// 0x8018CFE4
alSoundEffect *sFTPublicityDefeatedALSound;     // "<player> defeated" announcement voice sound struct

// 0x8018CFE8
u16 sFTPublicityDefeatedCurrentOrder;           // Current "<player> defeated" announcement's sound effect number

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80164AB0
sb32 ftPublicityTryStartCall(GObj *gobj, f32 knockback, s32 player_number)
{
    FTStruct *fp;
    GObj *fighter_gobj = ftParamGetPlayerNumGObj(player_number);
    u16 sfx_id;

    if (fighter_gobj == NULL)
    {
        return FALSE;
    }
    else if ((ftGetStruct(fighter_gobj)->percent_damage < 100) || (sFTPublicityCallWait < 1200))
    {
        return FALSE;
    }
    else if (player_number == sFTPublicityCallPlayerNum)
    {
        return FALSE;
    }
    else sFTPublicityCallID = dFTCommonDataPublicityFighterCallFGMs[ftGetStruct(fighter_gobj)->fkind];

    if (sFTPublicityCallID == nSYAudioFGMVoiceEnd)
    {
        return FALSE;
    }
    if (sFTPublicityCallALSound != NULL)
    {
        sfx_id = sFTPublicityCallALSound->sfx_id;

        if ((sfx_id != 0) && (sfx_id == sFTPublicityCallOrder))
        {
            func_80026738_27338(sFTPublicityCallALSound);
        }
    }
    sFTPublicityCallALSound = func_800269C0_275C0((knockback >= 160.0F) ? nSYAudioVoicePublicityCheer : nSYAudioVoicePublicityAmazed);

    if (sFTPublicityCallALSound != NULL)
    {
        sFTPublicityCallOrder = sFTPublicityCallALSound->sfx_id;
        sFTPublicityCallPlayerNum = player_number;
        sFTPublicityCallCount = 0;

        return TRUE;
    }
    return FALSE;
}

// 0x80164C18
void ftPublicityTryInterruptCall(void)
{
    if ((sFTPublicityCallCount < 9) && (sFTPublicityCallCount >= 3))
    {
        sFTPublicityCallIsInterrupt = TRUE;
    }
}

// 0x80164C44
void ftPublicityPlayCommon(u16 new_sfx)
{
    if (sFTPublicityCommonALSound != NULL)
    {
        u16 current_sfx = sFTPublicityCommonALSound->sfx_id;

        if ((current_sfx != 0) && (current_sfx == sFTPublicityCommonOrder))
        {
            func_80026738_27338(sFTPublicityCommonALSound);
        }
    }
    sFTPublicityCommonALSound = func_800269C0_275C0(new_sfx);

    if (sFTPublicityCommonALSound != NULL)
    {
        sFTPublicityCommonOrder = sFTPublicityCommonALSound->sfx_id;
    }
}

// 0x80164CBC
void ftPublicityCommonStop(void)
{
    if (sFTPublicityCommonALSound != NULL)
    {
        u16 sfx_id = sFTPublicityCommonALSound->sfx_id;

        if ((sfx_id != 0) && (sfx_id == sFTPublicityCommonOrder))
        {
            func_80026738_27338(sFTPublicityCommonALSound);
        }
    }
}

// 0x80164D08
void ftPublicityDecideCall(GObj *gobj, s32 player_num, f32 knockback)
{
    if (knockback >= 130.0F)
    {
        if (ftPublicityTryStartCall(gobj, knockback, player_num) != FALSE)
        {
            ftPublicityCommonStop();
            return;
        }
        else if (knockback >= 160.0F)
        {
            ftPublicityTryInterruptCall();
            ftPublicityPlayCommon(nSYAudioVoicePublicityCheer);
            return;
        }
        else if (player_num == sFTPublicityCallPlayerNum)
        {
            ftPublicityTryInterruptCall();
        }
        ftPublicityPlayCommon(nSYAudioVoicePublicityAmazed);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicityPlayCommon(nSYAudioVoicePublicityGaspClap);
    }
}

// 0x80164DED4
void ftPublicityDecideCommon(GObj *fighter_gobj, s32 player_number, f32 knockback, sb32 is_force_curr_knockback)
{
    if (is_force_curr_knockback != FALSE)
    {
        ftPublicityDecideCall(fighter_gobj, player_number, knockback);
    }
    else if ((player_number == sFTPublicityCommonPlayerNum) && (sFTPublicityCommonFramesSince < 60))
    {
        ftPublicityDecideCall(fighter_gobj, player_number, (knockback > sFTPublicityCommonKnockback) ? knockback : sFTPublicityCommonKnockback);
    }
    else if (knockback >= 160.0F)
    {
        ftPublicityTryInterruptCall();
        ftPublicityPlayCommon(nSYAudioVoicePublicityDamageL);
    }
    else if (knockback >= 130.0F)
    {
        if (player_number == sFTPublicityCallPlayerNum)
        {
            ftPublicityTryInterruptCall();
        }
        ftPublicityPlayCommon(nSYAudioVoicePublicityDamageM);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicityPlayCommon(nSYAudioVoicePublicityDamageS);
    }
    sFTPublicityCommonFramesSince = 0;
    sFTPublicityCommonPlayerNum = player_number;
    sFTPublicityCommonKnockback = knockback;
}

// 0x80164F2C
void ftPublicityCommonCheck(GObj *fighter_gobj, f32 knockback, sb32 is_force_curr_knockback)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (knockback >= 100.0F) // Check if knockback is over 100 units
    {
        ftPublicityDecideCommon(fighter_gobj, fp->damage_player_number, knockback, is_force_curr_knockback); // Play crowd SFX
    }
}

// 0x80164F70 - Play audience gasp when fighter successfully recovers
void ftPublicityPlayCliffReact(GObj *fighter_gobj, f32 knockback)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (sFTPublicityCallPlayerNum == fp->player_number)
    {
        ftPublicityTryInterruptCall();
    }
    if (knockback >= 160.0F)
    {
        ftPublicityPlayCommon(nSYAudioVoicePublicityGaspL);
    }
    else if (knockback >= 130.0F)
    {
        ftPublicityPlayCommon(nSYAudioVoicePublicityGaspM);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicityPlayCommon(nSYAudioVoicePublicityGaspS);
    }
}

// 0x80165024
void ftPublicityTryPlayFallSpecialReact(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    f32 pos_y = fp->joints[nFTPartsJointTopN]->translate.vec.f.y;

    if ((pos_y >= gMPCollisionEdgeBounds.d2.bottom) || (pos_y < -2400.0F))
    {
        return;
    }
    else if (pos_y >= -300.0F)
    {
        ftPublicityPlayCommon(nSYAudioVoicePublicityGaspL);
    }
    else if (pos_y >= -900.0F)
    {
        ftPublicityPlayCommon(nSYAudioVoicePublicityGaspM);
    }
    else ftPublicityPlayCommon(nSYAudioVoicePublicityGaspS);

    if (sFTPublicityCallPlayerNum == fp->player_number)
    {
        ftPublicityTryInterruptCall();
    }
}

// 0x801650F8
void ftPublicityDefeatedAddID(u16 sfx_id)
{
    sFTPublicityDefeatedVoiceIDs[sFTPublicityDefeatedQueueEnd] = sfx_id;

    sFTPublicityDefeatedQueueEnd++;

    if (sFTPublicityDefeatedQueueEnd == ARRAY_COUNT(sFTPublicityDefeatedVoiceIDs))
    {
        sFTPublicityDefeatedQueueEnd = 0;
    }
}

// 0x80165134
void ftPublicityProcUpdate(GObj *public_gobj)
{
    s32 players_down_bak;
    s32 unused[2];
    GObj *down_gobj;
    GObj *fighter_gobj;

    if (sFTPublicityCommonFramesSince < (U16_MAX + 1))
    {
        sFTPublicityCommonFramesSince++;
    }
    players_down_bak = sFTPublicityPlayersDown;
    sFTPublicityPlayersDown = 0;
    fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];

    down_gobj = NULL;

    while (fighter_gobj != NULL)
    {
        FTStruct *fp = ftGetStruct(fighter_gobj);

        if (!(gSCManagerBattleState->game_rules & SCBATTLE_GAMERULE_STOCK) || (fp->stock_count != -1))
        {
            if (DObjGetStruct(fighter_gobj)->translate.vec.f.y < (gMPCollisionEdgeBounds.d2.bottom - 100.0F)) // 0x80131308 = stage data?
            {
                sFTPublicityPlayersDown++;
            }
            else down_gobj = fighter_gobj;
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    if ((players_down_bak < 3) && (sFTPublicityPlayersDown >= 3))
    {
        ftPublicityPlayCommon(nSYAudioVoicePublicityGaspL);

        if ((down_gobj != NULL) && (sFTPublicityCallPlayerNum == ftGetStruct(down_gobj)->player_number))
        {
            ftPublicityTryInterruptCall();
        }
    }
    if (sFTPublicityCallCount < 9)
    {
        if ((sFTPublicityCallALSound == NULL) || (sFTPublicityCallALSound->sfx_id == 0) || (sFTPublicityCallALSound->sfx_id != sFTPublicityCallOrder))
        {
            sFTPublicityCallCount++;

            if (sFTPublicityCallCount < 9)
            {
                if (sFTPublicityCallIsInterrupt != FALSE)
                {
                    sFTPublicityCallIsInterrupt = FALSE;
                    sFTPublicityCallWait = 0;
                    sFTPublicityCallCount = 9;
                }
                else
                {
                    sFTPublicityCallALSound = func_800269C0_275C0(sFTPublicityCallID);

                    if (sFTPublicityCallALSound != NULL)
                    {
                        sFTPublicityCallOrder = sFTPublicityCallALSound->sfx_id;
                    }
                }
            }
            else
            {
                sFTPublicityCallWait = 0;

                ftPublicityPlayCommon(nSYAudioVoicePublicityCheer);
            }
        }
    }
    else if (sFTPublicityCallWait < 1200)
    {
        sFTPublicityCallWait++;
    }
    if (sFTPublicityDefeatedQueueCurrent != sFTPublicityDefeatedQueueEnd)
    {
        if ((sFTPublicityDefeatedALSound == NULL) || (sFTPublicityDefeatedCurrentOrder == 0) || (sFTPublicityDefeatedALSound->sfx_id != sFTPublicityDefeatedCurrentOrder))
        {
            sFTPublicityDefeatedALSound = func_800269C0_275C0(sFTPublicityDefeatedVoiceIDs[sFTPublicityDefeatedQueueCurrent]);

            if (sFTPublicityDefeatedALSound != NULL)
            {
                sFTPublicityDefeatedCurrentOrder = sFTPublicityDefeatedALSound->sfx_id;
            }
            else sFTPublicityDefeatedCurrentOrder = 0;

            sFTPublicityDefeatedQueueCurrent++;

            if (sFTPublicityDefeatedQueueCurrent == ARRAY_COUNT(sFTPublicityDefeatedVoiceIDs))
            {
                sFTPublicityDefeatedQueueCurrent = 0;
            }
        }
    }
}

// 0x801653E0
void ftPublicityMakeActor(void)
{
    gcAddGObjProcess
    (
        gcMakeGObjSPAfter(nGCCommonKindPublicity, NULL, 0xD, GOBJ_PRIORITY_DEFAULT), 
        ftPublicityProcUpdate, 
        nGCProcessKindFunc, 
        0
    );
    sFTPublicityCommonFramesSince = U16_MAX + 1;
    sFTPublicityCommonPlayerNum = -1;
    sFTPublicityCommonKnockback = 0.0F;
    sFTPublicityCommonALSound = NULL;
    sFTPublicityCommonOrder = 0;
    sFTPublicityCallIsInterrupt = 0;
    sFTPublicityCallWait = 1200;
    sFTPublicityCallPlayerNum = -1;
    sFTPublicityCallCount = 9;
    sFTPublicityPlayersDown = 0;
    sFTPublicityDefeatedALSound = NULL;
    sFTPublicityDefeatedCurrentOrder = 0;
    sFTPublicityDefeatedQueueCurrent = sFTPublicityDefeatedQueueEnd = 0;
}
