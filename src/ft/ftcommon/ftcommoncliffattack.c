#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 80145620
sb32 ftCommonCliffAttackCheckInterruptCommon(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	if (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b))
	{
		ftCommonCliffQuickOrSlowSetStatus(fighter_gobj, nFTCommonCliffKindAttackQuick);

		return TRUE;
	}
	else return FALSE;
}

// 8014566C
void ftCommonCliffAttackQuick1ProcUpdate(GObj *fighter_gobj)
{
	ftAnimEndCheckSetStatus(fighter_gobj, ftCommonCliffAttackQuick2SetStatus);
}

// 80145690
void ftCommonCliffAttackSlow1ProcUpdate(GObj *fighter_gobj)
{
	ftAnimEndCheckSetStatus(fighter_gobj, ftCommonCliffAttackSlow2SetStatus);
}

// 801456B4
void ftCommonCliffAttackQuick1SetStatus(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	ftMainSetStatus(fighter_gobj, nFTCommonStatusCliffAttackQuick1, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

	fp->is_cliff_hold = TRUE;

	fp->proc_damage = ftCommonCliffCommonProcDamage;
}

// 80145704
void ftCommonCliffAttackSlow1SetStatus(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	ftMainSetStatus(fighter_gobj, nFTCommonStatusCliffAttackSlow1, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

	fp->is_cliff_hold = TRUE;

	fp->proc_damage = ftCommonCliffCommonProcDamage;
}

// 80145754
void ftCommonCliffAttackQuick2SetStatus(GObj *fighter_gobj)
{
	ftCommonCliffCommon2UpdateCollData(fighter_gobj);
	ftMainSetStatus(fighter_gobj, nFTCommonStatusCliffAttackQuick2, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
	ftCommonCliffCommon2InitStatusVars(fighter_gobj);
}

// 80145794
void ftCommonCliffAttackSlow2SetStatus(GObj *fighter_gobj)
{
	ftCommonCliffCommon2UpdateCollData(fighter_gobj);
	ftMainSetStatus(fighter_gobj, nFTCommonStatusCliffAttackSlow2, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
	ftCommonCliffCommon2InitStatusVars(fighter_gobj);
}
