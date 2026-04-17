#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 80188D50
void (*dFTCommonSpecialLwStatusList[])(GObj*) = 
{
	ftMarioSpecialLwSetStatus,
	ftFoxSpecialLwStartSetStatus,
	ftDonkeySpecialLwStartSetStatus,
	ftSamusSpecialLwSetStatus,
	ftMarioSpecialLwSetStatus,
	ftLinkSpecialLwSetStatus,
	ftYoshiSpecialLwStartSetStatus,
	ftCaptainSpecialLwSetStatus,
	ftKirbySpecialLwStartSetStatus,
	ftPikachuSpecialLwStartSetStatus,
	ftPurinSpecialLwSetStatus,
	ftNessSpecialLwStartSetStatus,
	ftMarioSpecialLwSetStatus,
	ftMarioSpecialLwSetStatus,
	ftMarioSpecialLwSetStatus,
	ftFoxSpecialLwStartSetStatus,
	ftDonkeySpecialLwStartSetStatus,
	ftSamusSpecialLwSetStatus,
	ftMarioSpecialLwSetStatus,
	ftLinkSpecialLwSetStatus,
	ftYoshiSpecialLwStartSetStatus,
	ftCaptainSpecialLwSetStatus,
	ftKirbySpecialLwStartSetStatus,
	ftPikachuSpecialLwStartSetStatus,
	ftPurinSpecialLwSetStatus,
	ftNessSpecialLwStartSetStatus,
	ftDonkeySpecialLwStartSetStatus
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 801511E0
sb32 ftCommonSpecialLwCheckInterruptCommon(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);
	FTAttributes *attr = fp->attr;

	if ((fp->input.pl.button_tap & fp->input.button_mask_b) && (attr->is_have_speciallw) && (fp->input.pl.stick_range.y <= FTCOMMON_SPECIALLW_STICK_RANGE_MIN))
	{
		dFTCommonSpecialLwStatusList[fp->fkind](fighter_gobj);

		return TRUE;
	}
	else return FALSE;
}
