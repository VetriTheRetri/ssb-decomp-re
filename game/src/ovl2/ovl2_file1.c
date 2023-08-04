#include <gm/gmmatch.h>
#include "ground.h"
#include <ft/fighter.h>

s32 func_ovl2_800D6490(u16 arg0)
{
    s32 var_v1;
    s32 i;

    for (i = 0, var_v1 = 0; i < 16; i++, arg0 = arg0 >> 1)
    {
        if (arg0 & 1)
        {
            var_v1++;
        }
    }
    return var_v1;
}

s32 func_ovl2_800D6508(u16 arg0, u16 arg1, s32 arg2)
{
    s32 var_v1 = -1;

    arg2++;

    do
    {
        var_v1++;

        if ((arg0 & (1 << var_v1)) && !(arg1 & (1 << var_v1)))
        {
            arg2--;
        }
    } 
    while (arg2 != 0);

    return var_v1;
}

s32 func_ovl2_800D6554(u16 arg0, s32 arg1)
{
    s32 var_v1 = -1;

    arg1++;

    do
    {
        var_v1++;

        if (arg0 & (1 << var_v1))
        {
            arg1--;
        }
    }
    while (arg1 != 0);

    return var_v1;
}

extern u32 g1PGameTimeTotal; // Static (.bss); Total time taken to complete 1P Game (in frames);

void func_ovl2_800D6590(void)
{
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_NESS) && (gSaveData.spgame_difficulty >= gmMatch_Difficulty_Normal) && (gSceneData.continues_used == 0) && (gSaveData.spgame_stock_count < 3))
    {
        gSceneData.scene_queue = gmSceneIndex_Challenger_Ness;
        return;
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_CAPTAIN) && (g1PGameTimeTotal < 43200)) // Captain Falcon's unlock criteria is 12 minutes instead of 20???
    {
        gSceneData.scene_queue = gmSceneIndex_Challenger_Captain;
        return;
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_PURIN))
    {
        gSceneData.scene_queue = gmSceneIndex_Challenger_Purin;
        return;
    }
}

bool32 func_ovl2_800D6630(void)
{
    s32 ft_index;
    u16 bonus_record_count;

    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_SOUNDTEST))
    {
        for (ft_index = 0, bonus_record_count = 0; ft_index < ARRAY_COUNT(gSaveData.spgame_records); ft_index++)
        {
            if (gSaveData.spgame_records[ft_index].bonus1_task_count == 10) // Check if fighter has broken all targets
            {
                bonus_record_count |= (1 << ft_index);
            }
        }
        if ((bonus_record_count & GMSAVEINFO_CHARACTER_MASK_ALL) == GMSAVEINFO_CHARACTER_MASK_ALL)
        {
            for (ft_index = 0, bonus_record_count = 0; ft_index < ARRAY_COUNT(gSaveData.spgame_records); ft_index++)
            {
                if (gSaveData.spgame_records[ft_index].bonus2_task_count == 10) // Check if fighter has boarded all platforms
                {
                    bonus_record_count |= (1 << ft_index);
                }
            }

            if ((bonus_record_count & GMSAVEINFO_CHARACTER_MASK_ALL) == GMSAVEINFO_CHARACTER_MASK_ALL)
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void func_ovl2_800D6738(s32 arg0)
{
    s32 is_write_data = FALSE;

    if (gSaveData.spgame_records[gSceneData.ft_kind].spgame_hiscore < gSceneData.spgame_score)
    {
        gSaveData.spgame_records[gSceneData.ft_kind].spgame_hiscore   = gSceneData.spgame_score;
        gSaveData.spgame_records[gSceneData.ft_kind].spgame_continues = gSceneData.continues_used;
        gSaveData.spgame_records[gSceneData.ft_kind].spgame_bonuses   = gSceneData.bonuses;

        if (arg0 != 0)
        {
            gSaveData.spgame_records[gSceneData.ft_kind].spgame_best_difficulty = gSaveData.spgame_difficulty + 1;
        }
        else gSaveData.spgame_records[gSceneData.ft_kind].spgame_best_difficulty = 0;

        is_write_data = TRUE;
    }
    if ((gSaveData.spgame_records[gSceneData.ft_kind].spgame_complete == FALSE) && (arg0 != 0))
    {
        gSaveData.spgame_records[gSceneData.ft_kind].spgame_complete = TRUE;

        is_write_data = TRUE;
    }
    if (is_write_data != FALSE)
    {
        lbMemory_SaveData_WriteSRAM();
    }
}

extern struct gmSceneInfo D_800A3F80;
extern gmMatchInfo D_800A4B18;
extern struct Overlay D_ovl2_80116BF0;
extern struct Overlay D_ovl2_80116C14;
extern struct Overlay D_ovl2_80116C38;
extern struct Overlay D_ovl2_80116C5C;
extern struct Overlay D_ovl2_80116C80;
extern struct Overlay D_ovl2_80116CA4;
extern struct Overlay D_ovl2_80116CC8;
extern struct Overlay D_ovl2_80116CEC;
extern struct Overlay D_ovl2_80116D10;
extern struct Overlay D_ovl2_80116D34;
extern struct Overlay D_ovl2_80116D58;
extern u32 D_ovl2_80116D74[2];
extern struct Overlay D_ovl2_80116D7C;
extern u32 D_ovl2_80116D84[7];
extern u8 D_ovl2_80116DA0[];
extern u8 D_ovl2_80130D60;
extern s32 D_ovl2_80130D68;
extern s32 D_ovl2_80130D6C;
extern s32 D_ovl2_80130D70;
extern u8 D_ovl2_80130D74;
extern u8 D_ovl2_80130D75;
extern u8 D_ovl2_80130D76;

void func_ovl2_800D67DC(void)
{
    s32 i, j;
    u16 temp_s1;
    s32 bonus_stat_count;
    bool32 is_player_lose;
    u16 spgame_characters_complete;
    u32 bonus_stat_mask;
    s32 temp_v0;
    s32 player_port;
    s32 scene_queue;

    D_ovl2_80130D60 = gSceneData.scene_previous;

    D_800A4B18.is_team_battle = TRUE;
    D_800A4B18.match_rules = (GMMATCH_GAMERULE_1PGAME | GMMATCH_GAMERULE_TIME);
    D_800A4B18.damage_ratio = 100;
    D_800A4B18.is_display_score = FALSE;
    D_800A4B18.is_ignore_teamshadow = TRUE;

    if (gSaveData.mprotect_fail & GMSAVE_PROTECTFAIL_1PGAMEMARIO)
    {
        gSceneData.ft_kind = Ft_Kind_Mario;
        gSceneData.costume_index = 0;
    }
    D_800A4B18.player_block[gSceneData.player_port].handicap = 9;
    D_800A4B18.player_block[gSceneData.player_port].player_kind = 0;
    D_800A4B18.player_block[gSceneData.player_port].team_index = 0;
    D_800A4B18.player_block[gSceneData.player_port].shade_index = 0;
    D_800A4B18.player_block[gSceneData.player_port].unk_0x8 = gSceneData.player_port;
    D_800A4B18.player_block[gSceneData.player_port].unk_0xA = gSceneData.player_port;
    D_800A4B18.player_block[gSceneData.player_port].character_kind = gSceneData.ft_kind;
    D_800A4B18.player_block[gSceneData.player_port].costume_index = gSceneData.costume_index;
    D_800A4B18.player_block[gSceneData.player_port].stock_count = gSaveData.spgame_stock_count;
    D_800A4B18.player_block[gSceneData.player_port].is_rebirth_multi = FALSE;

    gSceneData.spgame_score = 0;
    gSceneData.continues_used = 0;
    gSceneData.bonuses = 0;

    g1PGameTimeTotal = 0;

    D_ovl2_80130D68 = 0;
    D_ovl2_80130D6C = 0;
    D_ovl2_80130D70 = 0;
    D_ovl2_80130D74 = 2;

    player_port = gSceneData.player_port;

    for (i = 0; i < ARRAY_COUNT(gSceneData.cpu_port); i++)
    {
        if (player_port == (GMMATCH_PLAYERS_MAX - 1))
        {
            player_port = 0;
        }
        else player_port++;

        gSceneData.cpu_port[i] = player_port;
    }
    if (gSceneData.scene_queue >= 0xE)
    {
        goto block_45;
    }
    else
    {
        while (gSceneData.scene_queue < 0xE)
        {
            u32 ignore_mask = ~GMSAVEINFO_CHARACTER_MASK_UNLOCK;

            temp_s1 = (gSaveData.unk458 | (GMSAVEINFO_CHARACTER_MASK_ALL & ignore_mask)) & ~(1 << gSceneData.ft_kind);

            is_player_lose = FALSE;

            switch (gSceneData.scene_queue)
            {
            case 4:
                temp_s1 &= ~1;

                D_800A4B18.player_block[gSceneData.cpu_port[0]].character_kind = func_ovl2_800D6508(temp_s1, 0, lbRandom_GetIntRange(func_ovl2_800D6490(temp_s1)));

                if (D_800A4B18.player_block[gSceneData.cpu_port[0]].character_kind == Ft_Kind_Luigi)
                {
                    D_800A4B18.player_block[gSceneData.cpu_port[0]].costume_index = func_ovl2_800EC0EC(Ft_Kind_Luigi, 1);
                }
                else D_800A4B18.player_block[gSceneData.cpu_port[0]].costume_index = 0;

                D_800A4B18.player_block[gSceneData.cpu_port[0]].shade_index = 0;
                break;

            case 6:
                temp_v0 = func_ovl2_800D6490(temp_s1);

                D_800A4B18.player_block[gSceneData.cpu_port[0]].character_kind = func_ovl2_800D6508(temp_s1, 0, lbRandom_GetIntRange(temp_v0));
                D_800A4B18.player_block[gSceneData.cpu_port[0]].costume_index = 0;
                D_800A4B18.player_block[gSceneData.cpu_port[0]].shade_index = 0;

                D_800A4B18.player_block[gSceneData.cpu_port[1]].character_kind = func_ovl2_800D6508(temp_s1, (1 << D_800A4B18.player_block[gSceneData.cpu_port[0]].character_kind), lbRandom_GetIntRange(temp_v0 - 1));
                D_800A4B18.player_block[gSceneData.cpu_port[1]].costume_index = 0;
                D_800A4B18.player_block[gSceneData.cpu_port[1]].shade_index = 0;
                break;

            case 8:
                temp_s1 = (gSaveData.unk458 | gmSaveChrMask(Ft_Kind_Kirby));

                D_ovl2_80130D75 = func_ovl2_800D6554(temp_s1, lbRandom_GetIntRange(func_ovl2_800D6490(temp_s1)));

                D_ovl2_80130D76 = D_ovl2_80116DA0[D_ovl2_80130D75];
                break;
            }
            load_overlay(&D_ovl2_80116BF0);
            load_overlay(&D_ovl2_80116C14);

            gSceneData.scene_previous = 0x34;
            gSceneData.scene_current = 0xE;

            classic_map_entry();

            switch (gSceneData.scene_queue)
            {
            case 3:
            case 7:
                load_overlay(&D_ovl2_80116D34);
                load_overlay(&D_ovl2_80116D58);

                gSceneData.scene_previous = 0x34;
                gSceneData.scene_current = 0x35;

                bonus_game_play_entry();
                break;

            default:
                load_overlay(&D_ovl2_80116D34);
                load_overlay(&D_ovl2_80116D10);
                overlay_set62_entry();

                if ((gSceneData.scene_queue != 0xB) && ((D_800A4B18.player_block[gSceneData.player_port].stock_count == -1) || (D_800A4B18.match_time_remain <= 0)))
                {
                    is_player_lose = TRUE;
                }
                break;
            }
            if (gSceneData.unk12 != FALSE)
            {
                gSceneData.scene_previous = 0x34;
                gSceneData.scene_current = 8;

                return;
            }
            if (is_player_lose != FALSE)
            {
                load_overlay(&D_ovl2_80116BF0);
                load_overlay(&D_ovl2_80116D7C);
                overlay_set49_entry();

                if (gSceneData.is_select_continue != FALSE)
                {
                    gSceneData.continues_used++;

                    D_800A4B18.player_block[gSceneData.player_port].stock_count = gSaveData.spgame_stock_count;

                    gSceneData.scene_queue--;
                    D_ovl2_80130D74--;


                    if (!(D_ovl2_80130D74))
                    {
                        D_ovl2_80130D74 = 2;

                        D_ovl2_80130D70++;

                        if (D_ovl2_80130D70 > 9)
                        {
                            D_ovl2_80130D70 = 9;
                        }
                    }
                }
                else
                {
                    func_ovl2_800D6738(0);

                    gSceneData.scene_previous = 0x34;
                    gSceneData.scene_current = 0x1B;

                    return;
                }
            }
            else
            {
                D_ovl2_80130D70 = 0;
                D_ovl2_80130D74 = 2;
                bonus_stat_count = 0;

                for (i = 0; i < ARRAY_COUNT(gSceneData.bonus_get_mask); i++)
                {
                    bonus_stat_mask = gSceneData.bonus_get_mask[i];

                    for (j = 0; j < 32; j++, bonus_stat_mask >>= 1)
                    {
                        if (bonus_stat_mask & 1)
                        {
                            bonus_stat_count++;
                        }
                    }
                }
                gSceneData.bonuses += bonus_stat_count;

                load_overlay(&D_ovl2_80116BF0);
                load_overlay(&D_ovl2_80116C38);

                gSceneData.scene_previous = 0x34;
                gSceneData.scene_current = 0x33;

                overlay_set50_51_entry();
            }
            gSceneData.scene_queue++;
        }
        func_ovl2_800D6738(1);
        load_overlay(&D_ovl2_80116BF0);
        load_overlay(&D_ovl2_80116C80);

        gSceneData.scene_previous = 0x34;
        gSceneData.scene_current = 0x30;

        overlay_set48_entry();
        load_overlay(&D_ovl2_80116CEC);

        gSceneData.scene_previous = 0x34;
        gSceneData.scene_current = 0x38;

        func_unkmulti_801351B8();
        load_overlay(&D_ovl2_80116CC8);

        gSceneData.scene_previous = 0x34;
        gSceneData.scene_current = 0x37;

        func_unkmulti_8013200C();

        gSceneData.scene_queue--;

        func_ovl2_800D6590();
    }
block_45:
    if (gSceneData.scene_queue >= 0xE)
    {
        gSceneData.unk09 = D_ovl2_80116D74[(s32)gSceneData.scene_queue];

        load_overlay(&D_ovl2_80116BF0);
        load_overlay(&D_ovl2_80116C5C);

        gSceneData.scene_previous = 0x34;
        gSceneData.scene_current = 0xD;

        overlay_set13_entry();

        D_800A4B18.player_block[gSceneData.player_port].stock_count = 0;

        load_overlay(&D_ovl2_80116D34);
        load_overlay(&D_ovl2_80116D10);
        overlay_set62_entry();

        if (gSceneData.unk12 != FALSE)
        {
            gSceneData.scene_previous = 0x34;
            gSceneData.scene_current = 8;

            return;
        }
        if ((D_800A4B18.player_block[gSceneData.player_port].stock_count != -1) && (D_800A4B18.match_time_remain != 0))
        {
            gSceneData.unk43 = D_800A3F80.unk43;
            gSceneData.unk02 = D_ovl2_80116D84[gSceneData.scene_queue];

            load_overlay(&D_ovl2_80116BF0);
            load_overlay(&D_ovl2_80116CA4);

            gSceneData.scene_previous = 0x34;
            gSceneData.scene_current = 0xC;

            func_multiple_801323F8();

        }
        else if (gSceneData.unk43 < 9)
        {
            gSceneData.unk43 += 2;
        }
        if (gSceneData.scene_queue == 0xE)
        {
            gSceneData.scene_previous = 0x35;
            gSceneData.scene_current = 0x13;
            return;
        }
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_INISHIE))
    {
        if ((gSaveData.unlock_task_inishie & GMSAVE_GROUND_MASK_ALL) == GMSAVE_GROUND_MASK_ALL)
        {
            for (i = 0, spgame_characters_complete = 0; i < ARRAY_COUNT(gSaveData.spgame_records); i++)
            {
                if (gSaveData.spgame_records[i].spgame_complete != FALSE)
                {
                    spgame_characters_complete |= (1 << i);
                }
            }

            if ((spgame_characters_complete & GMSAVEINFO_CHARACTER_MASK_STARTER) == GMSAVEINFO_CHARACTER_MASK_STARTER)
            {
                gSceneData.unk02 = 4;

                load_overlay(&D_ovl2_80116BF0);
                load_overlay(&D_ovl2_80116CA4);

                gSceneData.scene_previous = 0x34;
                gSceneData.scene_current = 0xC;

                func_multiple_801323F8();
            }
        }
    }
    gSceneData.scene_previous = 0x34;
    gSceneData.scene_current = 0x1B;
}
