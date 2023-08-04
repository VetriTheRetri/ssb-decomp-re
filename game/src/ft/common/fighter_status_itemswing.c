#include <ft/fighter.h>
#include <it/item.h>

// 0x80146C40
void ftCommon_HarisenSwing_ProcHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        itStruct *ap = itGetStruct(fp->item_hold);

        if (ap->it_kind == It_Kind_Harisen)
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
    ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

const Vec3f Fighter_StarRodSwing_Star_Offset = { 0.0F, 200.0F, 0.0F };
const Vec3f Fighter_StarRodSwing_Dust_Offset = { 0.0F, 200.0F, 0.0F };

// 0x80146CF4
void ftCommon_StarRodSwing_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ap;
    f32 scale_mul;
    s32 unused;

    if (fp->item_hold != NULL)
    {
        if (fp->command_vars.flags.flag1 != 0)
        {
            ap = itGetStruct(fp->item_hold);

            if (ap->it_multi != 0)
            {
                func_800269C0(fp->command_vars.flags.flag1);
            }
            else func_800269C0(0x42U);

            fp->command_vars.flags.flag1 = 0;
        }
    }
    if ((fp->item_hold != NULL) && (fp->command_vars.flags.flag0 != 0))
    {
        ap = itGetStruct(fp->item_hold);

        if (ap->it_multi != 0)
        {
            Vec3f star_spawn_offset = Fighter_StarRodSwing_Star_Offset;

            scale_mul = 1.0F / fp->attributes->size_mul;

            star_spawn_offset.x *= scale_mul;
            star_spawn_offset.y *= scale_mul;
            star_spawn_offset.z *= scale_mul;

            func_ovl2_800EDF24(fp->joint[fp->attributes->joint_itemhold_light], &star_spawn_offset);

            ftCommon_StarRodSwing_CreateStar(fighter_gobj, &star_spawn_offset, (fp->command_vars.flags.flag0 == 1) ? FALSE : TRUE);
        }
        else
        {
            Vec3f gfx_offset = Fighter_StarRodSwing_Dust_Offset;

            ftCommon_GFXSpawn(fighter_gobj, 0xB, fp->attributes->joint_itemhold_light, &gfx_offset, NULL, -fp->lr, TRUE, 0);
        }
        fp->command_vars.flags.flag0 = 0;
    }
    ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

extern ftItemSwing Fighter_ItemSwing_Desc[4]; // Warning: seems to blend into another struct, possibly part of main move logic table?

s32 Fighter_ItemSwing_Status[4][4] = 
{ 
    { ftStatus_Common_SwordSwing1,   ftStatus_Common_SwordSwing3,   ftStatus_Common_SwordSwing4,   ftStatus_Common_SwordSwingDash   },
    { ftStatus_Common_BatSwing1,     ftStatus_Common_BatSwing3,     ftStatus_Common_BatSwing4,     ftStatus_Common_BatSwingDash     },
    { ftStatus_Common_HarisenSwing1, ftStatus_Common_HarisenSwing3, ftStatus_Common_HarisenSwing4, ftStatus_Common_HarisenSwingDash },
    { ftStatus_Common_StarRodSwing1, ftStatus_Common_StarRodSwing3, ftStatus_Common_StarRodSwing4, ftStatus_Common_StarRodSwingDash }
};

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
        swing_item = 0;
        break;

    case It_Kind_Bat:
        swing_item = 1;
        break;

    case It_Kind_Harisen:
        swing_item = 2;
        break;

    case It_Kind_StarRod:
        swing_item = 3;
        break;
    }
    status_id = Fighter_ItemSwing_Status[swing_item][swing_type];
    anim_speed = Fighter_ItemSwing_Desc[status_id].anim_speed * 0.01F;

    fp->command_vars.flags.flag0 = 0;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, anim_speed, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->proc_hit = ftCommon_HarisenSwing_ProcHit;

    fp->status_vars.common.itemswing.harisen_scale_reset_wait = 0;

    fp->command_vars.flags.flag1 = 0;
}