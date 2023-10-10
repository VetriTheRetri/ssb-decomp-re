#include <ft/fighter.h>
#include <wp/weapon.h>

// 0x8015E980
void ftYoshi_SpecialHi_ProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.yoshi.specialhi.egg_gobj != NULL)
    {
        wpMain_DestroyWeapon(fp->status_vars.yoshi.specialhi.egg_gobj);
    }
}

// 0x8015E9B0
void ftYoshi_SpecialHi_GetEggPosition(ftStruct *fp, Vec3f *pos)
{
    pos->x = 0.0F;
    pos->y = 0.0F;
    pos->z = 0.0F;

    ftParts_GetDObjWorldPosition(fp->joint[FTYOSHI_EGG_THROW_JOINT], pos);
}

// 0x8015E9E0
void ftYoshi_SpecialHi_UpdateEggVectors(ftStruct *fp)
{
    Vec3f pos;

    if (fp->status_vars.yoshi.specialhi.egg_gobj != NULL)
    {
        ftYoshi_SpecialHi_GetEggPosition(fp, &pos);

        DObjGetStruct(fp->status_vars.yoshi.specialhi.egg_gobj)->translate.vec.f = pos;

        DObjGetStruct(fp->status_vars.yoshi.specialhi.egg_gobj)->scale.vec.f = fp->joint[FTYOSHI_EGG_THROW_JOINT]->scale.vec.f;
    }
}

// 0x8015EA5C
void ftYoshi_SpecialHi_UpdateEggVars(GObj *fighter_gobj)
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

        ftYoshi_SpecialHi_GetEggPosition(fp, &pos);

        fp->status_vars.yoshi.specialhi.egg_gobj = wpYoshi_EggThrow_MakeWeapon(fighter_gobj, &pos);
    }
}

// 0x8015EB0C
void ftYoshi_SpecialHi_UpdateEggThrowForce(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_hold & fp->input.button_mask_b)
    {
        fp->status_vars.yoshi.specialhi.throw_force++;
    }
}

// 0x8015EB38
void ftYoshi_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    ftYoshi_SpecialHi_UpdateEggThrowForce(fighter_gobj);
    ftYoshi_SpecialHi_UpdateEggVars(fighter_gobj);
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Wait_SetStatus);
}

// 0x8015EB70
void ftYoshi_SpecialAirHi_ProcUpdate(GObj *fighter_gobj)
{
    ftYoshi_SpecialHi_UpdateEggThrowForce(fighter_gobj);
    ftYoshi_SpecialHi_UpdateEggVars(fighter_gobj);
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Fall_SetStatus);
}

// 0x8015EBA8
void ftYoshi_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftYoshi_SpecialHi_UpdateEggVectors(ftGetStruct(fighter_gobj));
    ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x8015EBD4
void ftYoshi_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftYoshi_SpecialHi_UpdateEggVectors(ftGetStruct(fighter_gobj));
    ftPhysics_ApplyAirVelFriction(fighter_gobj);
}

// 0x8015EC00
void ftYoshi_SpecialAirHi_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Yoshi_SpecialHi, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_GFX_PRESERVE);

    fp->proc_damage = ftYoshi_SpecialHi_ProcDamage;
}

// 0x8015EC54
void ftYoshi_SpecialHi_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Yoshi_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_GFX_PRESERVE);

    fp->proc_damage = ftYoshi_SpecialHi_ProcDamage;

    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8015ECAC
void ftYoshi_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftYoshi_SpecialHi_SwitchStatusAir);
}

// 0x8015ECD0
void ftYoshi_SpecialAirHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftYoshi_SpecialAirHi_SwitchStatusGround);
    }
    else mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftYoshi_SpecialAirHi_SwitchStatusGround);
}

// 0x8015ED18
void ftYoshi_SpecialHi_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = ftYoshi_SpecialHi_ProcDamage;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->status_vars.yoshi.specialhi.egg_gobj = NULL;
    fp->status_vars.yoshi.specialhi.throw_force = 0;
}

// 0x8015ED3C
void ftYoshi_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Yoshi_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftYoshi_SpecialHi_InitStatusVars(fighter_gobj);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8015ED7C
void ftYoshi_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Yoshi_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftYoshi_SpecialHi_InitStatusVars(fighter_gobj);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}
