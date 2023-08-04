#include <ft/fighter.h>
#include <it/item.h>

// 0x8014F670
void ftCommon_AttackDash_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Common_AttackDash, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8014F69C - Also checks LightThrowDash and ItemSwingDash
bool32 ftCommon_AttackDash_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->input.pl.button_tap & fp->input.button_mask_a)
    {
        if (fp->item_hold != NULL)
        {
            if ((fp->input.pl.button_hold & fp->input.button_mask_z) || (itGetStruct(fp->item_hold)->type == It_Type_Throw))
            {
                ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowDash);

                return TRUE;
            }
            if (itGetStruct(fp->item_hold)->type == It_Type_Swing)
            {
                ftCommon_ItemSwing_SetStatus(fighter_gobj, 3);

                return TRUE;
            }
        }
        if (attributes->is_have_attackdash)
        {
            ftCommon_AttackDash_SetStatus(fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}