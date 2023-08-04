#include <wp/weapon.h>
#include <ft/fighter.h>

// 0x80167EB0
void wpMain_StopSFX(wpStruct *wp) // Stop weapon's ongoing SFX
{
    if (wp->p_sfx != NULL)
    {
        if ((wp->p_sfx->sfx_id != 0) && (wp->p_sfx->sfx_id == wp->sfx_id))
        {
            func_80026738(wp->p_sfx);
        }
    }
    wp->p_sfx = NULL;
    wp->sfx_id = 0;
}

// 0x80167F08
void wpMain_PlaySFX(wpStruct *wp, u16 sfx_id) // Play sound effect for weapon
{
    if (wp->p_sfx != NULL)
    {
        wpMain_StopSFX(wp);
    }
    wp->p_sfx = func_800269C0(sfx_id);

    if (wp->p_sfx != NULL)
    {
        wp->sfx_id = wp->p_sfx->sfx_id;
    }
    else wp->sfx_id = 0;
}

// 0x80167F68
void wpMain_VelSetLR(GObj *weapon_gobj) // Set weapon's facing direction based on velocity
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lr = (wp->phys_info.vel_air.x >= 0.0F) ? RIGHT : LEFT;
}

// 0x80167FA0
void wpMain_VelSetModelYaw(GObj *weapon_gobj) // Set yaw rotation based on velocity
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    DObjGetStruct(weapon_gobj)->rotate.y = (wp->phys_info.vel_air.x >= 0.0F) ? F_DEG_TO_RAD(90.0F) /* HALF_PI32 */ : F_DEG_TO_RAD(-90.0F); // -HALF_PI32
}

// 0x80167FE8
bool32 wpMain_DecLifeCheckExpire(wpStruct *wp) // Decrement lifetime and check whether item has expired
{
    wp->lifetime--;

    if (wp->lifetime == 0)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8016800C
void wpMain_DestroyWeapon(GObj *weapon_gobj) // Destroy item?
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wpMain_StopSFX(wp);                     // Stop item's SFX
    wpManager_SetPrevAlloc(wp);             // Eject item's user_data from memory?
    omEjectGObjCommon(weapon_gobj);    // Eject GObj from memory?
}

// 0x80168044
void wpMain_VelGroundTransferAir(GObj *weapon_gobj) // Transfer item's base ground velocity to aerial velocity
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = wp->lr * wp->coll_data.ground_angle.y * wp->phys_info.vel_ground;
    wp->phys_info.vel_air.y = wp->lr * -wp->coll_data.ground_angle.x * wp->phys_info.vel_ground;
}

// 0x80168088
void wpMain_UpdateGravityClampTVel(wpStruct *wp, f32 gravity, f32 terminal_velocity) // Subtract vertical velocity every frame and clamp to terminal velocity
{
    wp->phys_info.vel_air.y -= gravity;

    if (func_ovl0_800C7A84(&wp->phys_info.vel) > terminal_velocity)
    {
        func_ovl0_800C7A00(&wp->phys_info.vel);
        func_ovl0_800C7AE0(&wp->phys_info.vel, terminal_velocity);
    }
}

// 0x801680EC
void wpMain_ReflectorSetLR(wpStruct *wp, ftStruct *fp) // Invert direction on reflect
{
    if ((wp->phys_info.vel_air.x * fp->lr) < 0.0F)
    {
        wp->phys_info.vel_air.x = -wp->phys_info.vel_air.x;
    }
}

// 0x80168128
s32 wpMain_GetDamageOutput(wpStruct *wp) // Return final damage after applying staling and bonus 0.999%
{
    return (wp->weapon_hit.stale * wp->weapon_hit.damage) + 0.999F;
}

// 0x80168158
void wpMain_ClearHitRecord(wpStruct *wp) // Clear hit victims array
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(wp->weapon_hit.hit_targets); i++)
    {
        gmHitCollisionRecord *targets = &wp->weapon_hit.hit_targets[i];

        targets->victim_gobj = NULL;

        targets->victim_flags.is_interact_hurt = targets->victim_flags.is_interact_shield = targets->victim_flags.is_interact_reflect = targets->victim_flags.is_interact_absorb = FALSE;

        targets->victim_flags.timer_rehit = 0;

        targets->victim_flags.interact_mask = GMHITCOLLISION_MASK_ALL;
    }
}

// Missing an unused function at 0x8016830C, some matrix stuff, no idea how to map it or where to begin

void func_ovl3_80168428(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f vel = wp->phys_info.vel, direction, angle, *rotate;

    direction.x = 0;
    direction.y = 0;
    direction.z = (vel.x > 0.0F) ? LEFT : RIGHT;

    vec3f_normalize(&vel);

    func_ovl0_800CD5AC(&vel, &direction, &angle);

    rotate = &DObjGetStruct(weapon_gobj)->rotate;

    if (direction.z == LEFT)
    {
        rotate->y = HALF_PI32;
        rotate->x = atan2f(angle.x, angle.y);
    }
    else
    {
        rotate->y = -HALF_PI32;
        rotate->x = atan2f(-angle.x, angle.y);
    }
    rotate->z = 0.0F;
}