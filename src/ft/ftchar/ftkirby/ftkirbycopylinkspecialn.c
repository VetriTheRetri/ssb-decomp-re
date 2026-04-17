#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 80164650
void ftKirbyCopyLinkSpecialNDestroyBoomerang(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	if (fp->passive_vars.kirby.copylink_boomerang_gobj != NULL)
	{
		wpMainDestroyWeapon(fp->passive_vars.kirby.copylink_boomerang_gobj);

		fp->passive_vars.kirby.copylink_boomerang_gobj = NULL;
	}
}

// 80164688
void ftKirbyCopyLinkSpecialNMakeBoomerang(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);
	Vec3f pos;

	if (fp->motion_vars.flags.flag0 != 0)
	{
		fp->motion_vars.flags.flag0 = 0;

		pos.x = 0.0F;
		pos.y = 0.0F;
		pos.z = 0.0F;

		gmCollisionGetFighterPartsWorldPosition(fp->joints[FTKIRBY_COPYLINK_BOOMERANG_SPAWN_JOINT], &pos);

		fp->passive_vars.kirby.copylink_boomerang_gobj = wpLinkBoomerangMakeWeapon(fighter_gobj, &pos);
	}
}

// 801646F0
void ftKirbyCopyLinkSpecialNProcUpdate(GObj *fighter_gobj)
{
	ftKirbyCopyLinkSpecialNMakeBoomerang(fighter_gobj);
	ftAnimEndSetWait(fighter_gobj);
}

// 80164718
void ftKirbyCopyLinkSpecialAirNProcUpdate(GObj *fighter_gobj)
{
	ftKirbyCopyLinkSpecialNMakeBoomerang(fighter_gobj);
	ftAnimEndSetFall(fighter_gobj);
}

// 80164740
void ftKirbyCopyLinkSpecialNProcMap(GObj *fighter_gobj)
{
	mpCommonProcFighterOnFloor(fighter_gobj, ftKirbyCopyLinkSpecialNSwitchStatusAir);
}

// 80164764
void ftKirbyCopyLinkSpecialNEmptyProcMap(GObj *fighter_gobj)
{
	mpCommonProcFighterOnFloor(fighter_gobj, ftKirbyCopyLinkSpecialNEmptySwitchStatusAir);
}

// 80164788
void ftKirbyCopyLinkSpecialAirNProcMap(GObj *fighter_gobj)
{
	mpCommonProcFighterLanding(fighter_gobj, ftKirbyCopyLinkSpecialAirNSwitchStatusGround);
}

// 801647AC
void ftKirbyCopyLinkSpecialAirNEmptyProcMap(GObj *fighter_gobj)
{
	mpCommonProcFighterLanding(fighter_gobj, ftKirbyCopyLinkSpecialAirNEmptySwitchStatusGround);
}

// 801647D0
void ftKirbyCopyLinkSpecialNProcStatus(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	fp->motion_vars.flags.flag0 = 0;

	if ((ABS(fp->input.pl.stick_range.x) >= FTKIRBY_COPYLINK_BOOMERANG_SMASH_STICK_MIN) && (fp->hold_stick_x < FTKIRBY_COPYLINK_BOOMERANG_SMASH_BUFFER))
	{
		fp->status_vars.kirby.copylink_specialn.is_smash = TRUE;
	}
	else fp->status_vars.kirby.copylink_specialn.is_smash = FALSE;
}

// 80164820
void ftKirbyCopyLinkSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
	mpCommonSetFighterAir(ftGetStruct(fighter_gobj));
	ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialAirN, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_MODELPART);
}

// 80164860
void ftKirbyCopyLinkSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
	mpCommonSetFighterGround(ftGetStruct(fighter_gobj));
	ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialN, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_MODELPART);
}

// 801648A0
void ftKirbyCopyLinkSpecialNEmptySwitchStatusAir(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	mpCommonSetFighterAir(fp);
	ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialAirNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);

	fp->is_special_interrupt = TRUE;
}

// 801648F0
void ftKirbyCopyLinkSpecialAirNEmptySwitchStatusGround(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	mpCommonSetFighterGround(fp);
	ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);

	fp->is_special_interrupt = TRUE;
}

// 80164940
void ftKirbyCopyLinkSpecialNSetStatus(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	fp->proc_status = ftKirbyCopyLinkSpecialNProcStatus;

	if (fp->passive_vars.kirby.copylink_boomerang_gobj != NULL)
	{
		ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialNEmpty, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

		fp->is_special_interrupt = TRUE;
	}
	else ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialN, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

	ftMainPlayAnimEventsAll(fighter_gobj);
}

// 801649C0
void ftKirbyCopyLinkSpecialAirNSetStatus(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	fp->proc_status = ftKirbyCopyLinkSpecialNProcStatus;

	if (fp->passive_vars.kirby.copylink_boomerang_gobj != NULL)
	{
		ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialAirNEmpty, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

		fp->is_special_interrupt = TRUE;
	}
	else ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialAirN, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

	ftMainPlayAnimEventsAll(fighter_gobj);
}

// 80164A40
void ftKirbyCopyLinkSpecialNGetSetStatus(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);

	if (fp->ga == nMPKineticsAir)
	{
		ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialAirNReturn, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
	}
	else ftMainSetStatus(fighter_gobj, nFTKirbyStatusCopyLinkSpecialNGet, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

	ftMainPlayAnimEventsAll(fighter_gobj);
}
