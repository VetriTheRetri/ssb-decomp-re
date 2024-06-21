#include <ft/fighter.h>
#include <it/item.h>

extern alSoundEffect* func_800269C0_275C0(u16);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

// 0x8012C840 - Actually at 0x8012CA38 due to negative index
extern ftItemSwing dFTCommonItemSwingAnimSpeeds[/* */];
/*
{
    100,        // SwordSwing1
    100,        // SwordSwing3
    100,        // SwordSwing4
    100,        // SwordSwingDash

    100,        // BatSwing1
    100,        // BatSwing3
    75,         // BatSwing4
    100,        // BatSwingDash

    200,        // HarisenSwing1
    200,        // HarisenSwing3
    200,        // HarisenSwing4
    100,        // HarisenSwingDash

    100,        // StarRodSwing1
    100,        // StarRodSwing3
    100,        // StarRodSwing4
    100         // StarRodSwingDash
};
*/

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80146C40
void ftCommonHarisenSwingProcHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        itStruct *ip = itGetStruct(fp->item_hold);

        if (ip->it_kind == It_Kind_Harisen)
        {
            itHarisenSDefaultSetScale(fp->item_hold, FTCOMMON_HARISENSWING_SCALE_HIT);

            fp->status_vars.common.itemswing.harisen_scale_reset_wait = FTCOMMON_HARISENSWING_SCALE_RESET_WAIT;
        }
    }
}

// 0x80146C98
void ftCommonHarisenSwingProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        if (fp->status_vars.common.itemswing.harisen_scale_reset_wait != 0)
        {
            fp->status_vars.common.itemswing.harisen_scale_reset_wait--;

            if (fp->status_vars.common.itemswing.harisen_scale_reset_wait == 0)
            {
                itHarisenSDefaultSetScale(fp->item_hold, 1.0F);
            }
        }
    }
    ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x80146CF4
void ftCommonStarRodSwingProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip;
    f32 scale_mul;
    s32 unused;

    if (fp->item_hold != NULL)
    {
        if (fp->command_vars.flags.flag1 != 0)
        {
            ip = itGetStruct(fp->item_hold);

            if (ip->it_multi != 0)
            {
                func_800269C0_275C0(fp->command_vars.flags.flag1);
            }
            else func_800269C0_275C0(alSound_SFX_StarRodEmpty);

            fp->command_vars.flags.flag1 = 0;
        }
    }
    if ((fp->item_hold != NULL) && (fp->command_vars.flags.flag0 != 0))
    {
        ip = itGetStruct(fp->item_hold);

        if (ip->it_multi != 0)
        {
            // 0x80188600
            Vec3f make_star_offset = { 0.0F, 200.0F, 0.0F };

            scale_mul = 1.0F / fp->attributes->size_mul;

            make_star_offset.x *= scale_mul;
            make_star_offset.y *= scale_mul;
            make_star_offset.z *= scale_mul;

            ftParts_GetDObjWorldPosition(fp->joint[fp->attributes->joint_itemhold_light], &make_star_offset);

            itStarRodMakeStar(fighter_gobj, &make_star_offset, (fp->command_vars.flags.flag0 == 1) ? FALSE : TRUE);
        }
        else
        {
            // 0x8018860C
            Vec3f effect_offset = { 0.0F, 200.0F, 0.0F };

            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustLight, fp->attributes->joint_itemhold_light, &effect_offset, NULL, -fp->lr, TRUE, FALSE);
        }
        fp->command_vars.flags.flag0 = 0;
    }
    ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x80188618
s32 dFTCommonItemSwingStatusIDs[/* */][ftItemSwing_Type_EnumMax] =
{
    { ftStatus_Common_SwordSwing1,   ftStatus_Common_SwordSwing3,   ftStatus_Common_SwordSwing4,   ftStatus_Common_SwordSwingDash   },
    { ftStatus_Common_BatSwing1,     ftStatus_Common_BatSwing3,     ftStatus_Common_BatSwing4,     ftStatus_Common_BatSwingDash     },
    { ftStatus_Common_HarisenSwing1, ftStatus_Common_HarisenSwing3, ftStatus_Common_HarisenSwing4, ftStatus_Common_HarisenSwingDash },
    { ftStatus_Common_StarRodSwing1, ftStatus_Common_StarRodSwing3, ftStatus_Common_StarRodSwing4, ftStatus_Common_StarRodSwingDash }
};

// 0x80146E94
void ftCommonItemSwingSetStatus(GObj *fighter_gobj, s32 swing_type)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip = itGetStruct(fp->item_hold);
    s32 swing_item;
    s32 status_id;
    f32 anim_speed;

    switch (ip->it_kind)
    {
    case It_Kind_Sword:
        swing_item = ftItemSwing_Kind_Sword;
        break;

    case It_Kind_Bat:
        swing_item = ftItemSwing_Kind_Bat;
        break;

    case It_Kind_Harisen:
        swing_item = ftItemSwing_Kind_Harisen;
        break;

    case It_Kind_StarRod:
        swing_item = ftItemSwing_Kind_StarRod;
        break;
    }
    status_id = dFTCommonItemSwingStatusIDs[swing_item][swing_type];
    anim_speed = F_PCT_TO_DEC(dFTCommonItemSwingAnimSpeeds[status_id - ftStatus_Common_SwordSwing1].anim_speed);

    fp->command_vars.flags.flag0 = 0;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, anim_speed, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_hit = ftCommonHarisenSwingProcHit;

    fp->status_vars.common.itemswing.harisen_scale_reset_wait = 0;

    fp->command_vars.flags.flag1 = 0;
}