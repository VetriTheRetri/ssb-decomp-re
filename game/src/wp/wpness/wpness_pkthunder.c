#include <wp/weapon.h>
#include <ft/chara/ftness/ftness.h>

#define wpNess_PKThunderHead_GetTrailIndexGObj(wp, i) \
((GObj*)(wp)->weapon_vars.pkthunder.trail_gobj[(i)])

#define wpNess_PKThunderTrail_GetTrailIndexGObj(wp, i) \
((GObj*)(wp)->weapon_vars.pkthunder_trail.trail_gobj[(i)])

extern void *D_ovl2_80131130;

wpCreateDesc wpNess_PKThunderHead_WeaponDesc =
{
    3,                                      // Render flags?
    Wp_Kind_PKThunderHead,                  // Weapon Kind
    &D_ovl2_80131130,                       // Pointer to character's loaded files?
    0xC,                                    // Offset of weapon attributes in loaded files
    0x12,                                   // ???
    0x2E,                                   // ???
    0,                                      // ???
    wpNess_PKThunderHead_ProcUpdate,        // Proc Update
    wpNess_PKThunderHead_ProcMap,           // Proc Map
    wpNess_PKThunderHead_ProcHit,           // Proc Hit
    wpNess_PKThunderHead_ProcHit,           // Proc Shield
    NULL,                                   // Proc Hop
    wpNess_PKThunderHead_ProcHit,           // Proc Set-Off
    wpNess_PKThunderHead_ProcReflector,     // Proc Reflector
    wpNess_PKThunderHead_ProcHit            // Proc Absorb
};

wpCreateDesc wpNess_PKThunderTrail_WeaponDesc =
{
    2,                                      // Render flags?
    Wp_Kind_PKThunderTrail,                 // Weapon Kind
    &D_ovl2_80131130,                       // Pointer to character's loaded files?
    0x40,                                   // Offset of weapon attributes in loaded files
    0x12,                                   // ???
    0x2E,                                   // ???
    0,                                      // ???
    wpNess_PKThunderTrail_ProcUpdate,       // Proc Update
    NULL,                                   // Proc Map
    wpNess_PKThunderTrail_ProcHit,          // Proc Hit
    wpNess_PKThunderTrail_ProcHit,          // Proc Shield
    NULL,                                   // Proc Hop
    wpNess_PKThunderTrail_ProcHit,          // Proc Set-Off
    NULL,                                   // Proc Reflector
    wpNess_PKThunderTrail_ProcHit           // Proc Absorb
};

wpCreateDesc wpNess_PKReflectHead_WeaponDesc =
{
    3,                                      // Render flags?
    Wp_Kind_PKThunderHead,                  // Weapon Kind
    &D_ovl2_80131130,                       // Pointer to character's loaded files?
    0xC,                                    // Offset of weapon attributes in loaded files
    0x12,                                   // ???
    0x2E,                                   // ???
    0,                                      // ???
    wpNess_PKReflectHead_ProcUpdate,        // Proc Update
    wpNess_PKReflectHead_ProcMap,           // Proc Map
    wpNess_PKReflectHead_ProcHit,           // Proc Hit
    wpNess_PKReflectHead_ProcHit,           // Proc Shield
    NULL,                                   // Proc Hop
    wpNess_PKReflectHead_ProcHit,           // Proc Set-Off
    wpNess_PKReflectHead_ProcReflector,     // Proc Reflector
    wpNess_PKReflectHead_ProcHit            // Proc Absorb
};

wpCreateDesc wpNess_PKReflectTrail_WeaponDesc =
{
    2,                                      // Render flags?
    Wp_Kind_PKThunderTrail,                 // Weapon Kind
    &D_ovl2_80131130,                       // Pointer to character's loaded files?
    0x40,                                   // Offset of weapon attributes in loaded files
    0x12,                                   // ???
    0x2E,                                   // ???
    0,                                      // ???
    wpNess_PKReflectTrail_ProcUpdate,       // Proc Update
    NULL,                                   // Proc Map
    wpNess_PKReflectTrail_ProcHit,          // Proc Hit
    wpNess_PKReflectTrail_ProcHit,          // Proc Shield
    NULL,                                   // Proc Hop
    wpNess_PKReflectTrail_ProcHit,          // Proc Set-Off
    NULL,                                   // Proc Reflector
    wpNess_PKReflectTrail_ProcHit           // Proc Absorb
};

// 0x8016AD30
void wpNess_PKThunder_SetDestroy(GObj *weapon_gobj, bool32 is_destroy)
{
    GObj *gobj;
    ftStruct *fp;
    wpStruct *head_wp, *trailmid_wp, *trailend_wp;
    s32 i;

    head_wp = wpGetStruct(weapon_gobj);

    if (!(head_wp->weapon_vars.pkthunder.pkthunder_state & wpNessPKThunder_Status_Destroy))
    {
        fp = ftGetStruct(wp->owner_gobj);

        if (fp->player_number == head_wp->player_number)
        {
            fp->fighter_vars.ness.is_thunder_destroy |= is_destroy;
        }
    }
    fp = ftGetStruct(wp->owner_gobj);

    for (i = 0; i < (ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1); i++)
    {
        if (head_wp->weapon_vars.pkthunder.trail_gobj[i] != NULL)
        {
            trailmid_wp = wpGetStruct(head_wp->weapon_vars.pkthunder.trail_gobj[i]);
            trailmid_wp->weapon_vars.pkthunder_trail.pkthunder_trail_state = wpNessPKThunder_Status_Destroy;

            head_wp->weapon_vars.pkthunder.trail_gobj[i] = NULL;
        }
    }

    if (head_wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1] != NULL)
    {
        trailend_wp = wpGetStruct(wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1]);
        trailend_wp->lr = RIGHT;

        head_wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj) - 1] = NULL;
    }
}

// 0x8016ADF4
void wpNess_PKThunderTrail_UpdateTrailPositions(GObj *weapon_gobj)
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
        fp->fighter_vars.ness.pkthunder_trail_x[trail_pos_id] = DObjGetStruct(weapon_gobj)->translate.x;
        fp->fighter_vars.ness.pkthunder_trail_y[trail_pos_id] = DObjGetStruct(weapon_gobj)->translate.y;
    }
}

// 0x8016AE64
void wpNess_PKThunderHead_CreateTrail(GObj *weapon_gobj, s32 trail_index)
{
    DObj *dobj = DObjGetStruct(weapon_gobj);
    Vec3f pos;

    pos.x = DObjGetStruct(weapon_gobj)->translate.x;
    pos.y = DObjGetStruct(weapon_gobj)->translate.y;
    pos.z = 0.0F;

    wpNess_PKThunderTrail_MakeWeapon(weapon_gobj, &pos, trail_index);
}

// 0x8016AEA68
bool32 wpNess_PKThunderHead_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp;
    f32 angle_diff;
    Vec3f stick_angle;
    Vec3f thunder_angle;

    if (wp->weapon_vars.pkthunder.pkthunder_state & wpNessPKThunder_Status_Destroy)
    {
        func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);
        wpNess_PKThunder_SetDestroy(weapon_gobj, TRUE);

        return TRUE;
    }

    fp = ftGetStruct(wp->owner_gobj);

    if (wp->weapon_vars.pkthunder.pkthunder_state & wpNessPKThunder_Status_Collide)
    {
        func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);
        wpNess_PKThunder_SetDestroy(weapon_gobj, TRUE);

        return TRUE;
    }

    if (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME)
    {
        wpNess_PKThunderHead_CreateTrail(weapon_gobj, 0);
    }

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
        wpNess_PKThunder_SetDestroy(weapon_gobj, TRUE);

        return TRUE;
    }

    wpNess_PKThunderTrail_UpdateTrailPositions(weapon_gobj);

    if ((fp->status_info.status_id == ftStatus_Ness_SpecialHiHold) || (fp->status_info.status_id == ftStatus_Ness_SpecialAirHiHold))
    {
        if ((ABS(fp->input.pl.stick_range.x) + ABS(fp->input.pl.stick_range.y)) > WPPKTHUNDER_TURN_STICK_THRESHOLD)
        {
            stick_angle.x = fp->input.pl.stick_range.x;
            stick_angle.y = fp->input.pl.stick_range.y;
            stick_angle.z = 0.0F;

            angle_diff = vec3f_angle_diff(&wp->phys_info.vel, &stick_angle);

            vec3f_normalized_cross_product(&wp->phys_info.vel, &stick_angle, &thunder_angle);

            if (angle_diff >= F_DEG_TO_RAD(45.0F)) // QUART_PI32
            {
                wp->weapon_vars.pkthunder.angle = (thunder_angle.z > 0.0F) ? (wp->weapon_vars.pkthunder.angle + WPPKTHUNDER_ANGLE_STEP) : (wp->weapon_vars.pkthunder.angle - WPPKTHUNDER_ANGLE_STEP);
            }
            if (angle_diff < F_DEG_TO_RAD(45.0F))  // QUART_PI32
            {
                wp->weapon_vars.pkthunder.angle = (thunder_angle.z > 0.0F) ? (wp->weapon_vars.pkthunder.angle + (angle_diff / WPPKTHUNDER_ANGLE_DIV)) : (wp->weapon_vars.pkthunder.angle - (angle_diff / WPPKTHUNDER_ANGLE_DIV));
            }
            wp->phys_info.vel_air.x = cosf(wp->weapon_vars.pkthunder.angle) * WPPKTHUNDER_VEL;
            wp->phys_info.vel_air.y = __sinf(wp->weapon_vars.pkthunder.angle) * WPPKTHUNDER_VEL;
            wp->phys_info.vel_air.z = 0.0F;

            DObjGetStruct(weapon_gobj)->rotate.z = wp->weapon_vars.pkthunder.angle - F_DEG_TO_RAD(90.0F); // HALF_PI32
        }
    }
    else
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
        wpNess_PKThunder_SetDestroy(weapon_gobj, TRUE);

        return TRUE;
    }
    return FALSE;
}

// 0x8016B198
bool32 wpNess_PKThunderHead_ProcMap(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
        wpNess_PKThunder_SetDestroy(weapon_gobj, TRUE);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016B1E8
bool32 wpNess_PKThunderHead_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);
    wpNess_PKThunder_SetDestroy(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016B22C
bool32 wpNess_PKThunderHead_ProcReflector(GObj *weapon_gobj) // Behold, PK Thunder's dangerous reflect callback
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp;
    Vec3f pos = DObjGetStruct(weapon_gobj)->translate; // Get current position

    wpNess_PKReflectHead_MakeWeapon(weapon_gobj, &pos, wp->weapon_vars.pkthunder.angle); // Spawn whole new PK Thunder instance

    wp->owner_gobj = wp->weapon_vars.pkthunder.spawn_gobj;

    fp = ftGetStruct(wp->weapon_vars.pkthunder.spawn_gobj);

    wp->player_number = fp->player_number;

    wpNess_PKThunder_SetDestroy(weapon_gobj, TRUE); // Clear current PK Thunder instance's variables

    return TRUE; // Return TRUE so PK Thunder gets destroyed
}

// 0x8016B2A0
bool32 wpNess_PKThunderHead_ProcDead(GObj *weapon_gobj)
{
    wpNess_PKThunder_SetDestroy(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016B2C4
GObj* wpNess_PKThunderHead_MakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel) // Create PK Thunder Head 
{
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpNess_PKThunderHead_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;
    s32 i;

    if (weapon_gobj == NULL) return NULL;

    wp = wpGetStruct(weapon_gobj);

    wp->proc_dead = wpNess_PKThunderHead_ProcDead;

    wp->lifetime = WPPKTHUNDER_LIFETIME;

    wp->phys_info.vel = *vel;

    wp->weapon_vars.pkthunder.pkthunder_state = wpNessPKThunder_Status_Active;
    wp->weapon_vars.pkthunder.angle = F_DEG_TO_RAD(90.0F); // HALF_PI32
    wp->weapon_vars.pkthunder.spawn_gobj = fighter_gobj;

    wp->is_camera_follow = TRUE;

    for (i = 0; i < ARRAY_COUNT(wp->weapon_vars.pkthunder.trail_gobj); i++)
    {
        wp->weapon_vars.pkthunder.trail_gobj[i] = NULL;
    }

    DObjGetStruct(weapon_gobj)->rotate.z = wp->weapon_vars.pkthunder.angle - F_DEG_TO_RAD(90.0F); // Bruh this effectively makes it 0.0F due to its init a few lines above (HALF_PI32)

    return weapon_gobj;
}

// 0x8016B398
bool32 wpNess_PKThunderTrail_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 index;
    ftStruct *fp;

    if (wp->weapon_vars.pkthunder_trail.pkthunder_trail_state & wpNessPKThunder_Status_Destroy) return TRUE;

    fp = ftGetStruct(wp->owner_gobj);

    index = (fp->fighter_vars.ness.pkthunder_trail_id - (wp->weapon_vars.pkthunder_trail.trail_index * 2)) - 2;

    if (index < 0)
    {
        index += FTNESS_PKTHUNDER_TRAIL_POS_COUNT;
    }

    DObjGetStruct(weapon_gobj)->translate.x = fp->fighter_vars.ness.pkthunder_trail_x[index];
    DObjGetStruct(weapon_gobj)->translate.y = fp->fighter_vars.ness.pkthunder_trail_y[index];

    if (index > 0)
    {
        DObjGetStruct(weapon_gobj)->rotate.z = atan2f((fp->fighter_vars.ness.pkthunder_trail_y[index] - fp->fighter_vars.ness.pkthunder_trail_y[index - 1]), (fp->fighter_vars.ness.pkthunder_trail_x[index] - fp->fighter_vars.ness.pkthunder_trail_x[index - 1]));
    }
    else
    {
        DObjGetStruct(weapon_gobj)->rotate.z = atan2f((fp->fighter_vars.ness.pkthunder_trail_y[index] - fp->fighter_vars.ness.pkthunder_trail_y[FTNESS_PKTHUNDER_TRAIL_POS_COUNT - 1]), (fp->fighter_vars.ness.pkthunder_trail_x[index] - fp->fighter_vars.ness.pkthunder_trail_x[FTNESS_PKTHUNDER_TRAIL_POS_COUNT - 1]));
    }

    DObjGetStruct(weapon_gobj)->rotate.z -= HALF_PI32;


    if ((wp->weapon_vars.pkthunder_trail.trail_index < (ARRAY_COUNT(wp->weapon_vars.pkthunder_trail.trail_gobj) - 2)) && (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME))
    {
        wpNess_PKThunderHead_CreateTrail(weapon_gobj, wp->weapon_vars.pkthunder_trail.trail_index + 1);
    }

    if ((wp->weapon_vars.pkthunder_trail.trail_index == (ARRAY_COUNT(wp->weapon_vars.pkthunder_trail.trail_gobj) - 2)) && (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME))
    {
        func_ovl2_80102848(wp->owner_gobj);
    }
    wpMain_DecLifeCheckExpire(wp);

    DObjGetStruct(weapon_gobj)->mobj->index = lbRandom_GetIntRange(WPPKTHUNDER_TEXTURE_COUNT - 1);

    return FALSE;
}

// 0x8016B550
bool32 wpNess_PKThunderTrail_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);

    return FALSE;
}

// 0x8016B580
GObj* wpNess_PKThunderTrail_MakeWeapon(GObj *head_gobj, Vec3f *pos, s32 trail_index)
{
    GObj *trail_gobj;
    wpStruct *trail_wp;
    wpStruct *head_wp = wpGetStruct(head_gobj);
    s32 i;

    trail_gobj = wpManager_MakeWeapon(head_gobj, &wpNess_PKThunderTrail_WeaponDesc, pos, WEAPON_MASK_SPAWN_WEAPON);

    if (trail_gobj == NULL)
    {
        return NULL;
    }

    trail_wp = wpGetStruct(trail_gobj);

    trail_gobj->renderer = wpRender_DisplayPKThunder;

    trail_wp->lifetime = WPPKTHUNDER_LIFETIME;

    if (trail_index == 0)
    {
        trail_wp->group_id = wpManager_GetGroupIndexInc(head_gobj, trail_gobj); // Bruh this doesn't any take arguments but it doesn't match otherwise
    }
    else trail_wp->group_id = head_wp->group_id;

    trail_wp->weapon_vars.pkthunder_trail.pkthunder_trail_state = wpNessPKThunder_Status_Active;
    trail_wp->weapon_vars.pkthunder_trail.trail_index = trail_index;
    trail_wp->weapon_vars.pkthunder_trail.spawn_gobj = head_gobj;

    if (trail_index != 0)
    {
        head_gobj = head_wp->weapon_vars.pkthunder.trail_gobj[0];
        head_wp = wpGetStruct(head_gobj);
    }

    trail_wp->weapon_vars.pkthunder_trail.trail_gobj[0] = head_gobj;

    for (i = 0; i < ARRAY_COUNT(head_wp->weapon_vars.pkthunder.trail_gobj); i++)
    {
        head_wp->weapon_vars.pkthunder.trail_gobj[trail_index] = trail_gobj;
    }

    return trail_gobj;
}

// 0x8016B65C
void wpNess_PKReflectHead_CreateTrail(GObj *weapon_gobj, s32 trail_index)
{
    Vec3f pos;

    pos.x = DObjGetStruct(weapon_gobj)->translate.x;
    pos.y = DObjGetStruct(weapon_gobj)->translate.y;
    pos.z = 0.0F;

    wpNess_PKReflectTrail_MakeWeapon(weapon_gobj, &pos, trail_index);
}

// 0x8016B6A0
void wpNess_PKReflectHead_SetDestroy(GObj *weapon_gobj, s32 unused)
{
    wpStruct *wp, *wp2, *wp3;
    s32 i;

    wp = wpGetStruct(weapon_gobj);

    for (i = 0; i < (ARRAY_COUNT(wp->weapon_vars.pkthunder_trail.trail_gobj) - 1); i++)
    {
        if (wpNess_PKThunderTrail_GetTrailIndexGObj(wp, i) != NULL)
        {
            wp2 = wpGetStruct(wpNess_PKThunderTrail_GetTrailIndexGObj(wp, i));
            wp2->weapon_vars.pkthunder_trail.pkthunder_trail_state = wpNessPKThunder_Status_Destroy;
            wp->weapon_vars.pkthunder_trail.trail_gobj[i] = NULL;
        }
    }

    if (wpNess_PKThunderTrail_GetTrailIndexGObj(wp, ARRAY_COUNT(wp->weapon_vars.pkthunder_trail.trail_gobj) - 1) != NULL)
    {
        wp3 = wpGetStruct(wpNess_PKThunderTrail_GetTrailIndexGObj(wp, ARRAY_COUNT(wp->weapon_vars.pkthunder_trail.trail_gobj) - 1));
        wp3->lr = RIGHT;
        wp->weapon_vars.pkthunder_trail.trail_gobj[ARRAY_COUNT(wp->weapon_vars.pkthunder_trail.trail_gobj) - 1] = NULL;
    }
}

// 0x8016B734
bool32 wpNess_PKReflectHead_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME) // This will keep spawning PK Thunder trails every time it is reflected, since lifetime is reset to 160 on each occasion
    {
        wpNess_PKReflectHead_CreateTrail(weapon_gobj, 0);
    }

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
        wpNess_PKReflectHead_SetDestroy(weapon_gobj, TRUE);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016B7AC
bool32 wpNess_PKReflectHead_ProcMap(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
        wpNess_PKReflectHead_SetDestroy(weapon_gobj, TRUE);

        return TRUE;
    }
    else return FALSE;
}

// 0x8016B7FC
bool32 wpNess_PKReflectHead_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);
    wpNess_PKReflectHead_SetDestroy(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016B840
bool32 wpNess_PKReflectHead_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPPKTHUNDER_LIFETIME; // This line is directly responsible for the PK Thunder double reflect crash; omitting it fixes the oversight

    wpMain_ReflectorSetLR(wp, fp);

    return FALSE;
}

// 0x8016B874
bool32 wpNess_PKReflectHead_ProcDead(GObj *weapon_gobj)
{
    wpNess_PKReflectHead_SetDestroy(weapon_gobj, TRUE);

    return TRUE;
}

// 0x8016B898
GObj* wpNess_PKReflectHead_MakeWeapon(GObj *old_gobj, Vec3f *pos, Vec3f *vel)
{
    s32 i;
    GObj *new_gobj;
    wpStruct *wp;
    Vec3f localvel;
    f32 unk_vec;

    new_gobj = wpManager_MakeWeapon(old_gobj, &wpNess_PKReflectHead_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_WEAPON));

    if (new_gobj == NULL) return NULL;

    wp = wpGetStruct(new_gobj);

    wp->proc_dead = wpNess_PKReflectHead_ProcDead;

    wp->lifetime = WPPKTHUNDER_LIFETIME;

    wp->group_id = wpManager_GetGroupIndexInc();

    for (i = 0; i < ARRAY_COUNT(wp->weapon_vars.pkthunder.trail_gobj); i++)
    {
        wp->weapon_vars.pkthunder.trail_gobj[i] = NULL;
    }

    localvel.x = DObjGetStruct(new_gobj)->translate.x - DObjGetStruct(wp->owner_gobj)->translate.x;
    localvel.y = DObjGetStruct(new_gobj)->translate.y - (DObjGetStruct(wp->owner_gobj)->translate.y + WPPKTHUNDER_REFLECT_POS_Y_ADD);
    localvel.z = DObjGetStruct(new_gobj)->translate.z - DObjGetStruct(wp->owner_gobj)->translate.z;

    vec3f_normalize(&localvel);

    wp->phys_info.vel_air.x = (WPPKTHUNDER_VEL * localvel.x);
    wp->phys_info.vel_air.y = (WPPKTHUNDER_VEL * localvel.y);
    wp->phys_info.vel_air.z = 0.0F;

    DObjGetStruct(new_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    return new_gobj;
}

// 0x8016B9E0
bool32 wpNess_PKReflectTrail_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 trail_index;

    if (wp->weapon_vars.pkthunder_trail.pkthunder_trail_state & wpNessPKThunder_Status_Destroy)
    {
        return TRUE;
    }

    // Game hangs on the following line when PK Thunder crash occurs (DObjGetStruct returns invalid pointer)

    DObjGetStruct(weapon_gobj)->translate.x = (DObjGetStruct(wp->weapon_vars.pkthunder_trail.trail_gobj[0])->translate.x - (wp->phys_info.vel_air.x * (wp->weapon_vars.pkthunder_trail.trail_index + 1.5) * 2.0F));
    DObjGetStruct(weapon_gobj)->translate.y = (DObjGetStruct(wp->weapon_vars.pkthunder_trail.trail_gobj[0])->translate.y - (wp->phys_info.vel_air.y * (wp->weapon_vars.pkthunder_trail.trail_index + 1.5) * 2.0F));

    trail_index = wp->weapon_vars.pkthunder_trail.trail_index;

    if ((trail_index < (ARRAY_COUNT(wp->weapon_vars.pkthunder_trail.trail_gobj) - 2)) && (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME))
    {
        wpNess_PKReflectHead_CreateTrail(weapon_gobj, trail_index + 1);

        trail_index = wp->weapon_vars.pkthunder_trail.trail_index;
    }

    if ((trail_index == (ARRAY_COUNT(wp->weapon_vars.pkthunder_trail.trail_gobj) - 2)) && (wp->lifetime == WPPKTHUNDER_SPAWN_TRAIL_FRAME))
    {
        func_ovl2_80102968(wp->weapon_vars.pkthunder_trail.trail_gobj[0]);
    }

    wpMain_DecLifeCheckExpire(wp);

    DObjGetStruct(weapon_gobj)->mobj->index = lbRandom_GetIntRange(WPPKTHUNDER_TEXTURE_COUNT - 1);

    return FALSE;
}

// 0x8016BB3C
bool32 wpNess_PKReflectTrail_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);

    return FALSE;
}

// 0x8016BB6C
GObj* wpNess_PKReflectTrail_MakeWeapon(GObj *old_gobj, Vec3f *pos, s32 trail_index)
{
    GObj *new_gobj;
    s32 unused;
    wpStruct *old_wp, *new_wp;

    old_wp = wpGetStruct(old_gobj);

    new_gobj = wpManager_MakeWeapon(old_gobj, &wpNess_PKReflectTrail_WeaponDesc, pos, WEAPON_MASK_SPAWN_WEAPON);

    if (new_gobj == NULL) return NULL;

    new_wp = wpGetStruct(new_gobj);

    new_gobj->renderer = wpRender_DisplayPKThunder;

    new_wp->lifetime = WPPKTHUNDER_LIFETIME;

    new_wp->group_id = old_wp->group_id;

    new_wp->weapon_vars.pkthunder_trail.pkthunder_trail_state = wpNessPKThunder_Status_Active;
    new_wp->weapon_vars.pkthunder_trail.trail_index = trail_index;
    new_wp->weapon_vars.pkthunder_trail.spawn_gobj = old_gobj;

    if (trail_index != 0)
    {
        old_gobj = old_wp->weapon_vars.pkthunder_trail.trail_gobj[0];
        old_wp = wpGetStruct(old_gobj);
    }

    new_wp->weapon_vars.pkthunder_trail.trail_gobj[0] = old_gobj;

    old_wp->weapon_vars.pkthunder_trail.trail_gobj[trail_index] = new_gobj;

    new_wp->phys_info.vel_air.x = old_wp->phys_info.vel_air.x;
    new_wp->phys_info.vel_air.y = old_wp->phys_info.vel_air.y;

    DObjGetStruct(new_gobj)->rotate.z = DObjGetStruct(old_gobj)->rotate.z - F_DEG_TO_RAD(90.0F); // HALF_PI32

    wpManager_UpdateHitPositions(new_gobj);

    return new_gobj;
}