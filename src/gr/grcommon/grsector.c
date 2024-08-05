#include <gr/ground.h>
#include <ft/fighter.h>
#include <wp/weapon.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRSectorArwingLaser2DWeaponAttributes;     // 0x000000BC
extern intptr_t lGRSectorArwingLaser3DWeaponAttributes;     // 0x000000F0
extern intptr_t lGRSectorMapHead;                           // 0x00000000

extern intptr_t lGRSectorArwingSectorDesc0;                 // 0x00000000
extern intptr_t lGRSectorArwingSectorDesc1;                 // 0x00000250
extern intptr_t lGRSectorArwingSectorDesc2;                 // 0x000006D0
extern intptr_t lGRSectorArwingSectorDesc3;                 // 0x000003E0
extern intptr_t lGRSectorArwingSectorDesc4;                 // 0x00000D10
extern intptr_t lGRSectorArwingSectorDesc5;                 // 0x00000EB0
extern intptr_t lGRSectorArwingSectorDesc6;                 // 0x00001510
extern intptr_t lGRSectorArwingSectorDesc7;                 // 0x000011D0

extern intptr_t lGRSectorArwing0AnimJoint;                  // 0x00000000
extern intptr_t lGRSectorArwing1AnimJoint;                  // 0x00001D34
extern intptr_t lGRSectorArwing2AnimJoint;                  // 0x00001DA4
extern intptr_t lGRSectorArwing3AnimJoint;                  // 0x00001DC4
extern intptr_t lGRSectorArwing4AnimJoint;                  // 0x00001D54
extern intptr_t lGRSectorArwing5AnimJoint;                  // 0x00001DE4

extern intptr_t D_NF_000000A1;                              // 0x000000A1
extern intptr_t D_NF_00002C30;                              // 0x00002C30
extern intptr_t D_NF_00002E74;                              // 0x00002E74
extern intptr_t D_NF_00001B34;                              // 0x00001B34
extern intptr_t D_NF_00001B84;                              // 0x00001B84
extern intptr_t D_NF_00002EB4;                              // 0x00002EB4

extern f32 func_8000CB94_D794();
extern void func_8000DF34_EB34(GObj*);
extern void hal_interpolation_quadratic(void*, void*, f32);
extern void hal_interpolation_cubic(void*, void*, f32);
extern void gmCollisionGetWorldPosition();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012E940
intptr_t dGRSectorArwingSectorDescs[/* */] =
{
    &lGRSectorArwingSectorDesc0,
    &lGRSectorArwingSectorDesc1,
    &lGRSectorArwingSectorDesc2,
    &lGRSectorArwingSectorDesc3,
    &lGRSectorArwingSectorDesc4,
    &lGRSectorArwingSectorDesc5,
    &lGRSectorArwingSectorDesc6,
    &lGRSectorArwingSectorDesc7
};

// 0x8012E960
intptr_t dGRSectorArwingAnimJoints[/* */] =
{
    0x0,
    &lGRSectorArwing1AnimJoint,
    &lGRSectorArwing2AnimJoint,
    &lGRSectorArwing3AnimJoint,
    &lGRSectorArwing4AnimJoint,
    &lGRSectorArwing5AnimJoint
};

// 0x8012E978
s16 dGRSectorArwingMapPositionsX[/* */] =
{
    -3000,
        0,
     9000
}; // Arwing collision vertex / spawn positions? There should be another 0x0000, but the next array is u8, does it still get padded?

// 0x8012E980
u8 dGRSectorArwingLaserCounts[/* */] =
{
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x00,
    0x00,
    0x00
};

// 0x8012E988
u8 dGRSectorArwingPilotIDs[/* */] =
{
    0x01,
    0x01,
    0x02,
    0x03,
    0x04,
    0x04,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x03,
    0x04,
    0x04,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x03,
    0x04,
    0x04,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x02,
    0x04,
    0x04,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x02,
    0x03,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x02,
    0x03,
    0x04,
    0x04,
    0x00
};

// 0x8012E9C0
u8 dGRSectorArwingPilotWaitTimers[/* */][2] =
{
    {  0,  7 },
    {  7,  9 },
    { 16, 10 },
    { 26, 10 },
    { 36,  9 },
    { 45, 10 }
};

// 0x8012E9CC
DObjTransformTypes dGRSectorArwingTransformKinds[/* */] =
{
    { 0x53, nOMTransformNull, 0x00 },
    { nOMTransformTraRotRpyR, nOMTransformNull, 0x00 },
    { nOMTransformTra, 0x2C, 0x01 },
    { nOMTransformTra, 0x2C, 0x01 },
    { nOMTransformTra, 0x2C, 0x00 },
    { nOMTransformTra, 0x2C, 0x00 },
    { nOMTransformTra, nOMTransformNull, 0x01 },
    { nOMTransformTra, nOMTransformNull, 0x00 },
    { nOMTransformTra, 0x2C, 0x00 },
    { nOMTransformTra, nOMTransformNull, 0x00 },
    { nOMTransformTra, 0x2C, 0x01 },
    { nOMTransformNull, nOMTransformNull, 0x00 } // This might just be padding
};

// 0x8012E9F0
wpCreateDesc dGRSectorArwingWeaponLaser2DWeaponDesc =
{
    0,                                                  // Render flags?
    nWPKindArwingLaser2D,                              // Weapon Kind
    &gGRCommonStruct.sector.weapon_head,                  // Pointer to character's loaded files?
    &lGRSectorArwingLaser2DWeaponAttributes,            // Offset of weapon attributes in loaded files
    
    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,                     // Main matrix transformations
        nOMTransformNull,                           // Secondary matrix transformations?
        0                                               // ???
    },

    NULL,                                               // Proc Update
    grSectorArwingWeaponLaser2DProcMap,                 // Proc Map
    grSectorArwingWeaponLaser2DProcHit,                 // Proc Hit
    grSectorArwingWeaponLaser2DProcHit,                 // Proc Shield
    grSectorArwingWeaponLaser2DProcHop,                 // Proc Hop
    grSectorArwingWeaponLaser2DProcHit,                 // Proc Set-Off
    grSectorArwingWeaponLaser2DProcReflector,           // Proc Reflector
    grSectorArwingWeaponLaser2DProcHit                  // Proc Absorb
};

// 0x8012EA24
wpCreateDesc dGRSectorArwingWeaponLaser3DWeaponDesc =
{
    0,                                                  // Render flags?
    nWPKindArwingLaser3D,                              // Weapon Kind
    &gGRCommonStruct.sector.weapon_head,                  // Pointer to character's loaded files?
    &lGRSectorArwingLaser3DWeaponAttributes,            // Offset of weapon attributes in loaded files
    
    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,                     // Main matrix transformations
        nOMTransformNull,                           // Secondary matrix transformations?
        0                                               // ???
    },

    NULL,                                               // Proc Update
    grSectorArwingWeaponLaser3DProcMap,                 // Proc Map
    grSectorArwingWeaponLaser3DProcHit,                 // Proc Hit
    grSectorArwingWeaponLaser3DProcHit,                 // Proc Shield
    grSectorArwingWeaponLaser3DProcHit,                 // Proc Hop
    grSectorArwingWeaponLaser3DProcHit,                 // Proc Set-Off
    grSectorArwingWeaponLaser3DProcHit,                 // Proc Reflector
    grSectorArwingWeaponLaser3DProcAbsorb               // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum grSectorArwingStatus
{
    nGRSectorArwingStatusSleep,
    nGRSectorArwingStatusWait,
    nGRSectorArwingStatus2
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80106730
void func_ovl2_80106730(DObj *arg0, Vec3f *vec1, Vec3f *vec2, Vec3f *vec3)
{
    DObj *sp54 = gGRCommonStruct.sector.map_dobj[11];
    AObj *aobj = arg0->aobj;
    f32 vlen;

    while (aobj != NULL)
    {
        if ((aobj->kind != 0) && !(arg0->parent_gobj->flags & 2) && (aobj->track == 4))
        {
            vlen = func_8000CB94_D794(aobj);

            if (vlen < 0.0F)
            {
                vlen = 0.0F;
            }
            else if (vlen > 1.0F)
            {
                vlen = 1.0F;
            }
            hal_interpolation_quadratic(vec1, aobj->interpolate, vlen);
        }
        aobj = aobj->next;
    }
    if ((sp54->anim_remain != AOBJ_FRAME_NULL) && (gGRCommonStruct.sector.arwing_laser_count == 0))
    {
        aobj = sp54->aobj;

        while (aobj != NULL)
        {
            if ((aobj->kind != 0) && !(arg0->parent_gobj->flags & 2) && (aobj->track == 4))
            {
                hal_interpolation_cubic(vec3, aobj->interpolate, vlen);
            }
            aobj = aobj->next;
        }
        lbVector_Vec3fNormalize(vec3);
    }
    func_ovl0_800CD5AC(vec3, vec1, vec2);
    func_ovl0_800CD5AC(vec1, vec2, vec3);
    lbVector_Vec3fNormalize(vec1);
    lbVector_Vec3fNormalize(vec2);
    lbVector_Vec3fNormalize(vec3);
}

// 0x80106904
sb32 func_ovl2_80106904(Mtx *o_mtx, DObj *dobj, f32 arg2)
{
    f32 sx;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    Mtx44f n_mtx;
    f32 tx;
    f32 ty;
    f32 tz;

    tx = dobj->translate.vec.f.x;
    ty = dobj->translate.vec.f.y;
    tz = dobj->translate.vec.f.z;

    sp80.x = -1.0F;
    sp80.y = 0.0F;
    sp80.z = 0.0F;
    sp68.x = 0.0F;
    sp68.y = 1.0F;
    sp68.z = 0.0F;

    if (gGRCommonStruct.sector.arwing_laser_count == 2)
    {
        sp74.x = sp74.y = 0.0F;
        sp74.z = 1;
    }
    else func_ovl2_80106730(dobj, &sp80, &sp74, &sp68);

    n_mtx[0][0] = sp74.x; // sp28
    n_mtx[0][1] = sp74.y; // sp2C
    n_mtx[0][2] = sp74.z; // sp30
    n_mtx[1][0] = sp68.x; // sp38
    n_mtx[1][1] = sp68.y; // sp3C
    n_mtx[1][2] = sp68.z; // sp40
    n_mtx[2][0] = sp80.x; // sp48
    n_mtx[2][1] = sp80.y; // sp4C
    n_mtx[2][2] = sp80.z; // sp50

    n_mtx[0][3] = n_mtx[1][3] = n_mtx[2][3] = 0.0F;             // sp34, sp44, sp54

    n_mtx[3][0] = tx + gGRCommonStruct.sector.arwing_target_x;    // sp58
    n_mtx[3][1] = ty;                                           // sp5C
    n_mtx[3][2] = tz;                                           // sp60

    n_mtx[3][3] = 1.0F;                                         // sp64

    guMtxF2L(n_mtx, o_mtx);

    return 0;
}

// 0x80106A40
void func_ovl2_80106A40(DObj *dobj, AObjAnimJoint *anim_joint, f32 arg2)
{
    if (anim_joint != NULL)
    {
        gcAddDObjAnimJoint(dobj, anim_joint, 0.0F);

        dobj->is_anim_root = 0;

        gcParseDObjAnimJoint(dobj);
        func_8000CCBC_D8BC(dobj);
    }
    else
    {
        dobj->anim_remain = AOBJ_FRAME_NULL;
        dobj->is_anim_root = 0;
    }
}

// 0x80106A98
void func_ovl2_80106A98(void)
{
    if (gBattleState->game_status != nGMBattleGameStatusWait)
    {
        gGRCommonStruct.sector.arwing_status = nGRSectorArwingStatusWait;
    }
}

// 0x80106AC0
void grSectorArwingUpdateSleep(void)
{
    s32 random;

    if (gGRCommonStruct.sector.arwing_appear_timer != 0)
    {
        gGRCommonStruct.sector.arwing_appear_timer--;
    }
    else
    {
        gGRCommonStruct.sector.arwing_target_x = 0.0F;

        if (gGRCommonStruct.sector.arwing_type_cycle != 0)
        {
            random = mtTrigGetRandomIntRange(5);

            if (random == 4)
            {
                gGRCommonStruct.sector.arwing_target_x = dGRSectorArwingMapPositionsX[mtTrigGetRandomIntRange(ARRAY_COUNT(dGRSectorArwingMapPositionsX))];
            }
            gGRCommonStruct.sector.arwing_type_cycle--;
            gGRCommonStruct.sector.arwing_state_timer = mtTrigGetRandomIntRange(540) + 180;
            gGRCommonStruct.sector.arwing_pilot_current = -1;
        }
        else
        {
            random = mtTrigGetRandomIntRange(3) + 5;

            gGRCommonStruct.sector.unk_sector_0x4C = ((mtTrigGetRandomUShort() % 2) != 0) ? random - 5 : -1;

            gGRCommonStruct.sector.arwing_type_cycle = 3;
            gGRCommonStruct.sector.arwing_pilot_current = -2;
        }
        gGRCommonStruct.sector.arwing_flight_pattern = random;
        gGRCommonStruct.sector.arwing_status = 2;
        gGRCommonStruct.sector.unk_sector_0x4E = 0x3C;

        gGRCommonStruct.sector.map_dobj[1]->translate.vec.f.x =
        gGRCommonStruct.sector.map_dobj[1]->translate.vec.f.y =
        gGRCommonStruct.sector.map_dobj[1]->translate.vec.f.z = 0.0F;

        gGRCommonStruct.sector.map_dobj[1]->rotate.vec.f.x =
        gGRCommonStruct.sector.map_dobj[1]->rotate.vec.f.y =
        gGRCommonStruct.sector.map_dobj[1]->rotate.vec.f.z = 0.0F;

        gGRCommonStruct.sector.is_arwing_line_collision = FALSE;
        gGRCommonStruct.sector.is_arwing_line_active = TRUE;
        gGRCommonStruct.sector.is_arwing_z_collision = FALSE;
        gGRCommonStruct.sector.arwing_laser_ammo = 0;

        func_800269C0_275C0(nGMSoundFGMSectorAmbient1);
    }
}

// 0x80106C28
void grSectorArwingDecideZNear(void)
{
    if (ABSF(gGRCommonStruct.sector.map_dobj[0]->translate.vec.f.z) < 200.0F)
    {
        gGRCommonStruct.sector.is_arwing_z_near = TRUE;
    }
    else gGRCommonStruct.sector.is_arwing_z_near = FALSE;
}

// 0x80106C88
void func_ovl2_80106C88(void)
{
    switch (gGRCommonStruct.sector.arwing_state_timer)
    {
    case 0:
        gGRCommonStruct.sector.is_arwing_line_active = FALSE;
        break;

    case 88:
        gGRCommonStruct.sector.is_arwing_line_active = TRUE;
        break;
    }
}

// 0x80106CC4
void func_ovl2_80106CC4(void)
{
    switch (gGRCommonStruct.sector.arwing_state_timer)
    {
    case 0:
        gGRCommonStruct.sector.is_arwing_line_active = FALSE;
        break;

    case 178:
        gGRCommonStruct.sector.is_arwing_line_active = TRUE;
        break;
    }
}

// 0x80106D00
void func_ovl2_80106D00(void)
{
    if (gGRCommonStruct.sector.arwing_state_timer == 0)
    {
        gGRCommonStruct.sector.map_dobj[7]->anim_remain = AOBJ_FRAME_NULL;
        gGRCommonStruct.sector.map_dobj[7]->flags = DOBJ_FLAG_NONE;
        gGRCommonStruct.sector.map_dobj[9]->anim_remain = AOBJ_FRAME_NULL;
        gGRCommonStruct.sector.map_dobj[9]->flags = DOBJ_FLAG_NORENDER;

        func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[8], (AObjAnimJoint*) ((uintptr_t)gGRCommonStruct.sector.map_file + (intptr_t)&D_NF_00002EB4), 0.0F); // Linker thing
    }
    else if (gGRCommonStruct.sector.map_dobj[8]->anim_remain == AOBJ_FRAME_NULL)
    {
        gGRCommonStruct.sector.map_dobj[7]->flags = DOBJ_FLAG_NORENDER;
        gGRCommonStruct.sector.map_dobj[9]->flags = DOBJ_FLAG_NONE;
    }
    if (gGRCommonStruct.sector.map_dobj[1]->anim_remain == AOBJ_FRAME_NULL)
    {
        gGRCommonStruct.sector.map_dobj[0]->anim_remain = AOBJ_FRAME_NULL;
    }
}

// 0x80106DD8
void func_ovl2_80106DD8(void)
{
    if (gGRCommonStruct.sector.arwing_pilot_current != -2)
    {
        if (gGRCommonStruct.sector.arwing_pilot_current >= 0)
        {
            switch (gGRCommonStruct.sector.arwing_pilot_current)
            {
            case 1:
                func_ovl2_80106C88();
                break;

            case 4:
                func_ovl2_80106CC4();
                break;

            case 5:
                func_ovl2_80106D00();
                break;
            }
            if (gGRCommonStruct.sector.map_dobj[1]->anim_remain == AOBJ_FRAME_NULL)
            {
                gGRCommonStruct.sector.arwing_pilot_current = -1;
                gGRCommonStruct.sector.arwing_state_timer = 120;
            }
            else gGRCommonStruct.sector.arwing_state_timer++;
        }
        else
        {
            gGRCommonStruct.sector.arwing_state_timer--;

            if (gGRCommonStruct.sector.arwing_state_timer == 0)
            {
                u8 *random = &dGRSectorArwingPilotWaitTimers[gGRCommonStruct.sector.arwing_pilot_prev][0];
                s32 pilot_id = dGRSectorArwingPilotIDs[random[0] + mtTrigGetRandomIntRange(random[1])];

                if (pilot_id != 0)
                {
                    func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[1], (AObjAnimJoint*) ((intptr_t)dGRSectorArwingAnimJoints[pilot_id] + (uintptr_t)gGRCommonStruct.sector.map_head), 0.0F);
                }
                gGRCommonStruct.sector.arwing_pilot_prev = gGRCommonStruct.sector.arwing_pilot_current = pilot_id;
            }
        }
    }
}

// 0x80106F2
s32 grSectorArwingPrepareLaserCount(void)
{
    if (mtTrigGetRandomIntRange(3) >= 3)
    {
        return 2;
    }
    else return 4;
}

// 0x80106F5C
s32 grSectorArwingGetLaserAmmoCount(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];
    f32 pos_x = gGRCommonStruct.sector.map_dobj[0]->translate.vec.f.x + gGRCommonStruct.sector.arwing_target_x;
    f32 pos_y = gGRCommonStruct.sector.map_dobj[0]->translate.vec.f.y + gGRCommonStruct.sector.map_dobj[1]->translate.vec.f.y;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (gGRCommonStruct.sector.arwing_laser_count == 2)
        {
            DObj *joint = fp->joints[nFTPartsJointTopN];

            if (joint->translate.vec.f.x < pos_x)
            {
                if ((joint->translate.vec.f.y < (pos_y + 300.0F)) && (joint->translate.vec.f.y > (pos_y + -500.0F)))
                {
                    return grSectorArwingPrepareLaserCount();
                }
            }
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    return 0;
}

// 0x80107030
sb32 grSectorArwingWeaponLaser2DProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x80107074
sb32 grSectorArwingWeaponLaser2DProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return TRUE;
}

// 0x801070A4
void func_ovl2_801070A4(Vec3f *rotate, Vec3f *direction, Vec3f *vec3, Vec3f *vec4)
{
    if ((vec3->z == -1.0F) || (vec3->z == 1.0F))
    {
        if (vec3->z == -1.0F)
        {
            rotate->y = F_CST_DTOR32(90.0F);
            rotate->x = atan2f(vec4->x, vec4->y);
        }
        else
        {
            rotate->y = F_CST_DTOR32(-90.0F);
            rotate->x = atan2f(-vec4->x, vec4->y);
        }
        rotate->z = 0.0F;
    }
    else
    {
        rotate->y = asinf(-vec3->z);
        rotate->x = atan2f(vec4->z, direction->z);
        rotate->z = atan2f(vec3->y, vec3->x);
    }
}

// 0x8010719C
void func_ovl2_8010719C(Vec3f *vel, Vec3f *rotate)
{
    Vec3f sp2C;
    Vec3f sp20;
    f32 unused;
    f32 rot_z;

    sp20.x = 0.0F;

    rot_z = gGRCommonStruct.sector.map_dobj[1]->rotate.vec.f.z + F_CST_DTOR32(90.0F);

    sp20.y = __sinf(rot_z);
    sp20.z = __cosf(rot_z);

    func_ovl0_800CD5AC(&sp20, vel, &sp2C);
    func_ovl0_800CD5AC(vel, &sp2C, &sp20);
    lbVector_Vec3fNormalize(&sp2C);
    lbVector_Vec3fNormalize(&sp20);
    func_ovl2_801070A4(rotate, vel, &sp2C, &sp20);
}

// 0x80107238
sb32 grSectorArwingWeaponLaser2DProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f vel;

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    vel = wp->phys_info.vel_air;

    lbVector_Vec3fNormalize(&vel);
    func_ovl2_8010719C(&vel, &DObjGetStruct(weapon_gobj)->rotate.vec.f);

    return FALSE;
}

// 0x801072C0
sb32 grSectorArwingWeaponLaser2DProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);
    Vec3f vel;

    wpMainReflectorSetLR(wp, fp);

    vel = wp->phys_info.vel_air;

    lbVector_Vec3fNormalize(&vel);
    func_ovl2_8010719C(&vel, &DObjGetStruct(weapon_gobj)->rotate.vec.f);

    return FALSE;
}

// 0x80107330
void grSectorArwingWeaponLaser2DMakeWeapon(void)
{
    GObj *weapon_gobj;
    wpStruct *wp;
    Vec3f sp54;
    Vec3f sp48;
    Vec3f pos;
    Vec3f rotate;
    Vec3f vel;
    f32 zero = 0.0F;

    sp54.x = gGRCommonStruct.sector.map_dobj[0]->translate.vec.f.x + gGRCommonStruct.sector.arwing_target_x;
    sp54.y = gGRCommonStruct.sector.map_dobj[0]->translate.vec.f.y + gGRCommonStruct.sector.map_dobj[1]->translate.vec.f.y;

    sp48 = gGRCommonStruct.sector.map_dobj[2]->translate.vec.f;

    lbVector_Vec3fGetEulerRotation(&sp48, MTVECTOR_AXIS_Z, gGRCommonStruct.sector.map_dobj[1]->rotate.vec.f.z);

    pos.x = (sp54.x - sp48.z) - 566.0F;
    pos.y = sp54.y + sp48.y;
    pos.z = zero + sp48.x;

    weapon_gobj = wpManagerMakeWeapon(NULL, &dGRSectorArwingWeaponLaser2DWeaponDesc, &pos, WEAPON_MASK_SPAWN_GROUND);

    if (weapon_gobj != NULL)
    {
        wp = wpGetStruct(weapon_gobj);

        wp->phys_info.vel_air.x = -230.0F;

        vel.y = vel.z = 0.0F;
        vel.x = -1.0F;

        func_ovl2_8010719C(&vel, &rotate);

        DObjGetStruct(weapon_gobj)->rotate.vec.f = rotate;

        sp48 = gGRCommonStruct.sector.map_dobj[3]->translate.vec.f;

        lbVector_Vec3fGetEulerRotation(&sp48, 4, gGRCommonStruct.sector.map_dobj[1]->rotate.vec.f.z);

        pos.x = (sp54.x - sp48.z) - 566.0F;
        pos.y = sp54.y + sp48.y;
        pos.z = zero + sp48.x;

        weapon_gobj = wpManagerMakeWeapon(NULL, &dGRSectorArwingWeaponLaser2DWeaponDesc, &pos, WEAPON_MASK_SPAWN_GROUND);

        if (weapon_gobj != NULL)
        {
            wp = wpGetStruct(weapon_gobj);

            wp->phys_info.vel_air.x = -230.0F;

            DObjGetStruct(weapon_gobj)->rotate.vec.f = rotate;
        }
    }
}

// 0x80107518
sb32 grSectorArwingWeaponLaserExplodeProcUpdate(GObj *weapon_gobj)
{
    if (wpMainDecLifeCheckExpire(wpGetStruct(weapon_gobj)) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80107544
void grSectorArwingWeaponLaserExplodeInitWeaponVars(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lifetime = 16;

    wp->weapon_hit.can_reflect = FALSE;
    wp->weapon_hit.can_absorb = TRUE;
    wp->weapon_hit.can_shield = FALSE;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;

    wp->weapon_hit.size = 200.0F;

    DObjGetStruct(weapon_gobj)->display_list = NULL;

    wpMainClearHitRecord(wp);

    wp->proc_update = grSectorArwingWeaponLaserExplodeProcUpdate;

    wp->proc_map        =
    wp->proc_hit        =
    wp->proc_shield     =
    wp->proc_hop        =
    wp->proc_setoff     =
    wp->proc_hop        =
    wp->proc_reflector  =  NULL;
}

// 0x801075E0
sb32 grSectorArwingWeaponLaser3DProcMap(GObj *weapon_gobj)
{
    DObj *dobj = DObjGetStruct(weapon_gobj);

    if (ABSF(dobj->translate.vec.f.z) < 1000.0F)
    {
        if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
        {
            func_800269C0_275C0(nGMSoundFGMExplodeS);
            efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);
            grSectorArwingWeaponLaserExplodeInitWeaponVars(weapon_gobj);
        }
    }
    return FALSE;
}

// 0x80107670
sb32 grSectorArwingWeaponLaser3DProcHit(GObj *weapon_gobj)
{
    func_800269C0_275C0(nGMSoundFGMExplodeS);
    efManagerSparkleWhiteMultiExplodeMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
    grSectorArwingWeaponLaserExplodeInitWeaponVars(weapon_gobj);

    return FALSE;
}

// 0x801076B0
sb32 grSectorArwingWeaponLaser3DProcAbsorb(GObj *weapon_gobj)
{
    func_800269C0_275C0(nGMSoundFGMExplodeS);
    efManagerSparkleWhiteMultiExplodeMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x801076E8
void grSectorArwingWeaponLaser3DMakeWeapon(void)
{
    GObj *weapon_gobj;
    GObj *fighter_gobj;
    s32 random;
    s32 player;
    ftStruct *fp;
    wpStruct *wp;
    Vec3f wp_pos;
    Vec3f ft_pos;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f wp_angle;
    Mtx44f mtx;
    DObj *dobj;

    dobj = gGRCommonStruct.sector.map_dobj[0];

    func_ovl2_80106730(dobj, &sp94, &sp88, &sp7C);

    mtx[0][0] = sp88.x; // sp30
    mtx[0][1] = sp88.y; // sp34
    mtx[0][2] = sp88.z; // sp38

    mtx[1][0] = sp7C.x; // sp40
    mtx[1][1] = sp7C.y; // sp44
    mtx[1][2] = sp7C.z; // sp48

    mtx[2][0] = sp94.x; // sp50
    mtx[2][1] = sp94.y; // sp54
    mtx[2][2] = sp94.z; // sp58

    mtx[0][3] = mtx[1][3] = mtx[2][3] = 0.0F;// sp3C, sp4C, sp5C

    mtx[3][0] = dobj->translate.vec.f.x + gGRCommonStruct.sector.arwing_target_x; // sp60
    mtx[3][1] = dobj->translate.vec.f.y; // sp64
    mtx[3][2] = dobj->translate.vec.f.z;

    mtx[3][3] = 1.0F;

    wp_pos.y = 0.0F;
    wp_pos.x = 0;

    wp_pos.z = 666.0F;

    gmCollisionGetWorldPosition(&mtx, &wp_pos);

    random = mtTrigGetRandomIntRange(gBattleState->pl_count + gBattleState->cp_count);

    fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    for (player = 0; player < random; player++)
    {
        fighter_gobj = fighter_gobj->link_next;
    }
    fp = ftGetStruct(fighter_gobj);

    if ((fp->coll_data.ground_line_id == -1) || (fp->coll_data.ground_line_id == -2))
    {
        ft_pos.x = ft_pos.y = ft_pos.z = 0;
    }
    else
    {
        ft_pos = fp->joints[nFTPartsJointTopN]->translate.vec.f;

        ft_pos.y += fp->coll_data.ground_dist;
    }
    wp_angle.x = ft_pos.x - wp_pos.x;
    wp_angle.y = ft_pos.y - wp_pos.y;
    wp_angle.z = ft_pos.z - wp_pos.z;

    lbVector_Vec3fNormalize(&wp_angle);

    weapon_gobj = wpManagerMakeWeapon(NULL, &dGRSectorArwingWeaponLaser3DWeaponDesc, &wp_pos, WEAPON_MASK_SPAWN_GROUND);

    if (weapon_gobj != NULL)
    {
        wp = wpGetStruct(weapon_gobj);

        wp->phys_info.vel_air.x = wp_angle.x * 230.0F;
        wp->phys_info.vel_air.y = wp_angle.y * 230.0F;
        wp->phys_info.vel_air.z = wp_angle.z * 230.0F;

        func_ovl2_8010719C(&wp_angle, &DObjGetStruct(weapon_gobj)->rotate.vec.f);
    }
}

// 0x80107910
void func_ovl2_80107910(void)
{
    if (gGRCommonStruct.sector.arwing_laser_count == 2)
    {
        grSectorArwingWeaponLaser2DMakeWeapon();
    }
    else grSectorArwingWeaponLaser3DMakeWeapon();

    func_800269C0_275C0(nGMSoundFGMSectorArwingLaser);
}

// 0x80107958
void func_ovl2_80107958(void)
{
    // Many linker things here
    s32 ammo;
    void *mh1, *mh2;

    if (gGRCommonStruct.sector.arwing_laser_ammo == 0)
    {
        ammo = 0;

        if (gGRCommonStruct.sector.arwing_pilot_current == -2)
        {
            if 
            (
                ((gGRCommonStruct.sector.unk_sector_0x4C == 0) && (gGRCommonStruct.sector.arwing_appear_timer == 5)) || 
                ((gGRCommonStruct.sector.unk_sector_0x4C == 1) && (gGRCommonStruct.sector.arwing_appear_timer == 5))
            )
            {
                ammo = grSectorArwingPrepareLaserCount();
            }
        }
        else if (gGRCommonStruct.sector.is_arwing_z_near == 0)
        {
            gGRCommonStruct.sector.unk_sector_0x4E = 60;
            gGRCommonStruct.sector.arwing_laser_ammo = 0;
        }
        else
        {
            gGRCommonStruct.sector.unk_sector_0x4E--;

            if (gGRCommonStruct.sector.unk_sector_0x4E == 0)
            {
                ammo = grSectorArwingGetLaserAmmoCount();

                gGRCommonStruct.sector.unk_sector_0x4E = 60;
            }
        }
        if (ammo != 0)
        {
            gGRCommonStruct.sector.arwing_laser_ammo = ammo;
            gGRCommonStruct.sector.arwing_laser_timer = 0;
            gGRCommonStruct.sector.unk_sector_0x52 = 0;
        }
    }
    else
    {
        if (gGRCommonStruct.sector.arwing_laser_timer == 0)
        {
            if (gGRCommonStruct.sector.unk_sector_0x52 == 0)
            {
                mh1 = gGRCommonStruct.sector.map_head;

                func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[4], (AObjAnimJoint*)((uintptr_t)mh1 + (intptr_t)&D_NF_00001B84), 0.0F);
                func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[5], (AObjAnimJoint*)((uintptr_t)mh1 + (intptr_t)&D_NF_00001B84), 0.0F);

                gGRCommonStruct.sector.unk_sector_0x52++;
            }
            else if (gGRCommonStruct.sector.map_dobj[4]->anim_remain == AOBJ_FRAME_NULL)
            {
                mh2 = gGRCommonStruct.sector.map_head;

                func_ovl2_80107910();

                func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[2], (AObjAnimJoint*)((uintptr_t)mh2 + (intptr_t)&D_NF_00001B34), 0.0F);
                func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[3], (AObjAnimJoint*)((uintptr_t)mh2 + (intptr_t)&D_NF_00001B34), 0.0F);

                gGRCommonStruct.sector.arwing_laser_timer = 30;
                gGRCommonStruct.sector.arwing_laser_ammo--;
            }
        }
        if (gGRCommonStruct.sector.arwing_laser_timer)
        {
            gGRCommonStruct.sector.arwing_laser_timer--;
        }
        if (gGRCommonStruct.sector.arwing_laser_ammo == 0)
        {
            gGRCommonStruct.sector.unk_sector_0x4E = 240;
        }
    }
}

// 0x80107B30
void func_ovl2_80107B30(void)
{
    if ((gGRCommonStruct.sector.map_dobj[8]->anim_remain == AOBJ_FRAME_NULL) && (gGRCommonStruct.sector.map_dobj[7]->flags == DOBJ_FLAG_NONE))
    {
        func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[8], (AObjAnimJoint*)((uintptr_t)gGRCommonStruct.sector.map_file + (intptr_t)&D_NF_00002EB4), 0.0F); // Linker thing

        func_800269C0_275C0(nGMSoundFGMSectorAmbient2);
    }
}

// 0x80107BA0
void grSectorArwingUpdateCollisions(void)
{
    Vec3f pos;

    if (gGRCommonStruct.sector.arwing_pilot_current != -2)
    {
        if ((gGRCommonStruct.sector.is_arwing_line_active) && (gGRCommonStruct.sector.is_arwing_z_near))
        {
            pos.x = gGRCommonStruct.sector.map_dobj[0]->translate.vec.f.x + gGRCommonStruct.sector.arwing_target_x;
            pos.y = gGRCommonStruct.sector.map_dobj[0]->translate.vec.f.y + gGRCommonStruct.sector.map_dobj[1]->translate.vec.f.y;
            pos.z = 0.0F;

            if ((gGRCommonStruct.sector.is_arwing_z_collision == FALSE) || (gGRCommonStruct.sector.is_arwing_line_collision == FALSE))
            {
                mpCollisionSetYakumonoOnID(1);
                mpCollisionSetYakumonoPosID(1, &pos);
            }
            mpCollisionSetYakumonoPosID(1, &pos);
        }
        if ((!(gGRCommonStruct.sector.is_arwing_line_active) || !(gGRCommonStruct.sector.is_arwing_z_near)) && (gGRCommonStruct.sector.is_arwing_z_collision != FALSE) && (gGRCommonStruct.sector.is_arwing_line_collision != FALSE))
        {
            mpCollisionSetYakumonoOffID(1);
        }
        gGRCommonStruct.sector.is_arwing_line_collision = gGRCommonStruct.sector.is_arwing_line_active;
        gGRCommonStruct.sector.is_arwing_z_collision = gGRCommonStruct.sector.is_arwing_z_near;
    }
}

// 0x80107CA0
void func_ovl2_80107CA0(void)
{
    grSectorArwingDecideZNear();
    func_ovl2_80106DD8();
    func_ovl2_80107958();
    func_ovl2_80107B30();
    grSectorArwingUpdateCollisions();

    if (gGRCommonStruct.sector.map_dobj[0]->anim_remain == AOBJ_FRAME_NULL)
    {
        gGRCommonStruct.sector.map_gobj->flags = GOBJ_FLAG_NORENDER;

        gGRCommonStruct.sector.arwing_appear_timer = mtTrigGetRandomIntRange(1140) + 960;
        gGRCommonStruct.sector.arwing_status = nGRSectorArwingStatusWait;

        mpCollisionSetYakumonoOffID(1);
    }
    else gGRCommonStruct.sector.arwing_appear_timer++;
}

// 0x80107D50
void func_ovl2_80107D50(void)
{
    GObj *map_gobj;
    grSectorDesc *desc;

    if (gGRCommonStruct.sector.arwing_flight_pattern != -1)
    {
        map_gobj = gGRCommonStruct.sector.map_gobj;
        gGRCommonStruct.sector.arwing_laser_count = dGRSectorArwingLaserCounts[gGRCommonStruct.sector.arwing_flight_pattern];

        desc = (grSectorDesc*) ((intptr_t)dGRSectorArwingSectorDescs[gGRCommonStruct.sector.arwing_flight_pattern] + (uintptr_t)gGRCommonStruct.sector.map_head);

        func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[0], desc->anim_joint_0x0, 0.0F);
        func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[7], desc->anim_joint_0x1C, 0.0F);
        func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[9], desc->anim_joint_0x24, 0.0F);
        func_ovl2_80106A40(gGRCommonStruct.sector.map_dobj[11], desc->anim_joint_0x2C, 0.0F);

        gGRCommonStruct.sector.arwing_flight_pattern = -1;
        map_gobj->flags = GOBJ_FLAG_NONE;
    }
}

// 0x80107E08
void grSectorProcUpdate(GObj *ground_gobj)
{
    switch (gGRCommonStruct.sector.arwing_status)
    {
    case 0:
        func_ovl2_80106A98();
        break;

    case nGRSectorArwingStatusWait:
        grSectorArwingUpdateSleep();
        break;

    case 2:
        func_ovl2_80107CA0();
        break;
    }
    func_ovl2_80107D50();
}

// 0x80107E7C
void grSectorInitAll(void)
{
    // Many linker things here
    GObj *map_gobj;
    void *map_file;

    gGRCommonStruct.sector.map_head = (void*) ((uintptr_t)gMPCollisionGroundData->map_nodes - (intptr_t)&lGRSectorMapHead);

    map_file = rldm_get_file_force((intptr_t)&D_NF_000000A1);

    gGRCommonStruct.sector.map_file = map_file;

    map_gobj = omMakeGObjSPAfter(nOMObjCommonKindGround, NULL, nOMObjCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);

    gGRCommonStruct.sector.map_gobj = map_gobj;

    omAddGObjRenderProc(map_gobj, odRenderDObjTreeDLLinksForGObj, 6, GOBJ_DLLINKORDER_DEFAULT, -1);
    grModelSetupInitDObj(map_gobj, (DObjDesc*) ((uintptr_t)map_file + (intptr_t)&D_NF_00002C30), gGRCommonStruct.sector.map_dobj, dGRSectorArwingTransformKinds);
    omAddGObjCommonProc(map_gobj, func_8000DF34_EB34, nOMObjProcessKindProc, 5);

    gGRCommonStruct.sector.arwing_status = 0;
    gGRCommonStruct.sector.arwing_flight_pattern = -1;
    gGRCommonStruct.sector.arwing_appear_timer = 600;
    gGRCommonStruct.sector.arwing_type_cycle = 3;
    gGRCommonStruct.sector.arwing_pilot_current = -1;
    gGRCommonStruct.sector.arwing_pilot_prev = 0;
    gGRCommonStruct.sector.arwing_target_x = 0.0F;

    map_gobj->flags = GOBJ_FLAG_NORENDER;

    gcAddDObjAnimJoint(gGRCommonStruct.sector.map_dobj[10], (AObjAnimJoint*) ((uintptr_t)map_file + (intptr_t)&D_NF_00002E74), 0.0F);
    func_8000DF34_EB34(map_gobj);
    mpCollisionSetYakumonoOffID(1);
    gGRCommonStruct.sector.weapon_head = (void*) ((uintptr_t)gMPCollisionGroundData - (intptr_t)&lGRCommonHeaderStart);
}

// 0x80107FCC
GObj* grSectorMakeGround(void)
{
    GObj *map_gobj = omMakeGObjSPAfter(nOMObjCommonKindGround, NULL, nOMObjCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);

    grSectorInitAll();
    omAddGObjCommonProc(map_gobj, grSectorProcUpdate, nOMObjProcessKindProc, 4);

    return map_gobj;
}
