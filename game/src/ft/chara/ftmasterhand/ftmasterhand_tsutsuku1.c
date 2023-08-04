#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x80159EA0
void ftMasterHand_Tsutsuku1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Tsutsuku2_SetStatus);
}

// 0x80159EC4
void ftMasterHand_Tsutsuku1_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Tsutsuku1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
