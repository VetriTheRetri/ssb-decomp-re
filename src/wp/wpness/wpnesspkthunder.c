#include <wp/weapon.h>
#include <ft/fighter.h>
#include <ef/effect.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define wpNessPKThunderHeadGetTrailIDGObj(wp, i) \
((wp)->weapon_vars.pkthunder.trail_gobj[(i)])

#define wpNessPKThunderTrailGetTrailIDGObj(wp, i) \
((wp)->weapon_vars.pkthunder_trail.trail_gobj[(i)])

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t
lWPNessPKThunderWeaponAttributes;           // 0x0000000C
extern intptr_t
lWPNessPKThunderTrailWeaponAttributes;      // 0x00000040

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

wpCreateDesc dWPNessPKThunderHeadWeaponDesc =
{
    0x03,                                   // Render flags?
    nWPKindPKThunderHead,                  // Weapon Kind
    &gFTDataNessMain,                       // Pointer to character's loaded files?
    &lWPNessPKThunderWeaponAttributes,      // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations?
        0                                   // ???
    },

    wpNessPKThunderHeadProcUpdate,          // Proc Update
    wpNessPKThunderHeadProcMap,             // Proc Map
    wpNessPKThunderHeadProcHit,             // Proc Hit
    wpNessPKThunderHeadProcHit,             // Proc Shield
    NULL,                                   // Proc Hop
    wpNessPKThunderHeadProcHit,             // Proc Set-Off
    wpNessPKThunderHeadProcReflector,       // Proc Reflector
    wpNessPKThunderHeadProcHit              // Proc Absorb
};

wpCreateDesc dWPNessPKThunderTrailWeaponDesc =
{
    0x02,                                   // Render flags?
    nWPKindPKThunderTrail,                 // Weapon Kind
    &gFTDataNessMain,                       // Pointer to character's loaded files?
    &lWPNessPKThunderTrailWeaponAttributes, // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    wpNessPKThunderTrailProcUpdate,         // Proc Update
    NULL,                                   // Proc Map
    wpNessPKThunderTrailProcHit,            // Proc Hit
    wpNessPKThunderTrailProcHit,            // Proc Shield
    NULL,                                   // Proc Hop
    wpNessPKThunderTrailProcHit,            // Proc Set-Off
    NULL,                                   // Proc Reflector
    wpNessPKThunderTrailProcHit             // Proc Absorb
};

wpCreateDesc dWPNessPKReflectHeadWeaponDesc =
{
    0x03,                                   // Render flags?
    nWPKindPKThunderHead,                  // Weapon Kind
    &gFTDataNessMain,                       // Pointer to character's loaded files?
    &lWPNessPKThunderWeaponAttributes,      // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations?
        0                                   // ???
    },

    wpNessPKReflectHeadProcUpdate,          // Proc Update
    wpNessPKReflectHeadProcMap,             // Proc Map
    wpNessPKReflectHeadProcHit,             // Proc Hit
    wpNessPKReflectHeadProcHit,             // Proc Shield
    NULL,                                   // Proc Hop
    wpNessPKReflectHeadProcHit,             // Proc Set-Off
    wpNessPKReflectHeadProcReflector,       // Proc Reflector
    wpNessPKReflectHeadProcHit              // Proc Absorb
};

wpCreateDesc dWPNessPKReflectTrailWeaponDesc =
{
    0x02,                                   // Render flags?
    nWPKindPKThunderTrail,                 // Weapon Kind
    &gFTDataNessMain,                       // Pointer to character's loaded files?
    &lWPNessPKThunderTrailWeaponAttributes, // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    wpNessPKReflectTrailProcUpdate,         // Proc Update
    NULL,                                   // Proc Map
    wpNessPKReflectTrailProcHit,            // Proc Hit
    wpNessPKReflectTrailProcHit,            // Proc Shield
    NULL,                                   // Proc Hop
    wpNessPKReflectTrailProcHit,            // Proc Set-Off
    NULL,                                   // Proc Reflector
    wpNessPKReflectTrailProcHit             // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016AD30
void wpNessPKThunderHeadSetDestroyTrails(GObj *weapon_gobj, sb32 is_destroy)
{
    GObj *gobj;
    ftStruct *fp;
    wpStruct *head_wp, *trail_wp;
    efStruct *ep;
    s32 i;

    head_wp = wpGetStruct(weapon_gobj);

    if (!(head_wp->weapon_vars.pkthunder.status & wpNessPKThunder_Status_Destroy))
    {
        fp = ftGetStruct(head_wp->owner_gobj);

        if (fp->player_number == head_wp->player_number)
        {
            fp->fighter_vars.ness.is_thunder_destroy |= is_destroy;
        }
    }
    fp = ftGetStruct(head_wp->owner_gobj);

    for (i = 0; i < (ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1); i++)
    {
        if (head_wp->weapon_vars.pkthunder.trail_gobj[i] != NULL)
        {
            trail_wp = wpGetStruct(head_wp->weapon_vars.pkthunder.trail_gobj[i]);
            trail_wp->weapon_vars.pkthunder_trail.status = wpNessPKThunder_Status_Destroy;

            head_wp->weapon_vars.pkthunder.trail_gobj[i] = NULL;
        }
    }

    if (head_wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1] != NULL)
    {
        ep = efGetStruct(head_wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1]);
        ep->effect_vars.pkthunder.status = wpNessPKThunder_Status_Destroy;

        head_wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1] = NULL;
    }
}

// 0x8016ADF4
void wpNessPKThunderTrailUpdatePositions(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    if (fp->player_number == wp->player_number)
    {
        s32 trail_pos_id = fp->fighter_vars.ness.pkthunder_trail_id - 1;

        if (trail_pos_id < 0)
        {
            trail_pos_id += FTNESS_PKTHUNDER_TRAIL_POS_COUNT;
        }
        fp->fighter_vars.ness.pkthunder_trail_x[trail_pos_id] = DObjGetStruct(weapon_gobj)->translate.vec.f.x;
        fp->fighter_vars.ness.pkthunder_trail_y[trail_pos_id] = DObjGetStruct(weapon_gobj)->translate.vec.f.y;
    }
}

// 0x8016AE64
void wpNessPKThunderHeadMakeTrail(GObj *weapon_gobj, s32 trail_index)
{
    DObj *dobj = DObjGetStruct(weapon_gobj);
    Vec3f pos;

    pos.x = DObjGetStruct(weapon_gobj)->translate.vec.f.x;
    pos.y = DObjGetStruct(weapon_gobj)->translate.vec.f.y;
    pos.z = 0.0F;

    wpNessPKThunderTrailMakeWeapon(weapon_gobj, &pos, trail_index);
}

// 0x8016AEA68
sb32 wpNessPKThunderHeadProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp;
    f32 angle_diff;
    Vec3f stick_angle;
    Vec3f thunder_angle;

    if (wp->weapon_vars.pkthunder.status & wpNessPKThunder_Status_Destroy)
    {
        efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);
        wpNessPKThunderHeadSetDestroyTrails(weapon_gobj, TRUE);

        return TRUE;
    }

    fp = ftGetStruct(wp->owner_gobj);

    if (wp->weapon_vars.pkthunder.status & wpNessPKThunder_Status_Collide)
    {
        efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);
        wpNessPKThunderHeadSetDestroyTrails(weapon_gobj, TRUE);

        return TRUE;
    }

    if (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME)
    {
        wpNessPKThunderHeadMakeTrail(weapon_gobj, 0);
    }

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
        wpNessPKThunderHeadSetDestroyTrails(weapon_gobj, TRUE);

        return TRUE;
    }
    wpNessPKThunderTrailUpdatePositions(weapon_gobj);

    if ((fp->status_info.status_id == nFTNessStatusSpecialHiHold) || (fp->status_info.status_id == nFTNessStatusSpecialAirHiHold))
    {
        if ((ABS(fp->input.pl.stick_range.x) + ABS(fp->input.pl.stick_range.y)) > WPPKTHUNDER_TURN_STICK_THRESHOLD)
        {
            stick_angle.x = fp->input.pl.stick_range.x;
            stick_angle.y = fp->input.pl.stick_range.y;
            stick_angle.z = 0.0F;

            angle_diff = lbVector_Vec3fAngleDiff(&wp->phys_info.vel_air, &stick_angle);

            lbVector_Vec3fNormalizedCross(&wp->phys_info.vel_air, &stick_angle, &thunder_angle);

            if (angle_diff >= F_CST_DTOR32(45.0F)) // QUART_PI32
            {
                wp->weapon_vars.pkthunder.angle = (thunder_angle.z > 0.0F) ? (wp->weapon_vars.pkthunder.angle + WPPKTHUNDER_ANGLE_STEP) : (wp->weapon_vars.pkthunder.angle - WPPKTHUNDER_ANGLE_STEP);
            }
            if (angle_diff < F_CST_DTOR32(45.0F))  // QUART_PI32
            {
                wp->weapon_vars.pkthunder.angle = (thunder_angle.z > 0.0F) ? (wp->weapon_vars.pkthunder.angle + (angle_diff / WPPKTHUNDER_ANGLE_DIV)) : (wp->weapon_vars.pkthunder.angle - (angle_diff / WPPKTHUNDER_ANGLE_DIV));
            }
            wp->phys_info.vel_air.x = __cosf(wp->weapon_vars.pkthunder.angle) * WPPKTHUNDER_VEL;
            wp->phys_info.vel_air.y = __sinf(wp->weapon_vars.pkthunder.angle) * WPPKTHUNDER_VEL;
            wp->phys_info.vel_air.z = 0.0F;

            DObjGetStruct(weapon_gobj)->rotate.vec.f.z = wp->weapon_vars.pkthunder.angle - F_CST_DTOR32(90.0F); // HALF_PI32
        }
    }
    else
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
        wpNessPKThunderHeadSetDestroyTrails(weapon_gobj, TRUE);

        return TRUE;
    }
    return FALSE;
}

// 0x8016B198
sb32 wpNessPKThunderHeadProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
        wpNessPKThunderHeadSetDestroyTrails(weapon_gobj, TRUE);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016B1E8
sb32 wpNessPKThunderHeadProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);
    wpNessPKThunderHeadSetDestroyTrails(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016B22C
sb32 wpNessPKThunderHeadProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp;
    Vec3f pos = DObjGetStruct(weapon_gobj)->translate.vec.f;

    wpNessPKReflectHeadMakeWeapon(weapon_gobj, &pos, wp->weapon_vars.pkthunder.angle);

    wp->owner_gobj = wp->weapon_vars.pkthunder.spawn_gobj;

    fp = ftGetStruct(wp->weapon_vars.pkthunder.spawn_gobj);

    wp->player_number = fp->player_number;

    wpNessPKThunderHeadSetDestroyTrails(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016B2A0
sb32 wpNessPKThunderHeadProcDead(GObj *weapon_gobj)
{
    wpNessPKThunderHeadSetDestroyTrails(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016B2C4
GObj* wpNessPKThunderHeadMakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWPNessPKThunderHeadWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;
    s32 i;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->proc_dead = wpNessPKThunderHeadProcDead;

    wp->lifetime = WPPKTHUNDER_LIFETIME;

    wp->phys_info.vel_air = *vel;

    wp->weapon_vars.pkthunder.status = wpNessPKThunder_Status_Active;
    wp->weapon_vars.pkthunder.angle = F_CST_DTOR32(90.0F); // HALF_PI32
    wp->weapon_vars.pkthunder.spawn_gobj = fighter_gobj;

    wp->is_camera_follow = TRUE;

    for (i = 0; i < ARRAY_COUNT(wp->weapon_vars.pkthunder.trail_gobj); i++)
    {
        wp->weapon_vars.pkthunder.trail_gobj[i] = NULL;
    }
    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = wp->weapon_vars.pkthunder.angle - F_CST_DTOR32(90.0F); // Bruh this effectively makes it 0.0F due to its init a few lines above (HALF_PI32)

    return weapon_gobj;
}

// 0x8016B398
sb32 wpNessPKThunderTrailProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 index;
    ftStruct *fp;

    if (wp->weapon_vars.pkthunder_trail.status & wpNessPKThunder_Status_Destroy)
    {
        return TRUE;
    }
    fp = ftGetStruct(wp->owner_gobj);

    index = (fp->fighter_vars.ness.pkthunder_trail_id - (wp->weapon_vars.pkthunder_trail.trail_index * 2)) - 2;

    if (index < 0)
    {
        index += FTNESS_PKTHUNDER_TRAIL_POS_COUNT;
    }
    DObjGetStruct(weapon_gobj)->translate.vec.f.x = fp->fighter_vars.ness.pkthunder_trail_x[index];
    DObjGetStruct(weapon_gobj)->translate.vec.f.y = fp->fighter_vars.ness.pkthunder_trail_y[index];

    if (index > 0)
    {
        DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f((fp->fighter_vars.ness.pkthunder_trail_y[index] - fp->fighter_vars.ness.pkthunder_trail_y[index - 1]), (fp->fighter_vars.ness.pkthunder_trail_x[index] - fp->fighter_vars.ness.pkthunder_trail_x[index - 1]));
    }
    else
    {
        DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f((fp->fighter_vars.ness.pkthunder_trail_y[index] - fp->fighter_vars.ness.pkthunder_trail_y[FTNESS_PKTHUNDER_TRAIL_POS_COUNT - 1]), (fp->fighter_vars.ness.pkthunder_trail_x[index] - fp->fighter_vars.ness.pkthunder_trail_x[FTNESS_PKTHUNDER_TRAIL_POS_COUNT - 1]));
    }
    DObjGetStruct(weapon_gobj)->rotate.vec.f.z -= F_CST_DTOR32(90.0F); // HALF_PI32

    if ((wp->weapon_vars.pkthunder_trail.trail_index < (WPPKTHUNDER_PARTS_COUNT - 2)) && (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME))
    {
        wpNessPKThunderHeadMakeTrail(weapon_gobj, wp->weapon_vars.pkthunder_trail.trail_index + 1);
    }
    if ((wp->weapon_vars.pkthunder_trail.trail_index == (WPPKTHUNDER_PARTS_COUNT - 2)) && (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME))
    {
        efManagerNessPKThunderTrailMakeEffect(wp->owner_gobj);
    }
    wpMainDecLifeCheckExpire(wp);

    DObjGetStruct(weapon_gobj)->mobj->current_image_id = mtTrigGetRandomIntRange(WPPKTHUNDER_TEXTURE_COUNT - 1);

    return FALSE;
}

// 0x8016B550
sb32 wpNessPKThunderTrailProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return FALSE;
}

// 0x8016B580
GObj* wpNessPKThunderTrailMakeWeapon(GObj *head_gobj, Vec3f *pos, s32 trail_index)
{
    GObj *trail_gobj;
    wpStruct *trail_wp;
    wpStruct *head_wp = wpGetStruct(head_gobj);
    s32 i;

    trail_gobj = wpManagerMakeWeapon(head_gobj, &dWPNessPKThunderTrailWeaponDesc, pos, WEAPON_MASK_SPAWN_WEAPON);

    if (trail_gobj == NULL)
    {
        return NULL;
    }

    trail_wp = wpGetStruct(trail_gobj);

    trail_gobj->proc_render = wpRenderPKThunder;

    trail_wp->lifetime = WPPKTHUNDER_LIFETIME;

    if (trail_index == 0)
    {
        trail_wp->group_id = wpManagerGetGroupIndexInc(head_gobj, trail_gobj); // Bruh this doesn't any take arguments but it doesn't match otherwise
    }
    else trail_wp->group_id = head_wp->group_id;

    trail_wp->weapon_vars.pkthunder_trail.status = wpNessPKThunder_Status_Active;
    trail_wp->weapon_vars.pkthunder_trail.trail_index = trail_index;
    trail_wp->weapon_vars.pkthunder_trail.spawn_gobj = head_gobj;

    if (trail_index != 0)
    {
        head_gobj = head_wp->weapon_vars.pkthunder_trail.head_gobj;
        head_wp = wpGetStruct(head_gobj);
    }

    trail_wp->weapon_vars.pkthunder_trail.head_gobj = head_gobj;

    for (i = 0; i < ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj); i++)
    {
        head_wp->weapon_vars.pkthunder.trail_gobj[trail_index] = trail_gobj;
    }

    return trail_gobj;
}

// 0x8016B65C
void wpNessPKReflectHeadMakeTrail(GObj *weapon_gobj, s32 trail_index)
{
    Vec3f pos;

    pos.x = DObjGetStruct(weapon_gobj)->translate.vec.f.x;
    pos.y = DObjGetStruct(weapon_gobj)->translate.vec.f.y;
    pos.z = 0.0F;

    wpNessPKReflectTrailMakeWeapon(weapon_gobj, &pos, trail_index);
}

// 0x8016B6A0
void wpNessPKReflectHeadSetDestroyTrails(GObj *weapon_gobj, s32 unused)
{
    wpStruct *head_wp, *trail_wp;
    efStruct *ep;
    s32 i;

    head_wp = wpGetStruct(weapon_gobj);

    for (i = 0; i < (ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1); i++)
    {
        if (wpNessPKThunderHeadGetTrailIDGObj(head_wp, i) != NULL)
        {
            trail_wp = wpGetStruct(wpNessPKThunderHeadGetTrailIDGObj(head_wp, i));
            trail_wp->weapon_vars.pkthunder_trail.status = wpNessPKThunder_Status_Destroy;
            head_wp->weapon_vars.pkthunder.trail_gobj[i] = NULL;
        }
    }

    if (wpNessPKThunderHeadGetTrailIDGObj(head_wp, ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1) != NULL)
    {
        ep = efGetStruct(wpNessPKThunderHeadGetTrailIDGObj(head_wp, ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1));
        ep->effect_vars.pkthunder.status = wpNessPKThunder_Status_Destroy;
        head_wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1] = NULL;
    }
}

// 0x8016B734
sb32 wpNessPKReflectHeadProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME) // This will spawn new PK Thunder trails every time it is reflected, since lifetime is reset to 160 on each occasion
    {
        wpNessPKReflectHeadMakeTrail(weapon_gobj, 0);
    }

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
        wpNessPKReflectHeadSetDestroyTrails(weapon_gobj, wpNessPKThunder_Status_Destroy);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016B7AC
sb32 wpNessPKReflectHeadProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);
        wpNessPKReflectHeadSetDestroyTrails(weapon_gobj, wpNessPKThunder_Status_Destroy);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016B7FC
sb32 wpNessPKReflectHeadProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);
    wpNessPKReflectHeadSetDestroyTrails(weapon_gobj, wpNessPKThunder_Status_Destroy);

    return TRUE;
}

// 0x8016B840
sb32 wpNessPKReflectHeadProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPPKTHUNDER_LIFETIME; // This line is indirectly responsible for the PK Thunder double reflect crash; omitting it fixes the oversight
                                         // Solution: wpNessPKReflectHeadSetDestroyTrails(weapon_gobj, wpNessPKThunder_Status_Destroy);

    wpMainReflectorSetLR(wp, fp);

    return FALSE;
}

// 0x8016B874
sb32 wpNessPKReflectHeadProcDead(GObj *weapon_gobj)
{
    wpNessPKReflectHeadSetDestroyTrails(weapon_gobj, wpNessPKThunder_Status_Destroy);

    return TRUE;
}

// 0x8016B898
GObj* wpNessPKReflectHeadMakeWeapon(GObj *old_gobj, Vec3f *pos, f32 angle)
{
    s32 i;
    GObj *new_gobj;
    wpStruct *wp;
    Vec3f localvel;
    f32 unk_vec;

    new_gobj = wpManagerMakeWeapon(old_gobj, &dWPNessPKReflectHeadWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_WEAPON));

    if (new_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(new_gobj);

    wp->proc_dead = wpNessPKReflectHeadProcDead;

    wp->lifetime = WPPKTHUNDER_LIFETIME;

    wp->group_id = wpManagerGetGroupIndexInc();

    for (i = 0; i < ARRAY_COUNT(wp->weapon_vars.pkthunder.trail_gobj); i++)
    {
        wp->weapon_vars.pkthunder.trail_gobj[i] = NULL;
    }

    localvel.x = DObjGetStruct(new_gobj)->translate.vec.f.x - DObjGetStruct(wp->owner_gobj)->translate.vec.f.x;
    localvel.y = DObjGetStruct(new_gobj)->translate.vec.f.y - (DObjGetStruct(wp->owner_gobj)->translate.vec.f.y + WPPKTHUNDER_REFLECT_POS_Y_ADD);
    localvel.z = DObjGetStruct(new_gobj)->translate.vec.f.z - DObjGetStruct(wp->owner_gobj)->translate.vec.f.z;

    lbVector_Vec3fNormalize(&localvel);

    wp->phys_info.vel_air.x = (WPPKTHUNDER_VEL * localvel.x);
    wp->phys_info.vel_air.y = (WPPKTHUNDER_VEL * localvel.y);
    wp->phys_info.vel_air.z = 0.0F;

    DObjGetStruct(new_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    return new_gobj;
}

// 0x8016B9E0
sb32 wpNessPKReflectTrailProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.pkthunder_trail.status & wpNessPKThunder_Status_Destroy)
    {
        return TRUE;
    }
    // Game hangs on the following line when PK Thunder crash occurs (DObjGetStruct returns NULL)
    // This happens because the program loses the reference to the old PK Thunder trail objects which are still accessing the head's DObj even after it's ejected

    DObjGetStruct(weapon_gobj)->translate.vec.f.x = (DObjGetStruct(wp->weapon_vars.pkthunder_trail.head_gobj)->translate.vec.f.x - (wp->phys_info.vel_air.x * (wp->weapon_vars.pkthunder_trail.trail_index + 1.5) * 2.0F));
    DObjGetStruct(weapon_gobj)->translate.vec.f.y = (DObjGetStruct(wp->weapon_vars.pkthunder_trail.head_gobj)->translate.vec.f.y - (wp->phys_info.vel_air.y * (wp->weapon_vars.pkthunder_trail.trail_index + 1.5) * 2.0F));

    if ((wp->weapon_vars.pkthunder_trail.trail_index < (WPPKTHUNDER_PARTS_COUNT - 2)) && (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME))
    {
        wpNessPKReflectHeadMakeTrail(weapon_gobj, wp->weapon_vars.pkthunder_trail.trail_index + 1);
    }
    if ((wp->weapon_vars.pkthunder_trail.trail_index == (WPPKTHUNDER_PARTS_COUNT - 2)) && (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME))
    {
        efManagerNessPKReflectTrailMakeEffect(wp->weapon_vars.pkthunder_trail.head_gobj);
    }

    wpMainDecLifeCheckExpire(wp);

    DObjGetStruct(weapon_gobj)->mobj->current_image_id = mtTrigGetRandomIntRange(WPPKTHUNDER_TEXTURE_COUNT - 1);

    return FALSE;
}

// 0x8016BB3C
sb32 wpNessPKReflectTrailProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return FALSE;
}

// 0x8016BB6C
GObj* wpNessPKReflectTrailMakeWeapon(GObj *old_gobj, Vec3f *pos, s32 trail_index)
{
    GObj *new_gobj;
    s32 unused;
    wpStruct *old_wp, *new_wp;

    old_wp = wpGetStruct(old_gobj);

    new_gobj = wpManagerMakeWeapon(old_gobj, &dWPNessPKReflectTrailWeaponDesc, pos, WEAPON_MASK_SPAWN_WEAPON);

    if (new_gobj == NULL)
    {
        return NULL;
    }
    new_wp = wpGetStruct(new_gobj);

    new_gobj->proc_render = wpRenderPKThunder;

    new_wp->lifetime = WPPKTHUNDER_LIFETIME;

    new_wp->group_id = old_wp->group_id;

    new_wp->weapon_vars.pkthunder_trail.status = wpNessPKThunder_Status_Active;
    new_wp->weapon_vars.pkthunder_trail.trail_index = trail_index;
    new_wp->weapon_vars.pkthunder_trail.spawn_gobj = old_gobj;

    if (trail_index != 0)
    {
        // WARNING: old_gobj belongs to trails on non-zero indexes, but the code below treats it as a head object and accesses the head's weapon vars

        old_gobj = old_wp->weapon_vars.pkthunder_trail.head_gobj;
        old_wp = wpGetStruct(old_gobj);
    }

    new_wp->weapon_vars.pkthunder_trail.head_gobj = old_gobj;

    old_wp->weapon_vars.pkthunder.trail_gobj[trail_index] = new_gobj;

    new_wp->phys_info.vel_air.x = old_wp->phys_info.vel_air.x;
    new_wp->phys_info.vel_air.y = old_wp->phys_info.vel_air.y;

    // With the crash fix, this makes the trail look janky when reflected more than twice.
    // Solution: DObjGetStruct(new_gobj)->rotate.vec.f.z = atan2f(new_wp->phys_info.vel_air.y, new_wp->phys_info.vel_air.x) - F_CST_DTOR32(90.0F);

    DObjGetStruct(new_gobj)->rotate.vec.f.z = DObjGetStruct(old_gobj)->rotate.vec.f.z - F_CST_DTOR32(90.0F);

    wpProcessUpdateHitPositions(new_gobj);

    return new_gobj;
}
