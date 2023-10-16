#include <ft/fighter.h>

extern f32 ftMap_SurfaceMaterials_Friction[/* */];

// 0x800D87D0
void ftPhysics_SetGroundVelTransferAir(GObj *fighter_gobj)
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
void ftPhysics_ClampGroundVel(ftStruct *fp, f32 clamp)
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
void ftPhysics_SetGroundVelFriction(ftStruct *fp, f32 friction)
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
void ftPhysics_ApplyClampGroundVelStickRange(ftStruct *fp, s32 stick_x_min, f32 vel, f32 clamp)
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
void ftPhysics_SetGroundVelAbsStickRange(ftStruct *fp, f32 vel, f32 friction)
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
void ftPhysics_SetGroundVelStickRange(ftStruct *fp, f32 vel, f32 friction)
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
        if (v < fp->phys_info.vel_ground.x)
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
void ftPhysics_ApplyGroundVelTransferAir(GObj *fighter_gobj)
{
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x800D8BB4
void ftPhysics_ApplyGroundVelFriction(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysics_SetGroundVelFriction(fp, ftMap_SurfaceMaterials_Friction[fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK] * attributes->traction);
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x800D8C14
void ftPhysics_ApplyGroundVelTransN(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_ground.x = ((fp->joint[ftParts_Joint_TransN]->translate.vec.f.z - fp->anim_vel.z) * DObjGetStruct(fighter_gobj)->scale.vec.f.z);
    fp->phys_info.vel_ground.z = ((fp->joint[ftParts_Joint_TransN]->translate.vec.f.x - fp->anim_vel.x) * -fp->lr * DObjGetStruct(fighter_gobj)->scale.vec.f.x);

    if ((fp->lr * DObjGetStruct(fighter_gobj)->rotate.vec.f.y) < 0.0F)
    {
        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
        fp->phys_info.vel_ground.z = -fp->phys_info.vel_ground.z;
    }
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x800D8CCC
void ftPhysics_ApplyGroundFrictionOrTransN(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->anim_flags.flags.is_use_transn_joint)
    {
        ftPhysics_ApplyGroundVelTransN(fighter_gobj);
    }
    else ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x800D8D10
void ftPhysics_ClampAirVelY(ftStruct *fp, f32 clamp)
{
    if (fp->phys_info.vel_air.y > clamp)
    {
        fp->phys_info.vel_air.y = clamp;
    }
}

// 0x800D8D34
void ftPhysics_AddClampAirVelY(ftStruct *fp, f32 vel, f32 clamp)
{
    fp->phys_info.vel_air.y += vel;

    if (fp->phys_info.vel_air.y > clamp)
    {
        fp->phys_info.vel_air.y = clamp;
    }
}

// 0x800D8D68
void ftPhysics_ApplyGravityClampTVel(ftStruct *fp, f32 gravity, f32 t_vel)
{
    fp->phys_info.vel_air.y -= gravity;

    if (fp->phys_info.vel_air.y < -t_vel)
    {
        fp->phys_info.vel_air.y = -t_vel;
    }
}

// 0x800D8DA0
void ftPhysics_ApplyFastFall(ftStruct *fp, ftAttributes *attributes)
{
    fp->phys_info.vel_air.y = -attributes->fast_fall_speed;
}

// 0x800D8DB0
void ftPhysics_CheckSetFastFall(ftStruct *fp)
{
    if (!(fp->is_fast_fall) && (fp->phys_info.vel_air.y < 0.0F) && (fp->input.pl.stick_range.y <= FTCOMMON_FALL_FAST_STICK_RANGE_MIN) && (fp->tap_stick_y < FTCOMMON_FALL_FAST_BUFFER_FRAMES_MAX))
    {
        fp->is_fast_fall = TRUE;

        fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;

        if (ftColor_CheckSetColAnimIndex(fp->fighter_gobj, 8, 0) != FALSE)
        {
            ftMain_RunUpdateColAnim(fp->fighter_gobj);
        }
    }
}

// 0x800D8E50
void ftPhysics_ApplyGravityDefault(ftStruct *fp, ftAttributes *attributes)
{
    ftPhysics_ApplyGravityClampTVel(fp, attributes->gravity, attributes->fall_speed_max);
}

// 0x800D8E78
void ftPhysics_ClampAirVelX(ftStruct *fp, f32 clamp)
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
void ftPhysics_ClampAirVelXMax(ftStruct *fp)
{
    ftPhysics_ClampAirVelX(fp, fp->attributes->aerial_speed_max_x);
}

// 0x800D8EDC
sb32 ftPhysics_CheckClampAirVelXDec(ftStruct *fp, f32 clamp)
{
    if (ABSF(fp->phys_info.vel_air.x) > clamp)
    {
        fp->phys_info.vel_air.x += ((fp->phys_info.vel_air.x >= 0.0F) ? (f32)LR_Left : (f32)LR_Right);

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
sb32 ftPhysics_CheckClampAirVelXDecMax(ftStruct *fp, ftAttributes *attributes)
{
    return ftPhysics_CheckClampAirVelXDec(fp, attributes->aerial_speed_max_x);
}

// 0x800D8FC8
void ftPhysics_ClampAirVelXStickRange(ftStruct *fp, s32 stick_range_min, f32 vel, f32 clamp)
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
void ftPhysics_ClampAirVelXStickDefault(ftStruct *fp, ftAttributes *attributes)
{
    ftPhysics_ClampAirVelXStickRange(fp, 8, attributes->aerial_acceleration, attributes->aerial_speed_max_x);
}

// 0x800D9074
void ftPhysics_ApplyAirVelXFriction(ftStruct *fp, ftAttributes *attributes)
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
void ftPhysics_ApplyAirVelDrift(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    (fp->is_fast_fall) ? ftPhysics_ApplyFastFall(fp, attributes) : ftPhysics_ApplyGravityDefault(fp, attributes);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickDefault(fp, attributes);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x800D9160
void ftPhysics_ApplyAirVelDriftFastFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysics_CheckSetFastFall(fp);

    (fp->is_fast_fall) ? ftPhysics_ApplyFastFall(fp, attributes) : ftPhysics_ApplyGravityDefault(fp, attributes);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickDefault(fp, attributes);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x800D91EC
void ftPhysics_ApplyAirVelFriction(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    (fp->is_fast_fall) ? ftPhysics_ApplyFastFall(fp, attributes) : ftPhysics_ApplyGravityDefault(fp, attributes);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x800D9260
void ftPhysics_GetAirVelTransN(ftStruct *fp, f32 *z, f32 *y, f32 *x) // Ness / Yoshi double jump physics
{
    DObj *topn_joint = fp->joint[ftParts_Joint_TopN];
    DObj *transn_joint = fp->joint[ftParts_Joint_TransN];
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
void ftPhysics_SetAirVelTransN(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *topn_joint = fp->joint[ftParts_Joint_TopN];
    DObj *transn_joint = fp->joint[ftParts_Joint_TransN];

    fp->phys_info.vel_air.x = (transn_joint->translate.vec.f.x - fp->anim_vel.x) * topn_joint->scale.vec.f.x;
    fp->phys_info.vel_air.y = (transn_joint->translate.vec.f.y - fp->anim_vel.y) * topn_joint->scale.vec.f.y;
    fp->phys_info.vel_air.z = (transn_joint->translate.vec.f.z - fp->anim_vel.z) * topn_joint->scale.vec.f.z;
}

// 0x800D93E4
void ftPhysics_ApplyAirVelTransNAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_GetAirVelTransN(fp, &fp->phys_info.vel_air.x, &fp->phys_info.vel_air.y, &fp->phys_info.vel_air.z);
}

// 0x800D9414
void ftPhysics_ApplyAirVelTransNYZ(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_GetAirVelTransN(fp, NULL, &fp->phys_info.vel_air.y, &fp->phys_info.vel_air.z);
}

// 0x800D9444
void ftPhysics_StopVelAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;

    fp->phys_info.vel_ground.x = fp->phys_info.vel_ground.y = fp->phys_info.vel_ground.z = 0.0F;

    fp->phys_info.vel_damage_air.x = fp->phys_info.vel_damage_air.y = fp->phys_info.vel_damage_air.z = 0.0F;

    fp->phys_info.vel_damage_ground = 0.0F;
}