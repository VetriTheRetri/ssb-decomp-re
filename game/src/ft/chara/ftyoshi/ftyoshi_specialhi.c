#include <ft/fighter.h>
#include <wp/weapon.h>

// 0x8015E980
void ftYoshiSpecialHiProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.yoshi.specialhi.egg_gobj != NULL)
    {
        wpMainDestroyWeapon(fp->status_vars.yoshi.specialhi.egg_gobj);
    }
}

// 0x8015E9B0
void ftYoshiSpecialHiGetEggPosition(ftStruct *fp, Vec3f *pos)
{
    pos->x = 0.0F;
    pos->y = 0.0F;
    pos->z = 0.0F;

    ftParts_GetDObjWorldPosition(fp->joint[FTYOSHI_EGG_THROW_JOINT], pos);
}

// 0x8015E9E0
void ftYoshiSpecialHiUpdateEggVectors(ftStruct *fp)
{
    Vec3f pos;

    if (fp->status_vars.yoshi.specialhi.egg_gobj != NULL)
    {
        ftYoshiSpecialHiGetEggPosition(fp, &pos);

        DObjGetStruct(fp->status_vars.yoshi.specialhi.egg_gobj)->translate.vec.f = pos;

        DObjGetStruct(fp->status_vars.yoshi.specialhi.egg_gobj)->scale.vec.f = fp->joint[FTYOSHI_EGG_THROW_JOINT]->scale.vec.f;
    }
}

// 0x8015EA5C
void ftYoshiSpecialHiUpdateEggVars(GObj *fighter_gobj)
{
    wpStruct *wp;
    Vec3f pos;
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag2 == 2)
    {
        fp->command_vars.flags.flag2 = 0;

        if (fp->status_vars.yoshi.specialhi.egg_gobj != NULL)
        {
            wp = wpGetStruct(fp->status_vars.yoshi.specialhi.egg_gobj);

            wp->weapon_vars.egg_throw.is_throw = TRUE;
            wp->weapon_vars.egg_throw.throw_force = fp->status_vars.yoshi.specialhi.throw_force;
            wp->weapon_vars.egg_throw.stick_range = fp->input.pl.stick_range.x;

            wpMap_RunCollisionDefault(fp->status_vars.yoshi.specialhi.egg_gobj, fp->coll_data.p_translate, &fp->coll_data);

            fp->status_vars.yoshi.specialhi.egg_gobj = NULL;
        }
        fp->command_vars.flags.flag1 = 1;
    }
    else if (fp->command_vars.flags.flag2 == 1)
    {
        fp->command_vars.flags.flag2 = 0;

        ftYoshiSpecialHiGetEggPosition(fp, &pos);

        fp->status_vars.yoshi.specialhi.egg_gobj = wpYoshiEggThrowMakeWeapon(fighter_gobj, &pos);
    }
}

// 0x8015EB0C
void ftYoshiSpecialHiUpdateEggThrowForce(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_hold & fp->input.button_mask_b)
    {
        fp->status_vars.yoshi.specialhi.throw_force++;
    }
}

// 0x8015EB38
void ftYoshiSpecialHiProcUpdate(GObj *fighter_gobj)
{
    ftYoshiSpecialHiUpdateEggThrowForce(fighter_gobj);
    ftYoshiSpecialHiUpdateEggVars(fighter_gobj);
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Wait_SetStatus);
}

// 0x8015EB70
void ftYoshiSpecialAirHiProcUpdate(GObj *fighter_gobj)
{
    ftYoshiSpecialHiUpdateEggThrowForce(fighter_gobj);
    ftYoshiSpecialHiUpdateEggVars(fighter_gobj);
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Fall_SetStatus);
}

// 0x8015EBA8
void ftYoshiSpecialHiProcPhysics(GObj *fighter_gobj)
{
    ftYoshiSpecialHiUpdateEggVectors(ftGetStruct(fighter_gobj));
    ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x8015EBD4
void ftYoshiSpecialAirHiProcPhysics(GObj *fighter_gobj)
{
    ftYoshiSpecialHiUpdateEggVectors(ftGetStruct(fighter_gobj));
    ftPhysics_ApplyAirVelFriction(fighter_gobj);
}

// 0x8015EC00
void ftYoshiSpecialAirHiSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Yoshi_SpecialHi, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_GFX_PRESERVE);

    fp->proc_damage = ftYoshiSpecialHiProcDamage;
}

// 0x8015EC54
void ftYoshiSpecialHiSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Yoshi_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_GFX_PRESERVE);

    fp->proc_damage = ftYoshiSpecialHiProcDamage;

    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8015ECAC
void ftYoshiSpecialHiProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftYoshiSpecialHiSwitchStatusAir);
}

// 0x8015ECD0
void ftYoshiSpecialAirHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftYoshiSpecialAirHiSwitchStatusGround);
    }
    else mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftYoshiSpecialAirHiSwitchStatusGround);
}

// 0x8015ED18
void ftYoshiSpecialHiInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = ftYoshiSpecialHiProcDamage;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->status_vars.yoshi.specialhi.egg_gobj = NULL;
    fp->status_vars.yoshi.specialhi.throw_force = 0;
}

// 0x8015ED3C
void ftYoshiSpecialHiSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Yoshi_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftYoshiSpecialHiInitStatusVars(fighter_gobj);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8015ED7C
void ftYoshiSpecialAirHiSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Yoshi_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftYoshiSpecialHiInitStatusVars(fighter_gobj);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}
