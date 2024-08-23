#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/system_00.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D4520
s32 scBackupCreateChecksum(scBackupData *bp)
{
    s32 i, checksum = 0;
    u8 *bpbyte = (u8*)bp;

    for (i = 0; i < (sizeof(scBackupData) - sizeof(gSaveData.checksum)); i++)
    {
        checksum += *bpbyte++ * (i + 1);
    }
    return checksum;
}

// 0x800D45A4
sb32 scBackupIsChecksumValid(void)
{
    if ((scBackupCreateChecksum(&gSaveData) == gSaveData.checksum) && (gSaveData.unk5E4 == 0x29A)) // :otstare:
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D45F4
void scBackupWrite(void)
{
    gSaveData.checksum = scBackupCreateChecksum(&gSaveData);
    syDmaSramWrite(&gSaveData, ALIGN(sizeof(scBackupData),  0x0), sizeof(scBackupData));
    syDmaSramWrite(&gSaveData, ALIGN(sizeof(scBackupData), 0x10), sizeof(scBackupData));
}

// 0x800D4644
sb32 scBackupIsSramValid(void)
{
    syDmaSramRead(ALIGN(sizeof(scBackupData), 0x0), &gSaveData, sizeof(scBackupData));

    if (scBackupIsChecksumValid() == FALSE)
    {
        syDmaSramRead(ALIGN(sizeof(scBackupData), 0x10), &gSaveData, sizeof(scBackupData));

        if (scBackupIsChecksumValid() == FALSE)
        {
            gSaveData = gDefaultSaveData;

            scBackupWrite();

            return FALSE;
        }
        scBackupWrite();
    }
    return TRUE;
}

// 0x800D46F4
void scBackupApplyOptions(void)
{
    auSetSoundQuality(gSaveData.sound_mono_or_stereo);
    syDisplaySetCenterOffsets
    (
        gSaveData.screen_adjust_hz, gSaveData.screen_adjust_hz, 
        gSaveData.screen_adjust_vt, gSaveData.screen_adjust_vt
    );
}

// 0x800D473C
void scBackupCorrectErrors(void)
{
    s32 i;

    if (!((gSaveData.character_mask | SCBACKUP_CHARACTER_MASK_STARTER) & (1 << gSaveData.bio_ft_kind)))
    {
        gSaveData.bio_ft_kind = gDefaultSaveData.bio_ft_kind;
    }
    if (!((gSaveData.character_mask | SCBACKUP_CHARACTER_MASK_STARTER) & (1 << gSceneData.ft_kind)))
    {
        gSceneData.ft_kind = nFTKindNull;
    }
    if (!((gSaveData.character_mask | SCBACKUP_CHARACTER_MASK_STARTER) & (1 << gSceneData.training_man_ft_kind)))
    {
        gSceneData.training_man_ft_kind = nFTKindNull;
    }
    if (!((gSaveData.character_mask | SCBACKUP_CHARACTER_MASK_STARTER) & (1 << gSceneData.training_com_ft_kind)))
    {
        gSceneData.training_com_ft_kind = nFTKindNull;
    }
    for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
    {
        if (!((1 << gTransferBattleState.players[i].ft_kind) & (gSaveData.character_mask | SCBACKUP_CHARACTER_MASK_STARTER)))
        {
            gTransferBattleState.players[i].ft_kind = nFTKindNull;
            gTransferBattleState.players[i].pl_kind = nFTPlayerKindMan;
        }
    }
    if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_INISHIE))
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
    if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_ITEMSWITCH))
    {
        gTransferBattleState.item_toggles = gDefaultBattleState.item_toggles;
        gTransferBattleState.item_switch  = gDefaultBattleState.item_switch;
    }
}

// 0x800D48E0
void scBackupClearNewcomers(void)
{
    gSaveData.unlock_mask &= ~SCBACKUP_UNLOCK_MASK_NEWCOMERS;
    gSaveData.unlock_mask |= gDefaultSaveData.unlock_mask;

    gSaveData.character_mask = gDefaultSaveData.character_mask;
}

// 0x800D4914
void scBackupClear1PHighScore(void)
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
void scBackupClearVSRecord(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gSaveData.vs_records); i++)
    {
        gSaveData.vs_records[i] = gDefaultSaveData.vs_records[i];
    }
    gSaveData.vs_total_battles = gDefaultSaveData.vs_total_battles;
}

// 0x800D4B60
void scBackupClearBonusStageTime(void)
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
void scBackupClearPrize(void)
{
    gSaveData.unlock_mask &= ~SCBACKUP_UNLOCK_MASK_PRIZE;
    gSaveData.unlock_mask |= gDefaultSaveData.unlock_mask;

    gSaveData.unlock_task_inishie    = gDefaultSaveData.unlock_task_inishie;
    gSaveData.unlock_task_itemswitch = gDefaultSaveData.unlock_task_itemswitch;
}

// 0x800D4C48
void scBackupClearAllData(void)
{
    gSaveData = gDefaultSaveData;
}

// 0x800D4C90
void func_ovl0_800D4C90(void) // Unused, did HAL compile with -O3?
{
    return;
}
