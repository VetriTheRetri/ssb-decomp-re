#include <ft/fighter.h>
#include <it/item.h>
#include <ef/effect.h>

// 0x8012C840 - Actually at 0x8012CA38 due to negative index
extern ftItemSwing ftCommon_ItemSwing_AnimSpeeds[/* */] =
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

// 0x80188600
Vec3f ftCommon_StarRodSwing_StarOffset = { 0.0F, 200.0F, 0.0F };

// 0x8018860C
Vec3f ftCommon_StarRodSwing_DustOffset = { 0.0F, 200.0F, 0.0F };

// 0x80188618
s32 ftCommon_ItemSwing_StatusIndex[/* */][ftItemSwing_Type_EnumMax] =
{
    { ftStatus_Common_SwordSwing1,   ftStatus_Common_SwordSwing3,   ftStatus_Common_SwordSwing4,   ftStatus_Common_SwordSwingDash   },
    { ftStatus_Common_BatSwing1,     ftStatus_Common_BatSwing3,     ftStatus_Common_BatSwing4,     ftStatus_Common_BatSwingDash     },
    { ftStatus_Common_HarisenSwing1, ftStatus_Common_HarisenSwing3, ftStatus_Common_HarisenSwing4, ftStatus_Common_HarisenSwingDash },
    { ftStatus_Common_StarRodSwing1, ftStatus_Common_StarRodSwing3, ftStatus_Common_StarRodSwing4, ftStatus_Common_StarRodSwingDash }
};

// 0x80146C40
void ftCommon_HarisenSwing_ProcHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        itStruct *ip = itGetStruct(fp->item_hold);

        if (ip->it_kind == It_Kind_Harisen)
        {
            itHairsen_SDefault_SetScale(fp->item_hold, FTCOMMON_HARISENSWING_SCALE_HIT);

            fp->status_vars.common.itemswing.harisen_scale_reset_wait = FTCOMMON_HARISENSWING_SCALE_RESET_WAIT;
        }
    }
}

// 0x80146C98
void ftCommon_HarisenSwing_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        if (fp->status_vars.common.itemswing.harisen_scale_reset_wait != 0)
        {
            fp->status_vars.common.itemswing.harisen_scale_reset_wait--;

            if (fp->status_vars.common.itemswing.harisen_scale_reset_wait == 0)
            {
                itHairsen_SDefault_SetScale(fp->item_hold, 1.0F);
            }
        }
    }
    ftStatus_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x80146CF4
void ftCommon_StarRodSwing_ProcUpdate(GObj *fighter_gobj)
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
                func_800269C0(fp->command_vars.flags.flag1);
            }
            else func_800269C0(alSound_SFX_StarRodEmpty);

            fp->command_vars.flags.flag1 = 0;
        }
    }
    if ((fp->item_hold != NULL) && (fp->command_vars.flags.flag0 != 0))
    {
        ip = itGetStruct(fp->item_hold);

        if (ip->it_multi != 0)
        {
            Vec3f star_spawn_offset = ftCommon_StarRodSwing_StarOffset;

            scale_mul = 1.0F / fp->attributes->size_mul;

            star_spawn_offset.x *= scale_mul;
            star_spawn_offset.y *= scale_mul;
            star_spawn_offset.z *= scale_mul;

            ftParts_GetDObjWorldPosition(fp->joint[fp->attributes->joint_itemhold_light], &star_spawn_offset);

            ftCommon_StarRodSwing_CreateStar(fighter_gobj, &star_spawn_offset, (fp->command_vars.flags.flag0 == 1) ? FALSE : TRUE);
        }
        else
        {
            Vec3f gfx_offset = ftCommon_StarRodSwing_DustOffset;

            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustLight, fp->attributes->joint_itemhold_light, &gfx_offset, NULL, -fp->lr, TRUE, FALSE);
        }
        fp->command_vars.flags.flag0 = 0;
    }
    ftStatus_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x80146E94
void ftCommon_ItemSwing_SetStatus(GObj *fighter_gobj, s32 swing_type)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ap = itGetStruct(fp->item_hold);
    s32 swing_item;
    s32 status_id;
    f32 anim_speed;

    switch (ap->it_kind)
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
    status_id = ftCommon_ItemSwing_StatusIndex[swing_item][swing_type];
    anim_speed = F_PCT_TO_DEC(ftCommon_ItemSwing_AnimSpeeds[status_id - ftStatus_Common_SwordSwing1].anim_speed);

    fp->command_vars.flags.flag0 = 0;

    ftMain_SetFighterStatus(fighter_gobj, status_id, 0.0F, anim_speed, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_hit = ftCommon_HarisenSwing_ProcHit;

    fp->status_vars.common.itemswing.harisen_scale_reset_wait = 0;

    fp->command_vars.flags.flag1 = 0;
}