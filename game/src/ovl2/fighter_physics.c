#include <ft/fighter.h>

void func_ovl2_800D87D0(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x = ((fp->lr * fp->coll_data.ground_angle.y * fp->phys_info.vel_ground.x) + fp->phys_info.vel_jostle_x);
    fp->phys_info.vel_air.y = (fp->lr * -fp->coll_data.ground_angle.x * fp->phys_info.vel_ground.x);
    fp->phys_info.vel_air.z = fp->phys_info.vel_jostle_z;

    if ((fp->phys_info.vel_jostle_z > 0.0F)                                                 &&
    (DObjGetStruct(fighter_gobj)->translate.z < 0.0F)                                       &&
    ((DObjGetStruct(fighter_gobj)->translate.z + fp->phys_info.vel_air.z) > 0.0F)           ||
    (fp->phys_info.vel_air.z < 0.0F) && (DObjGetStruct(fighter_gobj)->translate.z > 0.0F)   &&
    ((DObjGetStruct(fighter_gobj)->translate.z + fp->phys_info.vel_air.z) < 0.0F))
    {
        fp->phys_info.vel_air.z = -DObjGetStruct(fighter_gobj)->translate.z;
    }
    if ((fp->phys_info.vel_air.z > 0.0F) && ((DObjGetStruct(fighter_gobj)->translate.z + fp->phys_info.vel_air.z) > 60.0F))
    {
        fp->phys_info.vel_air.z = (60.0F - DObjGetStruct(fighter_gobj)->translate.z);
    }
    else if (fp->phys_info.vel_air.z < 0.0F)
    {
        if ((DObjGetStruct(fighter_gobj)->translate.z + fp->phys_info.vel_air.z) < -60.0F)
        {
            fp->phys_info.vel_air.z = (-60.0F - DObjGetStruct(fighter_gobj)->translate.z);
        }
    }
    fp->phys_info.vel_air.z += fp->phys_info.vel_ground.z;
}

void func_ovl2_800D8938(ftStruct *fp, f32 arg1)
{
    if (fp->phys_info.vel_ground.x < -arg1)
    {
        fp->phys_info.vel_ground.x = -arg1;
    }
    else if (arg1 < fp->phys_info.vel_ground.x)
    {
        fp->phys_info.vel_ground.x = arg1;
    }
}

void func_ovl2_800D8978(ftStruct *fp, f32 friction)
{
    if (fp->phys_info.vel_ground.x < 0.0F)
    {
        fp->phys_info.vel_ground.x = fp->phys_info.vel_ground.x + friction;

        if (fp->phys_info.vel_ground.x > 0.0F)
        {
            fp->phys_info.vel_ground.x = 0.0F;
        }
    }
    else
    {
        fp->phys_info.vel_ground.x = fp->phys_info.vel_ground.x - friction;

        if (fp->phys_info.vel_ground.x < 0.0F)
        {
            fp->phys_info.vel_ground.x = 0.0F;
        }
    }
}

void func_ovl2_800D89E0(ftStruct *fp, s32 stick_x_min, f32 vel, f32 clamp)
{
    if (ABS(fp->input.pl.stick_range.x) >= stick_x_min)
    {
        fp->phys_info.vel_ground.x += (fp->input.pl.stick_range.x * vel * fp->lr);

        if (fp->phys_info.vel_ground.x < -clamp)
        {
            fp->phys_info.vel_ground.x = -clamp;
        }
        else if (clamp < fp->phys_info.vel_ground.x)
        {
            fp->phys_info.vel_ground.x = clamp;
        }
    }
}

void func_ovl2_800D8A70(ftStruct *fp, f32 vel, f32 friction)
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

void func_ovl2_800D8ADC(ftStruct *fp, f32 vel, f32 friction)
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

void jtgt_ovl2_800D8B94(GObj *fighter_gobj)
{
    func_ovl2_800D87D0(fighter_gobj);
}

extern f32 D_ovl2_8012C4E0[16] = { 4.0F, 3.0F, 3.0F, 1.0F, 2.0F, 2.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F };

void func_ovl2_800D8BB4(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    func_ovl2_800D8978(fp, D_ovl2_8012C4E0[fp->coll_data.ground_flags & 0xFFFF00FF] * attributes->traction);
    func_ovl2_800D87D0(fighter_gobj);
}

void func_ovl2_800D8C14(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_ground.x = ((fp->joint[ftParts_TransN_Joint]->translate.z - fp->anim_vel.z) * DObjGetStruct(fighter_gobj)->scale.z);
    fp->phys_info.vel_ground.z = ((fp->joint[ftParts_TransN_Joint]->translate.x - fp->anim_vel.x) * -fp->lr * DObjGetStruct(fighter_gobj)->scale.x);

    if ((fp->lr * DObjGetStruct(fighter_gobj)->rotate.y) < 0.0F)
    {
        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
        fp->phys_info.vel_ground.z = -fp->phys_info.vel_ground.z;
    }
    func_ovl2_800D87D0(fighter_gobj);
}

void jtgt_ovl2_800D8CCC(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->anim_flags.flags.is_use_transn_joint)
    {
        func_ovl2_800D8C14(fighter_gobj);
    }
    else func_ovl2_800D8BB4(fighter_gobj);
}

void func_ovl2_800D8D10(ftStruct *fp, f32 clamp)
{
    if (clamp < fp->phys_info.vel_air.y)
    {
        fp->phys_info.vel_air.y = clamp;
    }
}

void func_ovl2_800D8D34(ftStruct *fp, f32 vel, f32 clamp)
{
    fp->phys_info.vel_air.y += vel;

    if (clamp < fp->phys_info.vel_air.y)
    {
        fp->phys_info.vel_air.y = clamp;
    }
}

void func_ovl2_800D8D68(ftStruct *fp, f32 gravity, f32 t_vel)
{
    fp->phys_info.vel_air.y -= gravity;

    if (fp->phys_info.vel_air.y < -t_vel)
    {
        fp->phys_info.vel_air.y = -t_vel;
    }
}

void func_ovl2_800D8DA0(ftStruct *fp, ftAttributes *attributes)
{
    fp->phys_info.vel_air.y = -attributes->fast_fall_speed;
}

void func_ovl2_800D8DB0(ftStruct *fp)
{
    if (!(fp->is_fast_fall) && (fp->phys_info.vel_air.y < 0.0F) && (fp->input.pl.stick_range.y <= FTCOMMON_FALL_FAST_STICK_RANGE_MIN) && (fp->tap_stick_y < FTCOMMON_FALL_FAST_BUFFER_FRAMES_MAX))
    {
        fp->is_fast_fall = TRUE;

        fp->tap_stick_y = U8_MAX - 1;

        if (ftColor_CheckSetColAnimIndex(fp->fighter_gobj, 8, 0) != FALSE)
        {
            ftCommon_UpdateColAnim(fp->fighter_gobj);
        }
    }
}

void func_ovl2_800D8E50(ftStruct *fp, ftAttributes *attributes)
{
    func_ovl2_800D8D68(fp, attributes->gravity, attributes->fall_speed_max);
}

void func_ovl2_800D8E78(ftStruct *fp, f32 clamp)
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

void func_ovl2_800D8EB8(ftStruct *fp)
{
    func_ovl2_800D8E78(fp, fp->attributes->aerial_speed_max_x);
}

bool32 func_ovl2_800D8EDC(ftStruct *fp, f32 clamp)
{
    if (ABSF(fp->phys_info.vel_air.x) > clamp)
    {
        fp->phys_info.vel_air.x += ((fp->phys_info.vel_air.x >= 0.0F) ? (f32)LEFT : (f32)RIGHT);

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

bool32 func_ovl2_800D8FA8(ftStruct *fp, ftAttributes *attributes)
{
    return func_ovl2_800D8EDC(fp, attributes->aerial_speed_max_x);
}

// 0x800D8FC8
void ftPhysics_ClampDriftStickRange(ftStruct *fp, s32 stick_range_min, f32 vel, f32 clamp)
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

void func_ovl2_800D9044(ftStruct *fp, ftAttributes *attributes)
{
    ftPhysics_ClampDriftStickRange(fp, 8, attributes->aerial_acceleration, attributes->aerial_speed_max_x);
}

void func_ovl2_800D9074(ftStruct *fp, ftAttributes *attributes)
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

void jtgt_ovl2_800D90E0(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    (fp->is_fast_fall) ? func_ovl2_800D8DA0(fp, attributes) : func_ovl2_800D8E50(fp, attributes);

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9044(fp, attributes);
        func_ovl2_800D9074(fp, attributes);
    }
}

void jtgt_ovl2_800D9160(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    func_ovl2_800D8DB0(fp);

    (fp->is_fast_fall) ? func_ovl2_800D8DA0(fp, attributes) : func_ovl2_800D8E50(fp, attributes);

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9044(fp, attributes);
        func_ovl2_800D9074(fp, attributes);
    }
}

void func_ovl2_800D91EC(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    (fp->is_fast_fall) ? func_ovl2_800D8DA0(fp, attributes) : func_ovl2_800D8E50(fp, attributes);

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9074(fp, attributes);
    }
}

void func_ovl2_800D9260(ftStruct *fp, f32 *z, f32 *y, f32 *x) // Ness / Yoshi double jump physics
{
    DObj *topn_joint = fp->joint[ftParts_TopN_Joint];
    DObj *transn_joint = fp->joint[ftParts_TransN_Joint];
    f32 anim_vel_z = (transn_joint->translate.z - fp->anim_vel.z) * fp->lr * topn_joint->scale.z;
    f32 anim_vel_y = (transn_joint->translate.y - fp->anim_vel.y) * topn_joint->scale.y;
    f32 cos = cosf(transn_joint->rotate.z);
    f32 sin = __sinf(transn_joint->rotate.z);

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
        *x = (transn_joint->translate.x - fp->anim_vel.x) * -fp->lr * topn_joint->scale.x;
    }
}

void func_ovl2_800D938C(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *topn_joint = fp->joint[ftParts_TopN_Joint];
    DObj *transn_joint = fp->joint[ftParts_TransN_Joint];

    fp->phys_info.vel_air.x = (transn_joint->translate.x - fp->anim_vel.x) * topn_joint->scale.x;
    fp->phys_info.vel_air.y = (transn_joint->translate.y - fp->anim_vel.y) * topn_joint->scale.y;
    fp->phys_info.vel_air.z = (transn_joint->translate.z - fp->anim_vel.z) * topn_joint->scale.z;
}

void func_ovl2_800D93E4(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800D9260(fp, &fp->phys_info.vel_air.x, &fp->phys_info.vel_air.y, &fp->phys_info.vel_air.z);
}

void jtgt_ovl2_800D9414(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800D9260(fp, NULL, &fp->phys_info.vel_air.y, &fp->phys_info.vel_air.z);
}

void func_ovl2_800D9444(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;

    fp->phys_info.vel_ground.x = fp->phys_info.vel_ground.y = fp->phys_info.vel_ground.z = 0.0F;

    fp->phys_info.vel_damage_air.x = fp->phys_info.vel_damage_air.y = fp->phys_info.vel_damage_air.z = 0.0F;

    fp->phys_info.vel_damage_ground = 0.0F;
}