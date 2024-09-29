#include <ft/fighter.h>
#include <lb/library.h>
#include <sc/scene.h>
#include <sys/system_00.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D4520
s32 lbBackupCreateChecksum(lbBackupData *backup)
{
    s32 i, checksum = 0;
    u8 *bytes = (u8*)backup;

    for (i = 0; i < (sizeof(lbBackupData) - sizeof(gSaveData.checksum)); i++)
    {
        checksum += *bytes++ * (i + 1);
    }
    return checksum;
}

// 0x800D45A4
sb32 lbBackupIsChecksumValid(void)
{
    if ((lbBackupCreateChecksum(&gSaveData) == gSaveData.checksum) && (gSaveData.unk5E4 == 0x29A)) // :otstare:
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D45F4
void lbBackupWrite(void)
{
    gSaveData.checksum = lbBackupCreateChecksum(&gSaveData);
    syDmaWriteSram(&gSaveData, ALIGN(sizeof(lbBackupData),  0x0), sizeof(lbBackupData));
    syDmaWriteSram(&gSaveData, ALIGN(sizeof(lbBackupData), 0x10), sizeof(lbBackupData));
}

// 0x800D4644
sb32 lbBackupIsSramValid(void)
{
    syDmaReadSram(ALIGN(sizeof(lbBackupData), 0x0), &gSaveData, sizeof(lbBackupData));

    if (lbBackupIsChecksumValid() == FALSE)
    {
        syDmaReadSram(ALIGN(sizeof(lbBackupData), 0x10), &gSaveData, sizeof(lbBackupData));

        if (lbBackupIsChecksumValid() == FALSE)
        {
            gSaveData = gDefaultSaveData;

            lbBackupWrite();

            return FALSE;
        }
        lbBackupWrite();
    }
    return TRUE;
}

// 0x800D46F4
void lbBackupApplyOptions(void)
{
    auSetSoundQuality(gSaveData.sound_mono_or_stereo);
    syDisplaySetCenterOffsets
    (
        gSaveData.screen_adjust_h, gSaveData.screen_adjust_h, 
        gSaveData.screen_adjust_v, gSaveData.screen_adjust_v
    );
}

// 0x800D473C
void lbBackupCorrectErrors(void)
{
    s32 i;

    if (!((gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER) & (1 << gSaveData.characters_ft_kind)))
    {
        gSaveData.characters_ft_kind = gDefaultSaveData.characters_ft_kind;
    }
    if (!((gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER) & (1 << gSceneData.ft_kind)))
    {
        gSceneData.ft_kind = nFTKindNull;
    }
    if (!((gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER) & (1 << gSceneData.training_man_ft_kind)))
    {
        gSceneData.training_man_ft_kind = nFTKindNull;
    }
    if (!((gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER) & (1 << gSceneData.training_com_ft_kind)))
    {
        gSceneData.training_com_ft_kind = nFTKindNull;
    }
    for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
    {
        if (!((1 << gTransferBattleState.players[i].ft_kind) & (gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER)))
        {
            gTransferBattleState.players[i].ft_kind = nFTKindNull;
            gTransferBattleState.players[i].pl_kind = nFTPlayerKindMan;
        }
    }
    if (!(gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_INISHIE))
    {
        if (gSceneData.stagesel_battle_gr_kind == nGRKindInishie)
        {
            gSceneData.stagesel_battle_gr_kind = gDefaultSceneData.stagesel_battle_gr_kind;
        }
        if (gSceneData.stagesel_training_gr_kind == nGRKindInishie)
        {
            gSceneData.stagesel_training_gr_kind = gDefaultSceneData.stagesel_training_gr_kind;
        }
    }
    if (!(gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_ITEMSWITCH))
    {
        gTransferBattleState.item_toggles = gDefaultBattleState.item_toggles;
        gTransferBattleState.item_switch  = gDefaultBattleState.item_switch;
    }
}

// 0x800D48E0
void lbBackupClearNewcomers(void)
{
    gSaveData.unlock_mask &= ~LBBACKUP_UNLOCK_MASK_NEWCOMERS;
    gSaveData.unlock_mask |= gDefaultSaveData.unlock_mask;

    gSaveData.fighter_mask = gDefaultSaveData.fighter_mask;
}

// 0x800D4914
void lbBackupClear1PHighScore(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gSaveData.spgame_records); i++)
    {
        gSaveData.spgame_records[i].spgame_hiscore         = gDefaultSaveData.spgame_records[i].spgame_hiscore;
        gSaveData.spgame_records[i].spgame_continues       = gDefaultSaveData.spgame_records[i].spgame_continues;
        gSaveData.spgame_records[i].spgame_bonuses         = gDefaultSaveData.spgame_records[i].spgame_bonuses;
        gSaveData.spgame_records[i].spgame_best_difficulty = gDefaultSaveData.spgame_records[i].spgame_best_difficulty;
        gSaveData.spgame_records[i].spgame_complete        = gDefaultSaveData.spgame_records[i].spgame_complete;
    }
}

//0x800D49E0
void lbBackupClearVSRecord(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gSaveData.vs_records); i++)
    {
        gSaveData.vs_records[i] = gDefaultSaveData.vs_records[i];
    }
    gSaveData.vs_total_battles = gDefaultSaveData.vs_total_battles;
}

// 0x800D4B60
void lbBackupClearBonusStageTime(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gSaveData.spgame_records); i++)
    {
        gSaveData.spgame_records[i].bonus1_time       = gDefaultSaveData.spgame_records[i].bonus1_time;
        gSaveData.spgame_records[i].bonus1_task_count = gDefaultSaveData.spgame_records[i].bonus1_task_count;
        gSaveData.spgame_records[i].bonus2_time       = gDefaultSaveData.spgame_records[i].bonus2_time;
        gSaveData.spgame_records[i].bonus2_task_count = gDefaultSaveData.spgame_records[i].bonus2_task_count;
    }
}

// 0x800D4C0C
void lbBackupClearPrize(void)
{
    gSaveData.unlock_mask &= ~LBBACKUP_UNLOCK_MASK_PRIZE;
    gSaveData.unlock_mask |= gDefaultSaveData.unlock_mask;

    gSaveData.unlock_task_inishie    = gDefaultSaveData.unlock_task_inishie;
    gSaveData.unlock_task_itemswitch = gDefaultSaveData.unlock_task_itemswitch;
}

// 0x800D4C48
void lbBackupClearAllData(void)
{
    gSaveData = gDefaultSaveData;
}

// 0x800D4C90
void func_ovl0_800D4C90(void) // Unused, did HAL compile with -O3?
{
    return;
}
