#include <ft/fighter.h>
#include <gm/battle.h>

u16 dFtPublicityChantFighterFGMs[Ft_Kind_EnumMax];

// 0x8018CF90
s32 sFtPublicityCommonFramesSince;              // Frames passed since last audience reaction

// 0x8018CF94
u32 sFtPublicityCommonPlayerNum;                // Can go beyond actual max player num? Also, either this...

// 0x8018CF98
f32 sFtPublicityCommonKnockback;                // Last knockback value that prompted audience reaction?

// 0x8018CF9C
alSoundEffect *sFtPublicityCommonALSound;       // Current common reaction sound struct

// 0x8018CFA0
u16 sFtPublicityCommonOrder;                    // Current common reaction's sound effect number

// 0x8018CFA4
sb32 sFtPublicityChantIsInterrupt;              // If TRUE, stop player's crowd chant

// 0x8018CFA8
s32 sFtPublicityChantWait;                      // Wait this much before new audience cheer can occur?

// 0x8018CFAC
s32 sFtPublicityChantPlayerNum;                 // Or this is u32 and the other s32, not entirely sure which

// 0x8018CFB0
alSoundEffect *sFtPublicityChantALSound;        // Fighter's chant sound struct

// 0x8018CFB4
u16 sFtPublicityChantOrder;                     // Current chant's sound effect number

// 0x8018CFB8
s32 sFtPublicityChantCount;                     // Number of times fighter's name has been chanted

// 0x8018CFBC
u32 sFtPublicityChantID;                        // Sound effect ID of audience chant for fighter

// 0x8018CFC0
s32 sFtPublicityPlayersDown;                    // Number of players too close to the bottom blast zone

// 0x8018CFC4
u16 sFtPublicityDefeatedVoiceIDs[10];           // Array of announcer voices to play for when a player is defeated  

// 0x8018CFD8
// s32 D_ovl3_8018CFD8                          // Might be required padding? Not sure

// 0x8018CFDC
u32 sFtPublicityDefeatedQueueCurrent;           // Current array index to play from queued "<player> defeated" announcement voice IDs

// 0x8018CFE0
u32 sFtPublicityDefeatedQueueEnd;               // Last array index of queued "<player> defeated" announcement voice IDs

// 0x8018CFE4
alSoundEffect *sFtPublicityDefeatedALSound;     // "<player> defeated" announcement voice sound struct

// 0x8018CFE8
u16 sFtPublicityDefeatedCurrentOrder;           // Current "<player> defeated" announcement's sound effect number

// 0x80164AB0
sb32 ftPublicityChantTryStart(GObj *gobj, f32 knockback, s32 player_number)
{
    ftStruct *fp;
    GObj *fighter_gobj = ftCommon_GetPlayerNumGObj(player_number);
    u16 sfx_id;

    if (fighter_gobj == NULL)
    {
        return FALSE;
    }
    else if ((ftGetStruct(fighter_gobj)->percent_damage < 100) || (sFtPublicityChantWait < 1200))
    {
        return FALSE;
    }
    else if (player_number == sFtPublicityChantPlayerNum)
    {
        return FALSE;
    }
    else sFtPublicityChantID = dFtPublicityChantFighterFGMs[ftGetStruct(fighter_gobj)->ft_kind];

    if (sFtPublicityChantID == 0x2B7)
    {
        return FALSE;
    }
    if (sFtPublicityChantALSound != NULL)
    {
        sfx_id = sFtPublicityChantALSound->sfx_id;

        if ((sfx_id != 0) && (sfx_id == sFtPublicityChantOrder))
        {
            func_80026738(sFtPublicityChantALSound);
        }
    }
    sFtPublicityChantALSound = func_800269C0((knockback >= 160.0F) ? 0x26A : 0x26B);

    if (sFtPublicityChantALSound != NULL)
    {
        sFtPublicityChantOrder = sFtPublicityChantALSound->sfx_id;
        sFtPublicityChantPlayerNum = player_number;
        sFtPublicityChantCount = 0;

        return TRUE;
    }
    return FALSE;
}

// 0x80164C18
void ftPublicityChantTryInterrupt(void)
{
    if ((sFtPublicityChantCount < 9) && (sFtPublicityChantCount >= 3))
    {
        sFtPublicityChantIsInterrupt = TRUE;
    }
}

// 0x80164C44
void ftPublicityCommonPlay(u16 new_sfx)
{
    if (sFtPublicityCommonALSound != NULL)
    {
        u16 current_sfx = sFtPublicityCommonALSound->sfx_id;

        if ((current_sfx != 0) && (current_sfx == sFtPublicityCommonOrder))
        {
            func_80026738(sFtPublicityCommonALSound);
        }
    }
    sFtPublicityCommonALSound = func_800269C0(new_sfx);

    if (sFtPublicityCommonALSound != NULL)
    {
        sFtPublicityCommonOrder = sFtPublicityCommonALSound->sfx_id;
    }
}

// 0x80164CBC
void ftPublicityCommonStop(void)
{
    if (sFtPublicityCommonALSound != NULL)
    {
        u16 sfx_id = sFtPublicityCommonALSound->sfx_id;

        if ((sfx_id != 0) && (sfx_id == sFtPublicityCommonOrder))
        {
            func_80026738(sFtPublicityCommonALSound);
        }
    }
}

// 0x80164D08
void ftPublicityChantDecide(GObj *gobj, s32 player_num, f32 knockback)
{
    if (knockback >= 130.0F)
    {
        if (ftPublicityChantTryStart(gobj, knockback, player_num) != FALSE)
        {
            ftPublicityCommonStop();
            return;
        }
        else if (knockback >= 160.0F)
        {
            ftPublicityChantTryInterrupt();
            ftPublicityCommonPlay(0x26A);
            return;
        }
        else if (player_num == sFtPublicityChantPlayerNum)
        {
            ftPublicityChantTryInterrupt();
        }
        ftPublicityCommonPlay(0x26B);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicityCommonPlay(0x26C);
    }
}

// 0x80164DED4
void ftPublicityCommonDecide(GObj *fighter_gobj, s32 player_number, f32 knockback, sb32 is_force_current_knockback)
{
    if (is_force_current_knockback != FALSE)
    {
        ftPublicityChantDecide(fighter_gobj, player_number, knockback);
    }
    else if ((player_number == sFtPublicityCommonPlayerNum) && (sFtPublicityCommonFramesSince < 60))
    {
        ftPublicityChantDecide(fighter_gobj, player_number, (knockback > sFtPublicityCommonKnockback) ? knockback : sFtPublicityCommonKnockback);
    }
    else if (knockback >= 160.0F)
    {
        ftPublicityChantTryInterrupt();
        ftPublicityCommonPlay(0x26E);
    }
    else if (knockback >= 130.0F)
    {
        if (player_number == sFtPublicityChantPlayerNum)
        {
            ftPublicityChantTryInterrupt();
        }
        ftPublicityCommonPlay(0x26F);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicityCommonPlay(0x271);
    }
    sFtPublicityCommonFramesSince = 0;
    sFtPublicityCommonPlayerNum = player_number;
    sFtPublicityCommonKnockback = knockback;
}

// 0x80164F2C
void ftPublicityCommonCheck(GObj *fighter_gobj, f32 knockback, sb32 is_force_current_knockback)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (knockback >= 100.0F) // Check if knockback is over 100 units
    {
        ftPublicityCommonDecide(fighter_gobj, fp->damage_player_number, knockback, is_force_current_knockback); // Play crowd SFX
    }
}

// 0x80164F70
void ftPublicityKnockbackDecide(GObj *fighter_gobj, f32 knockback)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (sFtPublicityChantPlayerNum == fp->player_number)
    {
        ftPublicityChantTryInterrupt();
    }
    if (knockback >= 160.0F)
    {
        ftPublicityCommonPlay(0x267);
    }
    else if (knockback >= 130.0F)
    {
        ftPublicityCommonPlay(0x268);
    }
    else if (knockback >= 100.0F)
    {
        ftPublicityCommonPlay(0x269);
    }
}

// 0x80165024
void ftPublicityDownDecide(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 pos_y = fp->joint[ftParts_Joint_TopN]->translate.vec.f.y;

    if ((pos_y >= gMapEdgeBounds.d2.bottom) || (pos_y < -2400.0F))
    {
        return;
    }
    else if (pos_y >= -300.0F)
    {
        ftPublicityCommonPlay(0x267);
    }
    else if (pos_y >= -900.0F)
    {
        ftPublicityCommonPlay(0x268);
    }
    else ftPublicityCommonPlay(0x269);

    if (sFtPublicityChantPlayerNum == fp->player_number)
    {
        ftPublicityChantTryInterrupt();
    }
}

// 0x801650F8
void ftPublicityDefeatedAddID(u16 sfx_id)
{
    sFtPublicityDefeatedVoiceIDs[sFtPublicityDefeatedQueueEnd] = sfx_id;

    sFtPublicityDefeatedQueueEnd++;

    if (sFtPublicityDefeatedQueueEnd == ARRAY_COUNT(sFtPublicityDefeatedVoiceIDs))
    {
        sFtPublicityDefeatedQueueEnd = 0;
    }
}

// 0x80165134
void ftPublicityProcUpdate(GObj *public_gobj)
{
    s32 players_down_bak;
    s32 unused[2];
    GObj *down_gobj;
    GObj *fighter_gobj;

    if (sFtPublicityCommonFramesSince < (U16_MAX + 1))
    {
        sFtPublicityCommonFramesSince++;
    }
    players_down_bak = sFtPublicityPlayersDown;
    sFtPublicityPlayersDown = 0;
    fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    down_gobj = NULL;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (!(gBattleState->match_rules & GMMATCH_GAMERULE_STOCK) || (fp->stock_count != -1))
        {
            if (DObjGetStruct(gobj)->translate.vec.f.y < (gMapEdgeBounds.d2.bottom - 100.0F)) // 0x80131308 = stage data?
            {
                sFtPublicityPlayersDown++;
            }
            else down_gobj = fighter_gobj;
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    if ((players_down_bak < 3) && (sFtPublicityPlayersDown >= 3))
    {
        ftPublicityCommonPlay(0x267);

        if ((down_gobj != NULL) && (sFtPublicityChantPlayerNum == ftGetStruct(down_gobj)->player_number))
        {
            ftPublicityChantTryInterrupt();
        }
    }
    if (sFtPublicityChantCount < 9)
    {
        if ((sFtPublicityChantALSound == NULL) || (sFtPublicityChantALSound->sfx_id == 0) || (sFtPublicityChantALSound->sfx_id != sFtPublicityChantOrder))
        {
            sFtPublicityChantCount++;

            if (sFtPublicityChantCount < 9)
            {
                if (sFtPublicityChantIsInterrupt != FALSE)
                {
                    sFtPublicityChantIsInterrupt = FALSE;
                    sFtPublicityChantWait = 0;
                    sFtPublicityChantCount = 9;
                }
                else
                {
                    sFtPublicityChantALSound = func_800269C0(sFtPublicityChantID);

                    if (sFtPublicityChantALSound != NULL)
                    {
                        sFtPublicityChantOrder = sFtPublicityChantALSound->sfx_id;
                    }
                }
            }
            else
            {
                sFtPublicityChantWait = 0;

                ftPublicityCommonPlay(0x26A);
            }
        }
    }
    else if (sFtPublicityChantWait < 1200)
    {
        sFtPublicityChantWait++;
    }
    if (sFtPublicityDefeatedQueueCurrent != sFtPublicityDefeatedQueueEnd)
    {
        if ((sFtPublicityDefeatedALSound == NULL) || (sFtPublicityDefeatedCurrentOrder == 0) || (sFtPublicityDefeatedALSound->sfx_id != sFtPublicityDefeatedCurrentOrder))
        {
            sFtPublicityDefeatedALSound = func_800269C0(sFtPublicityDefeatedVoiceIDs[sFtPublicityDefeatedQueueCurrent]);

            if (sFtPublicityDefeatedALSound != NULL)
            {
                sFtPublicityDefeatedCurrentOrder = sFtPublicityDefeatedALSound->sfx_id;
            }
            else sFtPublicityDefeatedCurrentOrder = 0;

            sFtPublicityDefeatedQueueCurrent++;

            if (sFtPublicityDefeatedQueueCurrent == ARRAY_COUNT(sFtPublicityDefeatedVoiceIDs))
            {
                sFtPublicityDefeatedQueueCurrent = 0;
            }
        }
    }
}

// 0x801653E0
GObj* ftPublicitySetup(void)
{
    GObj *public_gobj = omAddGObjCommonProc(omMakeGObjCommon(GObj_Kind_Publicity, NULL, 0xD, GOBJ_LINKORDER_DEFAULT), ftPublicityProcUpdate, 1, 0);

    sFtPublicityCommonFramesSince = U16_MAX + 1;
    sFtPublicityCommonPlayerNum = -1;
    sFtPublicityCommonKnockback = 0.0F;
    sFtPublicityCommonALSound = NULL;
    sFtPublicityCommonOrder = 0;
    sFtPublicityChantIsInterrupt = 0;
    sFtPublicityChantWait = 1200;
    sFtPublicityChantPlayerNum = -1;
    sFtPublicityChantCount = 9;
    sFtPublicityPlayersDown = 0;
    sFtPublicityDefeatedALSound = NULL;
    sFtPublicityDefeatedCurrentOrder = 0;
    sFtPublicityDefeatedQueueCurrent = sFtPublicityDefeatedQueueEnd = 0;

    return public_gobj;
}