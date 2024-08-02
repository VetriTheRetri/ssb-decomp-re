#include <ft/fighter.h>

// 0x800D87D0
void ftPhysicsSetGroundVelTransferAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x = ((fp->lr * fp->coll_data.ground_angle.y * fp->phys_info.vel_ground.x) + fp->phys_info.vel_jostle_x);
    fp->phys_info.vel_air.y = (fp->lr * -fp->coll_data.ground_angle.x * fp->phys_info.vel_ground.x);
    fp->phys_info.vel_air.z = fp->phys_info.vel_jostle_z;

    if 
    (
        (fp->phys_info.vel_jostle_z > 0.0F)                                                 &&
        (DObjGetStruct(fighter_gobj)->translate.vec.f.z < 0.0F)                             &&
        ((DObjGetStruct(fighter_gobj)->translate.vec.f.z + fp->phys_info.vel_air.z) > 0.0F) ||
        (fp->phys_info.vel_air.z < 0.0F)                                                    &&
        (DObjGetStruct(fighter_gobj)->translate.vec.f.z > 0.0F)                             &&
        ((DObjGetStruct(fighter_gobj)->translate.vec.f.z + fp->phys_info.vel_air.z) < 0.0F)
    )
    {
        fp->phys_info.vel_air.z = -DObjGetStruct(fighter_gobj)->translate.vec.f.z;
    }
    if ((fp->phys_info.vel_air.z > 0.0F) && ((DObjGetStruct(fighter_gobj)->translate.vec.f.z + fp->phys_info.vel_air.z) > 60.0F))
    {
        fp->phys_info.vel_air.z = (60.0F - DObjGetStruct(fighter_gobj)->translate.vec.f.z);
    }
    else if (fp->phys_info.vel_air.z < 0.0F)
    {
        if ((DObjGetStruct(fighter_gobj)->translate.vec.f.z + fp->phys_info.vel_air.z) < -60.0F)
        {
            fp->phys_info.vel_air.z = (-60.0F - DObjGetStruct(fighter_gobj)->translate.vec.f.z);
        }
    }
    fp->phys_info.vel_air.z += fp->phys_info.vel_ground.z;
}

// 0x800D8938
void ftPhysicsClampGroundVel(ftStruct *fp, f32 clamp)
{
    if (fp->phys_info.vel_ground.x < -clamp)
    {
        fp->phys_info.vel_ground.x = -clamp;
    }
    else if (fp->phys_info.vel_ground.x > clamp)
    {
        fp->phys_info.vel_ground.x = clamp;
    }
}

// 0x800D8978
void ftPhysicsSetGroundVelFriction(ftStruct *fp, f32 friction)
{
    if (fp->phys_info.vel_ground.x < 0.0F)
    {
        fp->phys_info.vel_ground.x += friction;

        if (fp->phys_info.vel_ground.x > 0.0F)
        {
            fp->phys_info.vel_ground.x = 0.0F;
        }
    }
    else
    {
        fp->phys_info.vel_ground.x -= friction;

        if (fp->phys_info.vel_ground.x < 0.0F)
        {
            fp->phys_info.vel_ground.x = 0.0F;
        }
    }
}

// 0x800D89E0
void ftPhysicsApplyClampGroundVelStickRange(ftStruct *fp, s32 stick_x_min, f32 vel, f32 clamp)
{
    if (ABS(fp->input.pl.stick_range.x) >= stick_x_min)
    {
        fp->phys_info.vel_ground.x += (fp->input.pl.stick_range.x * vel * fp->lr);

        if (fp->phys_info.vel_ground.x < -clamp)
        {
            fp->phys_info.vel_ground.x = -clamp;
        }
        else if (fp->phys_info.vel_ground.x > clamp)
        {
            fp->phys_info.vel_ground.x = clamp;
        }
    }
}

// 0x800D8A70
void ftPhysicsSetGroundVelAbsStickRange(ftStruct *fp, f32 vel, f32 friction)
{
    f32 v = ABS(fp->input.pl.stick_range.x) * vel;

    if (fp->phys_info.vel_ground.x < v)
    {
        fp->phys_info.vel_ground.x = v;
    }
    else
    {
        fp->phys_info.vel_ground.x -= friction;

        if (fp->phys_info.vel_ground.x < v)
        {
            fp->phys_info.vel_ground.x = v;
        }
    }
}

// 0x800D8ADC
void ftPhysicsSetGroundVelStickRange(ftStruct *fp, f32 vel, f32 friction)
{
    f32 v = fp->input.pl.stick_range.x * vel * fp->lr;

    if (fp->phys_info.vel_ground.x >= 0.0F)
    {
        if (fp->phys_info.vel_ground.x < v)
        {
            fp->phys_info.vel_ground.x = v;
        }
        else
        {
            fp->phys_info.vel_ground.x -= friction;

            if (fp->phys_info.vel_ground.x < v)
            {
                fp->phys_info.vel_ground.x = v;
            }
        }
    }
    else
    {
        if (fp->phys_info.vel_ground.x > v)
        {
            fp->phys_info.vel_ground.x = v;
        }
        else
        {
            fp->phys_info.vel_ground.x += friction;

            if (v < fp->phys_info.vel_ground.x)
            {
                fp->phys_info.vel_ground.x = v;
            }
        }
    }
}

// 0x800D8B94
void ftPhysicsApplyGroundVelTransferAir(GObj *fighter_gobj)
{
    ftPhysicsSetGroundVelTransferAir(fighter_gobj);
}

// 0x800D8BB4
void ftPhysicsApplyGroundVelFriction(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysicsSetGroundVelFriction(fp, dMPCollisionMaterialFrictions[fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK] * attributes->traction);
    ftPhysicsSetGroundVelTransferAir(fighter_gobj);
}

// 0x800D8C14
void ftPhysicsApplyGroundVelTransN(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_ground.x = ((fp->joint[nFTPartsJointTransN]->translate.vec.f.z - fp->anim_vel.z) * DObjGetStruct(fighter_gobj)->scale.vec.f.z);
    fp->phys_info.vel_ground.z = ((fp->joint[nFTPartsJointTransN]->translate.vec.f.x - fp->anim_vel.x) * -fp->lr * DObjGetStruct(fighter_gobj)->scale.vec.f.x);

    if ((fp->lr * DObjGetStruct(fighter_gobj)->rotate.vec.f.y) < 0.0F)
    {
        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
        fp->phys_info.vel_ground.z = -fp->phys_info.vel_ground.z;
    }
    ftPhysicsSetGroundVelTransferAir(fighter_gobj);
}

// 0x800D8CCC
void ftPhysicsApplyGroundFrictionOrTransN(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->anim_flags.flags.is_use_transn_joint)
    {
        ftPhysicsApplyGroundVelTransN(fighter_gobj);
    }
    else ftPhysicsApplyGroundVelFriction(fighter_gobj);
}

// 0x800D8D10
void ftPhysicsClampAirVelY(ftStruct *fp, f32 clamp)
{
    if (fp->phys_info.vel_air.y > clamp)
    {
        fp->phys_info.vel_air.y = clamp;
    }
}

// 0x800D8D34
void ftPhysicsAddClampAirVelY(ftStruct *fp, f32 vel, f32 clamp)
{
    fp->phys_info.vel_air.y += vel;

    if (fp->phys_info.vel_air.y > clamp)
    {
        fp->phys_info.vel_air.y = clamp;
    }
}

// 0x800D8D68
void ftPhysicsApplyGClampTVel(ftStruct *fp, f32 gravity, f32 t_vel)
{
    fp->phys_info.vel_air.y -= gravity;

    if (fp->phys_info.vel_air.y < -t_vel)
    {
        fp->phys_info.vel_air.y = -t_vel;
    }
}

// 0x800D8DA0
void ftPhysicsApplyFastFall(ftStruct *fp, ftAttributes *attributes)
{
    fp->phys_info.vel_air.y = -attributes->fast_fall_speed;
}

// 0x800D8DB0
void ftPhysicsCheckSetFastFall(ftStruct *fp)
{
    if (!(fp->is_fast_fall) && (fp->phys_info.vel_air.y < 0.0F) && (fp->input.pl.stick_range.y <= FTCOMMON_FASTFALL_STICK_RANGE_MIN) && (fp->tap_stick_y < FTCOMMON_FASTFALL_BUFFER_FRAMES_MAX))
    {
        fp->is_fast_fall = TRUE;

        fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

        if (ftParamCheckSetFighterColAnimID(fp->fighter_gobj, 8, 0) != FALSE)
        {
            ftMainRunUpdateColAnim(fp->fighter_gobj);
        }
    }
}

// 0x800D8E50
void ftPhysicsApplyGravityDefault(ftStruct *fp, ftAttributes *attributes)
{
    ftPhysicsApplyGClampTVel(fp, attributes->gravity, attributes->fall_speed_max);
}

// 0x800D8E78
void ftPhysicsClampAirVelX(ftStruct *fp, f32 clamp)
{
    if (fp->phys_info.vel_air.x < -clamp)
    {
        fp->phys_info.vel_air.x = -clamp;
    }
    else if (fp->phys_info.vel_air.x > clamp)
    {
        fp->phys_info.vel_air.x = clamp;
    }
}

// 0x800D8EB8
void ftPhysicsClampAirVelXMax(ftStruct *fp)
{
    ftPhysicsClampAirVelX(fp, fp->attributes->aerial_speed_max_x);
}

// 0x800D8EDC
sb32 ftPhysicsCheckClampAirVelXDec(ftStruct *fp, f32 clamp)
{
    if (ABSF(fp->phys_info.vel_air.x) > clamp)
    {
        fp->phys_info.vel_air.x += ((fp->phys_info.vel_air.x >= 0.0F) ? -1.0F : 1.0F);

        if (ABSF(fp->phys_info.vel_air.x) < clamp)
        {
            if (fp->phys_info.vel_air.x >= 0.0F)
            {
                fp->phys_info.vel_air.x = clamp;
            }
            else fp->phys_info.vel_air.x = -clamp;
        }
        return TRUE;
    }
    else return FALSE;
}

// 0x800D8FA8
sb32 ftPhysicsCheckClampAirVelXDecMax(ftStruct *fp, ftAttributes *attributes)
{
    return ftPhysicsCheckClampAirVelXDec(fp, attributes->aerial_speed_max_x);
}

// 0x800D8FC8
void ftPhysicsClampAirVelXStickRange(ftStruct *fp, s32 stick_range_min, f32 vel, f32 clamp)
{
    if (ABS(fp->input.pl.stick_range.x) >= stick_range_min)
    {
        fp->phys_info.vel_air.x += (fp->input.pl.stick_range.x * vel);

        if (fp->phys_info.vel_air.x < -clamp)
        {
            fp->phys_info.vel_air.x = -clamp;
        }
        else if (fp->phys_info.vel_air.x > clamp)
        {
            fp->phys_info.vel_air.x = clamp;
        }
    }
}

// 0x800D9044
void ftPhysicsClampAirVelXStickDefault(ftStruct *fp, ftAttributes *attributes)
{
    ftPhysicsClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration, attributes->aerial_speed_max_x);
}

// 0x800D9074
void ftPhysicsApplyAirVelXFriction(ftStruct *fp, ftAttributes *attributes)
{
    if (fp->phys_info.vel_air.x < 0.0F)
    {
        fp->phys_info.vel_air.x += attributes->aerial_friction;

        if (fp->phys_info.vel_air.x >= 0.0F)
        {
            fp->phys_info.vel_air.x = 0.0F;
        }
    }
    else
    {
        fp->phys_info.vel_air.x -= attributes->aerial_friction;

        if (fp->phys_info.vel_air.x <= 0.0F)
        {
            fp->phys_info.vel_air.x = 0.0F;
        }
    }
}

// 0x800D90E0
void ftPhysicsApplyAirVelDrift(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    (fp->is_fast_fall) ? ftPhysicsApplyFastFall(fp, attributes) : ftPhysicsApplyGravityDefault(fp, attributes);

    if (ftPhysicsCheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysicsClampAirVelXStickDefault(fp, attributes);
        ftPhysicsApplyAirVelXFriction(fp, attributes);
    }
}

// 0x800D9160
void ftPhysicsApplyAirVelDriftFastFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysicsCheckSetFastFall(fp);

    (fp->is_fast_fall) ? ftPhysicsApplyFastFall(fp, attributes) : ftPhysicsApplyGravityDefault(fp, attributes);

    if (ftPhysicsCheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysicsClampAirVelXStickDefault(fp, attributes);
        ftPhysicsApplyAirVelXFriction(fp, attributes);
    }
}

// 0x800D91EC
void ftPhysicsApplyAirVelFriction(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    (fp->is_fast_fall) ? ftPhysicsApplyFastFall(fp, attributes) : ftPhysicsApplyGravityDefault(fp, attributes);

    if (ftPhysicsCheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysicsApplyAirVelXFriction(fp, attributes);
    }
}

// 0x800D9260
void ftPhysicsGetAirVelTransN(ftStruct *fp, f32 *z, f32 *y, f32 *x) // Ness / Yoshi double jump physics
{
    DObj *topn_joint = fp->joint[nFTPartsJointTopN];
    DObj *transn_joint = fp->joint[nFTPartsJointTransN];
    f32 anim_vel_z = (transn_joint->translate.vec.f.z - fp->anim_vel.z) * fp->lr * topn_joint->scale.vec.f.z;
    f32 anim_vel_y = (transn_joint->translate.vec.f.y - fp->anim_vel.y) * topn_joint->scale.vec.f.y;
    f32 cos = cosf(transn_joint->rotate.vec.f.z);
    f32 sin = __sinf(transn_joint->rotate.vec.f.z);

    if (z != NULL)
    {
        *z = (anim_vel_z * cos) - (anim_vel_y * sin);
    }
    if (y != NULL)
    {
        *y = (anim_vel_z * sin) + (anim_vel_y * cos);
    }
    if (x != NULL)
    {
        *x = (transn_joint->translate.vec.f.x - fp->anim_vel.x) * -fp->lr * topn_joint->scale.vec.f.x;
    }
}

// 0x800D938C
void ftPhysicsSetAirVelTransN(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *topn_joint = fp->joint[nFTPartsJointTopN];
    DObj *transn_joint = fp->joint[nFTPartsJointTransN];

    fp->phys_info.vel_air.x = (transn_joint->translate.vec.f.x - fp->anim_vel.x) * topn_joint->scale.vec.f.x;
    fp->phys_info.vel_air.y = (transn_joint->translate.vec.f.y - fp->anim_vel.y) * topn_joint->scale.vec.f.y;
    fp->phys_info.vel_air.z = (transn_joint->translate.vec.f.z - fp->anim_vel.z) * topn_joint->scale.vec.f.z;
}

// 0x800D93E4
void ftPhysicsApplyAirVelTransNAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysicsGetAirVelTransN(fp, &fp->phys_info.vel_air.x, &fp->phys_info.vel_air.y, &fp->phys_info.vel_air.z);
}

// 0x800D9414
void ftPhysicsApplyAirVelTransNYZ(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysicsGetAirVelTransN(fp, NULL, &fp->phys_info.vel_air.y, &fp->phys_info.vel_air.z);
}

// 0x800D9444
void ftPhysicsStopVelAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;

    fp->phys_info.vel_ground.x = fp->phys_info.vel_ground.y = fp->phys_info.vel_ground.z = 0.0F;

    fp->phys_info.vel_damage_air.x = fp->phys_info.vel_damage_air.y = fp->phys_info.vel_damage_air.z = 0.0F;

    fp->phys_info.vel_damage_ground = 0.0F;
}