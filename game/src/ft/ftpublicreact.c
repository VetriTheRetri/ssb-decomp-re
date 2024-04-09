#include <ft/fighter.h>
#include <gm/battle.h>

u16 dFtPublicReactChantFighterFGMs[Ft_Kind_EnumMax];

// 0x8018CF90
s32 sFtPublicReactCommonFramesSince;            // Frames passed since last audience reaction

// 0x8018CF94
u32 sFtPublicReactCommonPlayerNum;              // Can go beyond actual max player num? Also, either this...

// 0x8018CF98
f32 sFtPublicReactCommonKnockback;              // Last knockback value that prompted audience reaction?

// 0x8018CF9C
alSoundEffect *sFtPublicReactCommonALSound;     // Current common reaction sound struct

// 0x8018CFA0
u16 sFtPublicReactCommonOrder;                  // Current common reaction's sound effect number

// 0x8018CFA4
sb32 sFtPublicReactChantIsInterrupt;            // If TRUE, stop player's crowd chant

// 0x8018CFA8
s32 sFtPublicReactChantWait;                    // Wait this much before new audience cheer can occur?

// 0x8018CFAC
s32 sFtPublicReactChantPlayerNum;               // Or this is u32 and the other s32, not entirely sure which

// 0x8018CFB0
alSoundEffect *sFtPublicReactChantALSound;      // Fighter's chant sound struct

// 0x8018CFB4
u16 sFtPublicReactChantOrder;                   // Current chant's sound effect number

// 0x8018CFB8
s32 sFtPublicReactChantCount;                   // Number of times fighter's name has been chanted

// 0x8018CFBC
u32 sFtPublicReactChantID;                      // Sound effect ID of audience chant for fighter

// 0x8018CFC0
s32 sFtPublicReactPlayersDown;                  // Number of players too close to the bottom blast zone

// 0x8018CFC4
u16 sFtPublicReactDefeatedVoiceIDs[10];         // Array of announcer voices to play for when a player is defeated  

// 0x8018CFD8
// s32 D_ovl3_8018CFD8                          // Might be required padding? Not sure

// 0x8018CFDC
u32 sFtPublicReactDefeatedQueueCurrent;         // Current array index to play from queued "<player> defeated" announcement voice IDs

// 0x8018CFE0
u32 sFtPublicReactDefeatedQueueEnd;             // Last array index of queued "<player> defeated" announcement voice IDs

// 0x8018CFE4
alSoundEffect *sFtPublicReactDefeatedALSound;   // "<player> defeated" announcement voice sound struct

// 0x8018CFE8
u16 sFtPublicReactDefeatedCurrentOrder;         // Current "<player> defeated" announcement's sound effect number

// 0x80164AB0
sb32 ftPublicReactChantTryStart(GObj *gobj, f32 knockback, s32 player_number)
{
    ftStruct *fp;
    GObj *fighter_gobj = ftCommon_GetPlayerNumGObj(player_number);
    u16 sfx_id;

    if (fighter_gobj == NULL)
    {
        return FALSE;
    }
    else if ((ftGetStruct(fighter_gobj)->percent_damage < 100) || (sFtPublicReactChantWait < 1200))
    {
        return FALSE;
    }
    else if (player_number == sFtPublicReactChantPlayerNum)
    {
        return FALSE;
    }
    else sFtPublicReactChantID = dFtPublicReactChantFighterFGMs[ftGetStruct(fighter_gobj)->ft_kind];

    if (sFtPublicReactChantID == 0x2B7)
    {
        return FALSE;
    }
    if (sFtPublicReactChantALSound != NULL)
    {
        sfx_id = sFtPublicReactChantALSound->sfx_id;

        if ((sfx_id != 0) && (sfx_id == sFtPublicReactChantOrder))
        {
            func_80026738(sFtPublicReactChantALSound);
        }
    }
    sFtPublicReactChantALSound = func_800269C0((knockback >= 160.0F) ? 0x26A : 0x26B);

    if (sFtPublicReactChantALSound != NULL)
    {
        sFtPublicReactChantOrder = sFtPublicReactChantALSound->sfx_id;
        sFtPublicReactChantPlayerNum = player_number;
        sFtPublicReactChantCount = 0;

        return TRUE;
    }
    return FALSE;
}

// 0x80164C18
void ftPublicReactChantTryInterrupt(void)
{
    if ((sFtPublicReactChantCount < 9) && (sFtPublicReactChantCount >= 3))
    {
        sFtPublicReactChantIsInterrupt = TRUE;
    }
}

// 0x80164C44
void ftPublicReactCommonPlay(u16 new_sfx)
{
    if (sFtPublicReactCommonALSound != NULL)
    {
        u16 current_sfx = sFtPublicReactCommonALSound->sfx_id;

        if ((current_sfx != 0) && (current_sfx == sFtPublicReactCommonOrder))
        {
            func_80026738(sFtPublicReactCommonALSound);
        }
    }
    sFtPublicReactCommonALSound = func_800269C0(new_sfx);

    if (sFtPublicReactCommonALSound != NULL)
    {
        sFtPublicReactCommonOrder = sFtPublicReactCommonALSound->sfx_id;
    }
}

// 0x80164CBC
void ftPublicReactCommonStop(void)
{
    if (sFtPublicReactCommonALSound != NULL)
    {
        u16 sfx_id = sFtPublicReactCommonALSound->sfx_id;

        if ((sfx_id != 0) && (sfx_id == sFtPublicReactCommonOrder))
        {
            func_80026738(sFtPublicReactCommonALSound);
        }
    }
}

// 0x80164D08
void ftPublicReactChantDecide(GObj *gobj, s32 player_num, f32 knockback)
{
    if (knockback >= 130.0F)
    {
        if (ftPublicReactChantTryStart(gobj, knockback, player_num) != FALSE)
        {
            ftPublicReactCommonStop();
            return;
        }
        else if (knockback >= 160.0F)
        {
            ftPublicReactChantTryInterrupt();
            ftPublicReactCommonPlay(0x26A);
            return;
        }
        else if (player_num == sFtPublicReactChantPlayerNum)
        {
            ftPublicReactChantTryInterrupt();
        }
        ftPublicReactCommonPlay(0x26B);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicReactCommonPlay(0x26C);
    }
}

// 0x80164DED4
void ftPublicReactCommonDecide(GObj *fighter_gobj, s32 player_number, f32 knockback, sb32 is_force_current_knockback)
{
    if (is_force_current_knockback != FALSE)
    {
        ftPublicReactChantDecide(fighter_gobj, player_number, knockback);
    }
    else if ((player_number == sFtPublicReactCommonPlayerNum) && (sFtPublicReactCommonFramesSince < 60))
    {
        ftPublicReactChantDecide(fighter_gobj, player_number, (knockback > sFtPublicReactCommonKnockback) ? knockback : sFtPublicReactCommonKnockback);
    }
    else if (knockback >= 160.0F)
    {
        ftPublicReactChantTryInterrupt();
        ftPublicReactCommonPlay(0x26E);
    }
    else if (knockback >= 130.0F)
    {
        if (player_number == sFtPublicReactChantPlayerNum)
        {
            ftPublicReactChantTryInterrupt();
        }
        ftPublicReactCommonPlay(0x26F);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicReactCommonPlay(0x271);
    }
    sFtPublicReactCommonFramesSince = 0;
    sFtPublicReactCommonPlayerNum = player_number;
    sFtPublicReactCommonKnockback = knockback;
}

// 0x80164F2C
void ftPublicReactCommonCheck(GObj *fighter_gobj, f32 knockback, sb32 is_force_current_knockback)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (knockback >= 100.0F) // Check if knockback is over 100 units
    {
        ftPublicReactCommonDecide(fighter_gobj, fp->damage_player_number, knockback, is_force_current_knockback); // Play crowd SFX
    }
}

// 0x80164F70
void ftPublicReactKnockbackDecide(GObj *fighter_gobj, f32 knockback)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (sFtPublicReactChantPlayerNum == fp->player_number)
    {
        ftPublicReactChantTryInterrupt();
    }
    if (knockback >= 160.0F)
    {
        ftPublicReactCommonPlay(0x267);
    }
    else if (knockback >= 130.0F)
    {
        ftPublicReactCommonPlay(0x268);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicReactCommonPlay(0x269);
    }
}

// 0x80165024
void ftPublicReactDownDecide(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 pos_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

    if ((pos_y >= gMapEdgeBounds.d2.bottom) || (pos_y < -2400.0F))
    {
        return;
    }
    else if (pos_y >= -300.0F)
    {
        ftPublicReactCommonPlay(0x267);
    }
    else if (pos_y >= -900.0F)
    {
        ftPublicReactCommonPlay(0x268);
    }
    else ftPublicReactCommonPlay(0x269);
    
    if (sFtPublicReactChantPlayerNum == fp->player_number)
    {
        ftPublicReactChantTryInterrupt();
    }
}

// 0x801650F8
void ftPublicReactDefeatedAddID(u16 sfx_id)
{
    sFtPublicReactDefeatedVoiceIDs[sFtPublicReactDefeatedQueueEnd] = sfx_id;

    sFtPublicReactDefeatedQueueEnd++;

    if (sFtPublicReactDefeatedQueueEnd == ARRAY_COUNT(sFtPublicReactDefeatedVoiceIDs))
    {
        sFtPublicReactDefeatedQueueEnd = 0;
    }
}

// 0x80165134
void ftPublicReactProcUpdate(GObj *public_gobj)
{
    s32 players_down_bak;
    s32 unused[2];
    GObj *down_gobj;
    GObj *fighter_gobj;

    if (sFtPublicReactCommonFramesSince < (U16_MAX + 1))
    {
        sFtPublicReactCommonFramesSince++;
    }
    players_down_bak = sFtPublicReactPlayersDown;
    sFtPublicReactPlayersDown = 0;
    fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    down_gobj = NULL;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (!(gBattleState->match_rules & GMMATCH_GAMERULE_STOCK) || (fp->stock_count != -1))
        {
            if (DObjGetStruct(gobj)->translate.vec.f.y < (gMapEdgeBounds.d2.bottom - 100.0F)) // 0x80131308 = stage data?
            {
                sFtPublicReactPlayersDown++;
            }
            else down_gobj = fighter_gobj;
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    if ((players_down_bak < 3) && (sFtPublicReactPlayersDown >= 3))
    {
        ftPublicReactCommonPlay(0x267);

        if ((down_gobj != NULL) && (sFtPublicReactChantPlayerNum == ftGetStruct(down_gobj)->player_number))
        {
            ftPublicReactChantTryInterrupt();
        }
    }
    if (sFtPublicReactChantCount < 9)
    {
        if ((sFtPublicReactChantALSound == NULL) || (sFtPublicReactChantALSound->sfx_id == 0) || (sFtPublicReactChantALSound->sfx_id != sFtPublicReactChantOrder))
        {
            sFtPublicReactChantCount++;

            if (sFtPublicReactChantCount < 9)
            {
                if (sFtPublicReactChantIsInterrupt != FALSE)
                {
                    sFtPublicReactChantIsInterrupt = FALSE;
                    sFtPublicReactChantWait = 0;
                    sFtPublicReactChantCount = 9;
                }
                else
                {
                    sFtPublicReactChantALSound = func_800269C0(sFtPublicReactChantID);

                    if (sFtPublicReactChantALSound != NULL)
                    {
                        sFtPublicReactChantOrder = sFtPublicReactChantALSound->sfx_id;
                    }
                }
            }
            else
            {
                sFtPublicReactChantWait = 0;

                ftPublicReactCommonPlay(0x26A);
            }
        }
    }
    else if (sFtPublicReactChantWait < 1200)
    {
        sFtPublicReactChantWait++;
    }
    if (sFtPublicReactDefeatedQueueCurrent != sFtPublicReactDefeatedQueueEnd)
    {
        if ((sFtPublicReactDefeatedALSound == NULL) || (sFtPublicReactDefeatedCurrentOrder == 0) || (sFtPublicReactDefeatedALSound->sfx_id != sFtPublicReactDefeatedCurrentOrder))
        {
            sFtPublicReactDefeatedALSound = func_800269C0(sFtPublicReactDefeatedVoiceIDs[sFtPublicReactDefeatedQueueCurrent]);

            if (sFtPublicReactDefeatedALSound != NULL)
            {
                sFtPublicReactDefeatedCurrentOrder = sFtPublicReactDefeatedALSound->sfx_id;
            }
            else sFtPublicReactDefeatedCurrentOrder = 0;
            
            sFtPublicReactDefeatedQueueCurrent++;

            if (sFtPublicReactDefeatedQueueCurrent == ARRAY_COUNT(sFtPublicReactDefeatedVoiceIDs))
            {
                sFtPublicReactDefeatedQueueCurrent = 0;
            }
        }
    }
}

// 0x801653E0
GObj* ftPublicReactSetup(void)
{
    GObj *public_gobj = omAddGObjCommonProc(omMakeGObjCommon(GObj_Kind_Publicity, NULL, 0xD, 0x80000000), ftPublicReactProcUpdate, 1, 0);

    sFtPublicReactCommonFramesSince = U16_MAX + 1;
    sFtPublicReactCommonPlayerNum = -1;
    sFtPublicReactCommonKnockback = 0.0F;
    sFtPublicReactCommonALSound = NULL;
    sFtPublicReactCommonOrder = 0;
    sFtPublicReactChantIsInterrupt = 0;
    sFtPublicReactChantWait = 1200;
    sFtPublicReactChantPlayerNum = -1;
    sFtPublicReactChantCount = 9;
    sFtPublicReactPlayersDown = 0;
    sFtPublicReactDefeatedALSound = NULL;
    sFtPublicReactDefeatedCurrentOrder = 0;
    sFtPublicReactDefeatedQueueCurrent = sFtPublicReactDefeatedQueueEnd = 0;

    return public_gobj;
}
