#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015A3C0
void ftMasterHand_Yubideppou3_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->fighter_vars.masterhand.boss->wait_div == 1.5F) && (fighter_gobj->anim_frame >= 20.0F) && (fp->status_vars.masterhand.yubideppou.bullet_count != 3))
    {
        ftMasterHand_Yubideppou3_SetStatus(fighter_gobj);
    }
    else if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftMasterHand_Wait_SetStatus(fighter_gobj);
    }
}

// 0x8015A45C
void ftMasterHand_Yubideppou3_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->status_vars.masterhand.yubideppou.shoot_timer != 0)
    {
        fp->status_vars.masterhand.yubideppou.shoot_timer--;

        if (fp->status_vars.masterhand.yubideppou.shoot_timer == 0)
        {
            pos.z = 0.0F;
            pos.y = 0.0F;
            pos.x = 0.0F;

            func_ovl2_800EDF24(fp->joint[19], &pos);

            if ((fp->fighter_vars.masterhand.boss->wait_div == 1.5F) && (fp->status_vars.masterhand.yubideppou.bullet_count != 3))
            {
                wpMasterHand_YubiBulletTriple_MakeWeapon(fighter_gobj, &pos);
            }
            else
            {
                wpMasterHand_YubiBulletSingle_MakeWeapon(fighter_gobj, &pos);
            }
        }
    }
    if (fp->fighter_vars.masterhand.boss->wait_div == 1.5F)
    {
        ftMasterHand_Yubideppou2_UpdatePosition(fighter_gobj);
    }
}

// 0x8015A538
void ftMasterHand_Yubideppou3_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;
    Vec3f pos;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Yubideppou3, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.yubideppou.bullet_count++;

    pos.x = 0.0F;
    pos.y = 0.0F;
    pos.z = 0.0F;

    func_ovl2_800EDF24(fp->joint[15], &pos);

    if ((fp->fighter_vars.masterhand.boss->wait_div == 1.5F) && (fp->status_vars.masterhand.yubideppou.bullet_count != 3))
    {
        wpMasterHand_YubiBulletTriple_MakeWeapon(fighter_gobj, &pos);
    }
    else
    {
        wpMasterHand_YubiBulletSingle_MakeWeapon(fighter_gobj, &pos);
    }
    fp->status_vars.masterhand.yubideppou.shoot_timer = 4;
}
