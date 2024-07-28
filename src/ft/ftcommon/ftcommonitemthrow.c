#include <ft/fighter.h>
#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

// 0x8012C9E0
extern ftItemThrow dFTCommonItemThrowDescs[/* */];

/*
{
    // LightThrowDrop
    {
        FALSE,  // Is Smash throw?
        36,     // Velocity
        110,    // Angle
        50      // Damage Multiplier %
    },

    // LightThrowDash
    {
        FALSE,  // Is Smash throw?
        120,    // Velocity
        10,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowF
    {
        FALSE,  // Is Smash throw?
        60,     // Velocity
        15,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowB
    {
        FALSE,  // Is Smash throw?
        60,     // Velocity
        15,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowHi
    {
        FALSE,  // Is Smash throw?
        65,     // Velocity
        90,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowLw
    {
        FALSE,  // Is Smash throw?
        65,     // Velocity
        -70,    // Angle
        100     // Damage Multiplier %
    },

    // LightThrowF4
    {
        TRUE,   // Is Smash throw?
        110,    // Velocity
        8,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowB4
    {
        TRUE,   // Is Smash throw?
        110,    // Velocity
        8,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowHi4
    {
        TRUE,   // Is Smash throw?
        110,    // Velocity
        90,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowLw4
    {
       TRUE,   // Is Smash throw?
       110,    // Velocity
       -70,    // Angle
       100     // Damage Multiplier %
    },

    // LightThrowAirF
    {
        FALSE,  // Is Smash throw?
        75,     // Velocity
        8,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirB
    {
        FALSE,  // Is Smash throw?
        75,     // Velocity
        8,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirHi
    {
        FALSE,  // Is Smash throw?
        80,     // Velocity
        90,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirLw
    {
        FALSE,  // Is Smash throw?
        75,     // Velocity
        -90,    // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirF4
    {
        TRUE,   // Is Smash throw?
        120,    // Velocity
        7,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirB4
    {
        TRUE,   // Is Smash throw?
        120,    // Velocity
        7,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirHi4
    {
        TRUE,   // Is Smash throw?
        120,    // Velocity
        90,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirLw4
    {
        TRUE,   // Is Smash throw?
        140,    // Velocity
        -90,    // Angle
        100     // Damage Multiplier %
    },

    // HeavyThrowF
    {
        FALSE,  // Is Smash throw?
        70,     // Velocity
        60,     // Angle
        100     // Damage Multiplier %
    },

    // HeavyThrowB
    {
        FALSE,  // Is Smash throw?
        70,     // Velocity
        60,     // Angle
        100     // Damage Multiplier %
    },

    // HeavyThrowF4
    {
        TRUE,   // Is Smash throw?
        90,     // Velocity
        14,     // Angle
        100     // Damage Multiplier %
    },

    // HeavyThrowB4
    {
        TRUE,   // Is Smash throw?
        90,     // Velocity
        14,     // Angle
        100     // Damage Multiplier %
    }
};
*/

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801462A0
void ftCommonItemThrowUpdateModelPitch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag3 != 0)
    {
        fp->status_vars.common.itemthrow.turn_rotate_step =
        fp->status_vars.common.itemthrow.turn_frames = fp->command_vars.flags.flag3;

        fp->status_vars.common.itemthrow.turn_invert_lr_wait = fp->command_vars.flags.flag3 / 2;

        fp->command_vars.flags.flag3 = 0;
    }

    if (fp->status_vars.common.itemthrow.turn_frames != 0)
    {
        fp->status_vars.common.itemthrow.turn_frames--;

        if (fp->status_vars.common.itemthrow.turn_invert_lr_wait != 0)
        {
            fp->status_vars.common.itemthrow.turn_invert_lr_wait--;

            if (fp->status_vars.common.itemthrow.turn_invert_lr_wait == 0)
            {
                fp->lr = -fp->lr;
            }
        }
        fp->joint[nFTPartsJointTopN]->rotate.vec.f.y -= F_CLC_DTOR32(180.0F / fp->status_vars.common.itemthrow.turn_rotate_step);

        func_ovl2_800EB528(fp->joint[nFTPartsJointTopN]);
    }
}

// 0x8014634C
void ftCommonItemThrowProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 vel_base;
    ftItemThrow *item_throw_desc;
    f32 damage_mul;
    Vec3f vel;
    s32 status_id;
    s32 angle;

    ftCommonItemThrowUpdateModelPitch(fighter_gobj);

    if (fp->command_vars.flags.flag2 != 0)
    {
        fp->status_vars.common.itemthrow.throw_vel = F_PCT_TO_DEC(fp->command_vars.item_throw.vel);
        fp->status_vars.common.itemthrow.throw_angle = fp->command_vars.item_throw.angle;

        fp->command_vars.flags.flag2 = 0;
    }
    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->status_vars.common.itemthrow.throw_damage = F_PCT_TO_DEC(fp->command_vars.item_throw.damage);

        fp->command_vars.flags.flag1 = 0;
    }
    if ((fp->item_hold != NULL) && (fp->command_vars.item_throw.is_throw_item != FALSE))
    {
        if 
        (

            (fp->ft_kind == nFTKindDonkey || fp->ft_kind == nFTKindPolyDonkey || fp->ft_kind == nFTKindGiantDonkey)

                                                                    &&

            (fp->status_info.status_id >= nFTDonkeyStatusHeavyThrowStart && fp->status_info.status_id <= nFTDonkeyStatusHeavyThrowEnd)

        )
        {
            status_id = fp->status_info.status_id - nFTCommonStatusHeavyThrow4Start;
        }
        else status_id = fp->status_info.status_id;

        vel_base = dFTCommonItemThrowDescs[status_id - nFTCommonStatusLightThrowStart].velocity * fp->status_vars.common.itemthrow.throw_vel * fp->attributes->item_throw_vel * 0.01F;

        if (fp->status_vars.common.itemthrow.throw_angle == 361)
        {
            angle = dFTCommonItemThrowDescs[status_id - nFTCommonStatusLightThrowStart].angle;
        }
        else angle = fp->status_vars.common.itemthrow.throw_angle;

        damage_mul = dFTCommonItemThrowDescs[status_id - nFTCommonStatusLightThrowStart].damage * 0.01F * fp->status_vars.common.itemthrow.throw_damage * fp->attributes->item_throw_mul * 0.01F;

        vel.x = __cosf(F_CLC_DTOR32(angle)) * vel_base * fp->lr;
        vel.y = __sinf(F_CLC_DTOR32(angle)) * vel_base;
        vel.z = 0.0F;

        if (status_id == nFTCommonStatusLightThrowDrop)
        {
            itMainSetFighterDrop(fp->item_hold, &vel, damage_mul);
        }
        else itMainSetFighterThrow(fp->item_hold, &vel, damage_mul, dFTCommonItemThrowDescs[status_id - nFTCommonStatusLightThrowStart].is_smash_throw);

        fp->command_vars.flags.flag0 = 0;
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftMap_SetStatusWaitOrFall(fighter_gobj);
    }
}

// 0x80146618
void ftCommonItemThrowProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsAir)
    {
        ftPhysics_ApplyAirVelDrift(fighter_gobj);
    }
    else ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x8014665C
void ftCommonItemThrowInitCommandVars(ftStruct *fp)
{
    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag3 = 0;
}

// 0x80146670
void ftCommonItemThrowInitStatusVars(ftStruct *fp)
{
    fp->status_vars.common.itemthrow.turn_frames = 0;
    fp->status_vars.common.itemthrow.throw_angle = 361;
    fp->status_vars.common.itemthrow.throw_vel = 1.0F;
    fp->status_vars.common.itemthrow.throw_damage = 1.0F;
}

// 0x80146690
void ftCommonItemThrowSetStatus(GObj *fighter_gobj, s32 status_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonItemThrowInitCommandVars(fp);

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    ftCommonItemThrowInitStatusVars(fp);
    ftCommonItemThrowUpdateModelPitch(fighter_gobj);
}

// 0x801466EC
void ftCommonLightThrowDecideSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_LIGHTTHROW4_STICK_RANGE_X_MIN) && (fp->hold_stick_x < FTCOMMON_LIGHTTHROW4_F_OR_B_BUFFER_FRAMES_MAX))
    {
        status_id = ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? nFTCommonStatusLightThrowF4 : nFTCommonStatusLightThrowB4;
    }
    else if ((fp->input.pl.stick_range.y >= FTCOMMON_LIGHTTHROW4_STICK_RANGE_Y_MIN) && (fp->hold_stick_y < (FTCOMMON_LIGHTTHROW4_HI_OR_LW_BUFFER_FRAMES_MAX + fp->attributes->kneebend_anim_length)))
    {
        status_id = nFTCommonStatusLightThrowHi4;
    }
    else if ((fp->input.pl.stick_range.y <= -FTCOMMON_LIGHTTHROW4_STICK_RANGE_Y_MIN) && (fp->hold_stick_y < FTCOMMON_LIGHTTHROW4_HI_OR_LW_BUFFER_FRAMES_MAX))
    {
        status_id = nFTCommonStatusLightThrowLw4;
    }
    else if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_LIGHTTHROW_STICK_RANGE_XY_MIN) && (((ftParamGetStickAngleRads(fp) < 0.0F) ? -ftParamGetStickAngleRads(fp) : ftParamGetStickAngleRads(fp)) <= FTCOMMON_LIGHTTHROW_HI_OR_LW_ANGLE))
    {
        status_id = ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? nFTCommonStatusLightThrowF : nFTCommonStatusLightThrowB;
    }
    else if ((fp->input.pl.stick_range.y >= FTCOMMON_LIGHTTHROW_STICK_RANGE_XY_MIN) && (ftParamGetStickAngleRads(fp) > FTCOMMON_LIGHTTHROW_HI_OR_LW_ANGLE))
    {
        status_id = nFTCommonStatusLightThrowHi;
    }
    else if ((fp->input.pl.stick_range.y <= -FTCOMMON_LIGHTTHROW_STICK_RANGE_XY_MIN) && (ftParamGetStickAngleRads(fp) < -FTCOMMON_LIGHTTHROW_HI_OR_LW_ANGLE))
    {
        status_id = nFTCommonStatusLightThrowLw; 
    }
    else status_id = (itGetStruct(fp->item_hold)->type == nITTypeThrow) ? nFTCommonStatusLightThrowF : nFTCommonStatusLightThrowDrop; // No NULL check

    ftCommonItemThrowSetStatus(fighter_gobj, status_id);
}

// 0x80146930
void ftCommonHeavyThrowDecideSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_HEAVYTHROW4_STICK_RANGE_X_MIN) && (fp->hold_stick_x < FTCOMMON_HEAVYTHROW4_F_OR_B_BUFFER_FRAMES_MAX))
    {
        status_id = ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? nFTCommonStatusHeavyThrowF4 : nFTCommonStatusHeavyThrowB4;
    }
    else if (((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_HEAVYTHROW_STICK_RANGE_XY_MIN) && ((ftParamGetStickAngleRads(fp) < 0.0F) ? -ftParamGetStickAngleRads(fp) : ftParamGetStickAngleRads(fp)) <= FTCOMMON_HEAVYTHROW_HI_OR_LW_ANGLE))
    {
        status_id = ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? nFTCommonStatusHeavyThrowF : nFTCommonStatusHeavyThrowB;
    }
    else status_id = nFTCommonStatusHeavyThrowStart;

    if ((fp->ft_kind == nFTKindDonkey) || (fp->ft_kind == nFTKindPolyDonkey) || (fp->ft_kind == nFTKindGiantDonkey))
    {
        status_id += nFTCommonStatusHeavyThrow4Start;
    }
    ftCommonItemThrowSetStatus(fighter_gobj, status_id);

    fp->proc_damage = ftCommonHeavyGetProcDamage;
}

// 0x80146A8C
sb32 ftCommonLightThrowCheckItemTypeThrow(ftStruct *fp)
{
    if (fp->item_hold != NULL)
    {
        if (fp->input.pl.button_tap & fp->input.button_mask_a)
        {
            if ((fp->input.pl.button_hold & fp->input.button_mask_z) || (itGetStruct(fp->item_hold)->type == nITTypeThrow))
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x80146AE8
sb32 ftCommonLightThrowCheckInterruptGuardOn(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->item_hold != NULL) && (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        if (fp->status_vars.common.guard.slide_frames != 0)
        {
            ftCommonItemThrowSetStatus(fighter_gobj, nFTCommonStatusLightThrowDash);

            return TRUE;
        }
        else ftCommonLightThrowDecideSetStatus(fighter_gobj);

        return TRUE;
    }
    if (fp->status_vars.common.guard.slide_frames != 0)
    {
        fp->status_vars.common.guard.slide_frames--;
    }
    return FALSE;
}

// 0x80146B64
sb32 ftCommonLightThrowCheckInterruptEscape(GObj *fighter_gobj) // Interrupt item throw from roll
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((ftCommonLightThrowCheckItemTypeThrow(fp) != FALSE) && (fp->status_vars.common.escape.itemthrow_buffer_frames != 0))
    {
        if (fp->status_info.status_id == nFTCommonStatusEscapeF)
        {
            status_id = nFTCommonStatusLightThrowF4;
        }
        else status_id = nFTCommonStatusLightThrowB4;

        ftCommonItemThrowSetStatus(fighter_gobj, status_id);

        return TRUE;
    }
    if (fp->status_vars.common.escape.itemthrow_buffer_frames != 0)
    {
        fp->status_vars.common.escape.itemthrow_buffer_frames--;
    }
    return FALSE;
}

// 0x80146BE0
sb32 ftCommonHeavyThrowCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->item_hold != NULL) && (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b)))
    {
        ftCommonHeavyThrowDecideSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
