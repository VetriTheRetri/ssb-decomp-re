#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x801593E0
void ftMasterHand_Harau_ResetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Harau, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8015940C
void ftMasterHand_Harau_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->coll_data.ground_line_id == -1)
        {
            ftMasterHand_Wait_SetStatus(fighter_gobj);
        }
        else ftMasterHand_Harau_ResetStatus(fighter_gobj);
    }
}

// 0x8015946C
void ftMasterHand_Harau_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp;

    func_ovl2_800D93E4(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x += fp->lr * FTMASTERHAND_HARAU_VEL_X;
}

// 0x801594BC
void ftMasterHand_Harau_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Harau, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    func_ovl3_80157F90(fighter_gobj);
}
