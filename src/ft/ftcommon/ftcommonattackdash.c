#include <ft/fighter.h>
#include <it/item.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014F670
void ftCommonAttackDashSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusAttackDash, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
}

// 0x8014F69C - Also checks LightThrowDash and ItemSwingDash
sb32 ftCommonAttackDashCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->input.pl.button_tap & fp->input.button_mask_a)
    {
        if (fp->item_hold != NULL)
        {
            if ((fp->input.pl.button_hold & fp->input.button_mask_z) || (itGetStruct(fp->item_hold)->type == nITTypeThrow))
            {
                ftCommonItemThrowSetStatus(fighter_gobj, nFTCommonStatusLightThrowDash);

                return TRUE;
            }
            if (itGetStruct(fp->item_hold)->type == nITTypeSwing)
            {
                ftCommonItemSwingSetStatus(fighter_gobj, nFTItemSwingTypeAttackDash);

                return TRUE;
            }
        }
        if (attributes->is_have_attackdash)
        {
            ftCommonAttackDashSetStatus(fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}
