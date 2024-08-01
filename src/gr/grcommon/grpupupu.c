#include <gr/ground.h>
#include <ft/fighter.h>
#include <ef/effect.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t D_NF_00000F00;                                  // 0x00000F00
extern intptr_t lGRPupupuMapHead;                               // 0x000010F0

extern intptr_t lGRPupupuWhispyEyesLeftTurnAnimJoint;           // 0x000011A0
extern intptr_t lGRPupupuWhispyEyesLeftTurnMatAnimJoint;        // 0x000011E0
extern intptr_t lGRPupupuWhispyEyesLeftBlinkAnimJoint;          // 0x000012B0
extern intptr_t lGRPupupuWhispyEyesRightTurnAnimJoint;          // 0x00001220
extern intptr_t lGRPupupuWhispyEyesRightTurnMatAnimJoint;       // 0x00001270
extern intptr_t lGRPupupuWhispyEyesRightBlinkAnimJoint;         // 0x00001330

extern intptr_t lGRPupupuWhispyMouthLeftStretchAnimJoint;       // 0x000018B0
extern intptr_t lGRPupupuWhispyMouthLeftStretchMatAnimJoint;    // 0x00001A00
extern intptr_t lGRPupupuWhispyMouthLeftTurnAnimJoint;          // 0x00001BE0
extern intptr_t lGRPupupuWhispyMouthLeftTurnMatAnimJoint;       // 0x00001CE0
extern intptr_t lGRPupupuWhispyMouthLeftOpenAnimJoint;          // 0x00001E80
extern intptr_t lGRPupupuWhispyMouthLeftOpenMatAnimJoint;       // 0x000020B0
extern intptr_t lGRPupupuWhispyMouthLeftCloseAnimJoint;         // 0x00002100
extern intptr_t lGRPupupuWhispyMouthLeftCloseMatAnimJoint;      // 0x000022A0
extern intptr_t lGRPupupuWhispyMouthRightStretchAnimJoint;      // 0x00001A40
extern intptr_t lGRpupupuWhispyMouthRightStretchMatAnimJoint;   // 0x00001BA0
extern intptr_t lGRPupupuWhispyMouthRightTurnAnimJoint;         // 0x00001D30
extern intptr_t lGRPupupuWhispyMouthRightTurnMatAnimJoint;      // 0x00001E30
extern intptr_t lGRPupupuWhispyMouthRightOpenAnimJoint;         // 0x000022F0
extern intptr_t lGRPupupuWhispyMouthRightOpenMatAnimJoint;      // 0x00002540
extern intptr_t lGRPupupuWhispyMouthRightCloseAnimJoint;        // 0x00002590
extern intptr_t lGRPupupuWhispyMouthRightCloseMatAnimJoint;     // 0x00002740

extern intptr_t lGRPupupuWhispyMouthLeftOpenTexture;            // 0x00002BE0
extern intptr_t lGRPupupuWhispyMouthLeftBlowTexture;            // 0x00002C30
extern intptr_t lGRPupupuWhispyMouthLeftCloseTexture;           // 0x00002C80
extern intptr_t lGRPupupuWhispyMouthRightOpenTexture;           // 0x00002CD0
extern intptr_t lGRPupupuWhispyMouthRightBlowTexture;           // 0x00002D20
extern intptr_t lGRPupupuWhispyMouthRightCloseTexture;          // 0x00002D70

extern intptr_t lGRPupupuWhispyEyesLeftTexture0;                // 0x000033E0
extern intptr_t lGRPupupuWhispyEyesLeftTexture1;                // 0x00003450
extern intptr_t lGRPupupuWhispyEyesLeftTexture2;                // 0x000034B0
extern intptr_t lGRPupupuWhispyEyesRightTexture0;               // 0x00003510
extern intptr_t lGRPupupuWhispyEyesRightTexture1;               // 0x000035C0
extern intptr_t lGRPupupuWhispyEyesRightTexture2;               // 0x00003660

extern intptr_t D_NF_000013B0;                                  // 0x000013B0
extern intptr_t lGRPupupuWhispyEyesTransformKinds;              // 0x000010F0
extern intptr_t lGRPupupuWhispyMouthTransformKinds;             // 0x00001770
extern intptr_t D_NF_00001770;                                  // 0x00001770
extern intptr_t lGRPupupuFlowersBackTrasnformKinds;             // 0x00002A80
extern intptr_t lGRPupupuFlowersFrontTransformKinds;            // 0x000031F8
extern intptr_t lGRPupupuParticleBankHeaderLo;                  // 0x00B1E640       
extern intptr_t lGRPupupuParticleBankHeaderHi;                  // 0x00B1E7E0
extern intptr_t lGRPupupuParticleBankTextureLo;                 // 0x00B1E7E0
extern intptr_t lGRPupupuParticleBankTextureHi;                 // 0x00B1F960

extern void grGeometryLayer0ProcRenderPri(GObj*);
extern void grGeometryLayer3ProcRenderPri(GObj*);
extern void func_8000DF34_EB34(GObj*);
extern void func_8000BED8_CAD8(void*, void*, void*, f32);
extern void func_8000BD8C_C98C(void*, void*, f32);
extern void func_8000F590();

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum grPupupuWhispyWindStatus
{
	nGRPupupuWhispyWindStatusSleep,
	nGRPupupuWhispyWindStatusWait,
	nGRPupupuWhispyWindStatusTurn,
	nGRPupupuWhispyWindStatusOpen,
	nGRPupupuWhispyWindStatusBlow,
	nGRPupupuWhispyWindStatusStop,
    nGRPupupuWhispyWindStatusEnumMax
};

enum grPupupuWhispyMouthStatus
{
	nGRPupupuWhispyMouthStatusStretch,
	nGRPupupuWhispyMouthStatusTurn,
	nGRPupupuWhispyMouthStatusOpen,
	nGRPupupuWhispyMouthStatusClose,
    nGRPupupuWhispyMouthStatusEnumMax
};

enum grPupupuWhispyMouthTexture
{
    nGRPupupuWhispyMouthTextureOpen,
    nGRPupupuWhispyMouthTextureBlow,
    nGRPupupuWhispyMouthTextureClose,
    nGRPupupuWhispyMouthTextureEnumMax
};

enum grPupupuWhispyEyesStatus
{
	nGRPupupuWhispyEyesStatusTurn,
	nGRPupupuWhispyEyesStatusBlink,
    nGRPupupuWhispyEyesStatusEnumMax
};

enum grPupupuWhispyEyesTexture
{
    nGRPupupuWhispyEyesTexture0,
    nGRPupupuWhispyEyesTexture1,
    nGRPupupuWhispyEyesTexture2,
    nGRPupupuWhispyEyesTextureEnumMax
};

enum grPupupuFlowerStatus
{
	nGRPupupuFlowerStatusDefault,
	nGRPupupuFlowerStatusWindStart,
	nGRPupupuFlowerStatusWindLoopStart,
	nGRPupupuFlowerStatusWindLoop,
	nGRPupupuFlowerStatusWindLoopEnd,
	nGRPupupuFlowerStatusWindStop,
    nGRPupupuFlowerStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8012E870
intptr_t dGRPupupuWhispyEyesAnims[/* */][nGRPupupuWhispyEyesStatusEnumMax][2] =
{
    { { &lGRPupupuWhispyEyesLeftTurnAnimJoint, &lGRPupupuWhispyEyesLeftTurnMatAnimJoint }, { &lGRPupupuWhispyEyesLeftBlinkAnimJoint, 0x0 } },
    { { &lGRPupupuWhispyEyesRightTurnAnimJoint, &lGRPupupuWhispyEyesRightTurnMatAnimJoint }, { &lGRPupupuWhispyEyesRightBlinkAnimJoint, 0x0 } }
};

// 0x8012E890
intptr_t dGRPupupuWhispyMouthAnims[/* */][nGRPupupuWhispyMouthStatusEnumMax][2] =
{
    // Left-facing
    { 
        { &lGRPupupuWhispyMouthLeftStretchAnimJoint, &lGRPupupuWhispyMouthLeftStretchMatAnimJoint }, 
        { &lGRPupupuWhispyMouthLeftTurnAnimJoint, &lGRPupupuWhispyMouthLeftTurnMatAnimJoint }, 
        { &lGRPupupuWhispyMouthLeftOpenAnimJoint, &lGRPupupuWhispyMouthLeftOpenMatAnimJoint }, 
        { &lGRPupupuWhispyMouthLeftCloseAnimJoint, &lGRPupupuWhispyMouthLeftCloseMatAnimJoint } 
    },

    // Right-facing
    { 
        { &lGRPupupuWhispyMouthRightStretchAnimJoint, &lGRpupupuWhispyMouthRightStretchMatAnimJoint }, 
        { &lGRPupupuWhispyMouthRightTurnAnimJoint, &lGRPupupuWhispyMouthRightTurnMatAnimJoint },
        { &lGRPupupuWhispyMouthRightOpenAnimJoint, &lGRPupupuWhispyMouthRightOpenMatAnimJoint }, 
        { &lGRPupupuWhispyMouthRightCloseAnimJoint, &lGRPupupuWhispyMouthRightCloseMatAnimJoint } 
    }
};

// 0x8012E8D0
intptr_t dGRPupupuWhispyMouthTextures[/* */][nGRPupupuWhispyMouthTextureEnumMax] =
{
    { &lGRPupupuWhispyMouthLeftOpenTexture, &lGRPupupuWhispyMouthLeftBlowTexture, &lGRPupupuWhispyMouthLeftCloseTexture },
    { &lGRPupupuWhispyMouthRightOpenTexture, &lGRPupupuWhispyMouthRightBlowTexture, &lGRPupupuWhispyMouthRightCloseTexture }
};

// 0x8012E8E8
intptr_t dGRPupupuWhispyEyesTextures[/* */][nGRPupupuWhispyEyesTextureEnumMax] =
{
    { &lGRPupupuWhispyEyesLeftTexture0, &lGRPupupuWhispyEyesLeftTexture1, &lGRPupupuWhispyEyesLeftTexture2 },
    { &lGRPupupuWhispyEyesRightTexture0, &lGRPupupuWhispyEyesRightTexture1, &lGRPupupuWhispyEyesRightTexture2 }
};

// 0x8012E900
grPupupuEffect dGRPupupuWhispyLeavesEffectAttributes[/* */] = 
{
    { { -715.0F, 450.0F, -696.0F }, F_CLC_DTOR32(-157.0F) },
    { { -205.0F, 450.0F, -762.0F }, F_CLC_DTOR32( -13.0F) }
};

// 0x8012E920
Vec3f dGRPupupuWhispyDustEffectPositions[/* */] =
{
    { -715.0F, 100.0F, 0.0F },
    { -205.0F, 100.0F, 0.0F }
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801058E0
s32 grPupupuWhispyGetLR(GObj *ground_gobj)
{
    s32 players_rside = 0;
    s32 players_lside = 0;
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->joint[nFTPartsJointTopN]->translate.vec.f.x > GRPUPUPU_WHISPY_POS_X)
        {
            players_rside++;
        }
        else players_lside++;

        fighter_gobj = fighter_gobj->link_next;
    }
    if (players_rside == players_lside)
    {
        return -1;
    }
    else if (players_rside < players_lside)
    {
        return 0;
    }
    else return 1;
}

// 0x8010595C
void grPupupuWhispySetWindPush(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];
    sb32 lr_wind = gGRCommonStruct.pupupu.lr_players;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);
        DObj *joint = fp->joint[nFTPartsJointTopN];
        f32 dist_x;
        Vec3f push;
        f32 pos_x = joint->translate.vec.f.x, pos_y = joint->translate.vec.f.y;

        if ((pos_y <= GRPUPUPU_WHISPY_WINDBOX_TOP) && (pos_y >= GRPUPUPU_WHISPY_WINDBOX_BOTTOM))
        {
            if
            (
                ((lr_wind == 0) && (pos_x >= GRPUPUPU_WHISPY_WINDBOX_EDGELEFT)  && (pos_x <= GRPUPUPU_WHISPY_POS_X)) ||
                ((lr_wind != 0) && (pos_x <= GRPUPUPU_WHISPY_WINDBOX_EDGERIGHT) && (pos_x >= GRPUPUPU_WHISPY_POS_X))
            )
            {
                dist_x = ((pos_x < GRPUPUPU_WHISPY_POS_X) ? -(pos_x - GRPUPUPU_WHISPY_POS_X) : (pos_x - GRPUPUPU_WHISPY_POS_X));

                push.x = GRPUPUPU_WHISPY_WIND_VEL_BASE - (dist_x * GRPUPUPU_WHISPY_WIND_DIST_DECAY);

                if (push.x > 0.0F)
                {
                    push.z = 0.0F;
                    push.y = 0.0F;

                    push.x = (lr_wind == 0) ? -push.x : push.x;

                    ftParamSetCollDataVelPush(fighter_gobj, &push);
                }
            }
        }
        fighter_gobj = fighter_gobj->link_next;
    }
}

// 0x80105AF0
void grPupupuWhispyUpdateSleep(void)
{
    if (gBattleState->game_status != nGMBattleGameStatusWait)
    {
        gGRCommonStruct.pupupu.whispy_status = nGRPupupuWhispyWindStatusWait;
    }
}

// 0x80105B18
void grPupupuWhispyLeavesMakeEffect(void)
{
    efParticle *efpart;
    efTransform *eftrans;

    eftrans = NULL;
    efpart = func_ovl0_800CE9E8(gGRCommonStruct.pupupu.particle_bank_id | 8, 0);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans == NULL)
        {
            func_ovl0_800CEA40(efpart);
        }
        else
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                eftrans = NULL;
            }
            else
            {
                eftrans->translate = dGRPupupuWhispyLeavesEffectAttributes[gGRCommonStruct.pupupu.lr_players].pos;
                eftrans->rotate.y = dGRPupupuWhispyLeavesEffectAttributes[gGRCommonStruct.pupupu.lr_players].rotate;
            }
        }
    }
    gGRCommonStruct.pupupu.leaves_eftrans = eftrans;
}

// 0x80105BE8
void grPupupuWhispyUpdateWait(void)
{
    if (gGRCommonStruct.pupupu.whispy_wind_wait != 0)
    {
        gGRCommonStruct.pupupu.whispy_wind_wait--;
    }
    else
    {
        s32 lr = grPupupuWhispyGetLR(gGRCommonStruct.pupupu.map_gobj[1]);

        if (lr == -1) // -1 = Both sides of the map have an equal number of players
        {
            lr = gGRCommonStruct.pupupu.lr_players;
        }
        if (lr != gGRCommonStruct.pupupu.lr_players)
        {
            gGRCommonStruct.pupupu.whispy_eyes_status = nGRPupupuWhispyEyesStatusTurn;
            gGRCommonStruct.pupupu.whispy_mouth_status = nGRPupupuWhispyMouthStatusTurn;
            gGRCommonStruct.pupupu.whispy_status = nGRPupupuWhispyWindStatusTurn;
            gGRCommonStruct.pupupu.lr_players = lr;
        }
        else
        {
            gGRCommonStruct.pupupu.whispy_mouth_status = nGRPupupuWhispyMouthStatusOpen;
            gGRCommonStruct.pupupu.whispy_status = nGRPupupuWhispyWindStatusOpen;
        }
    }
}

// 0x80105C70
void grPupupuWhispyUpdateTurn(void)
{
    if (gGRCommonStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGRCommonStruct.pupupu.whispy_mouth_status = nGRPupupuWhispyMouthStatusOpen;
        gGRCommonStruct.pupupu.whispy_status = nGRPupupuWhispyWindStatusOpen;
    }
}

// 0x80105CAC
void grPupupuWhispyUpdateOpen(void)
{
    if (gGRCommonStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGRCommonStruct.pupupu.whispy_status = nGRPupupuWhispyWindStatusBlow;

        gGRCommonStruct.pupupu.flowers_back_status = gGRCommonStruct.pupupu.flowers_front_status = nGRPupupuFlowerStatusWindStart;

        gGRCommonStruct.pupupu.whispy_wind_duration = mtTrigGetRandomIntRange(GRPUPUPU_WHISPY_WIND_DURATION_RANDOM) + GRPUPUPU_WHISPY_WIND_DURATION_BASE;

        gGRCommonStruct.pupupu.rumble_wait = 0;

        grPupupuWhispyLeavesMakeEffect();

        func_800269C0_275C0(nGMSoundFGMPupupuWhispyWind);
    }
}

// 0x80105D20
void grPupupuWhispyUpdateWindRumble(void)
{
    if (gGRCommonStruct.pupupu.rumble_wait == 0)
    {
        efManagerQuakeMakeEffect(0);

        gGRCommonStruct.pupupu.rumble_wait = GRPUPUPU_WHISPY_WIND_RUMBLE_WAIT;
    }
    gGRCommonStruct.pupupu.rumble_wait--;
}

// 0x80105D6C
void grPupupuWhispyUpdateBlow(void)
{
    gGRCommonStruct.pupupu.whispy_wind_duration--;

    if (gGRCommonStruct.pupupu.whispy_wind_duration == 0)
    {
        gGRCommonStruct.pupupu.whispy_mouth_status = nGRPupupuWhispyMouthStatusClose;

        gGRCommonStruct.pupupu.flowers_back_status = gGRCommonStruct.pupupu.flowers_front_status = nGRPupupuFlowerStatusWindLoopEnd;

        gGRCommonStruct.pupupu.whispy_status = nGRPupupuWhispyWindStatusStop;

        if (gGRCommonStruct.pupupu.leaves_eftrans != NULL)
        {
            func_ovl0_800D39D4(gGRCommonStruct.pupupu.leaves_eftrans->unk_effect_0xB8, 1);
        }
    }
    grPupupuWhispyUpdateWindRumble();
}

// 0x80105DD8
void grPupupuWhispyUpdateStop(void)
{
    if (gGRCommonStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGRCommonStruct.pupupu.whispy_wind_wait = mtTrigGetRandomIntRange(GRPUPUPU_WHISPY_WAIT_DURATION_RANDOM) + GRPUPUPU_WHISPY_WAIT_DURATION_BASE;
        gGRCommonStruct.pupupu.whispy_status = nGRPupupuWhispyWindStatusWait;
    }
}

// 0x80105E34
void grPupupuWhispyUpdateBlink(void)
{
    if ((gGRCommonStruct.pupupu.whispy_eyes_status == -1) && (gGRCommonStruct.pupupu.map_gobj[0]->anim_frame <= 0.0F))
    {
        gGRCommonStruct.pupupu.whispy_blink_wait--;

        if ((gGRCommonStruct.pupupu.whispy_blink_wait == 0) || (gGRCommonStruct.pupupu.whispy_blink_wait == -10))
        {
            gGRCommonStruct.pupupu.whispy_eyes_status = nGRPupupuWhispyEyesStatusBlink;

            if ((gGRCommonStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F) && (gGRCommonStruct.pupupu.whispy_status != nGRPupupuWhispyWindStatusBlow))
            {
                gGRCommonStruct.pupupu.whispy_mouth_status = nGRPupupuWhispyMouthStatusStretch;
            }
            if (gGRCommonStruct.pupupu.whispy_blink_wait != 0)
            {
                gGRCommonStruct.pupupu.whispy_blink_wait = mtTrigGetRandomIntRange(GRPUPUPU_WHISPY_BLINK_WAIT_RANDOM) + GRPUPUPU_WHISPY_BLINK_WAIT_BASE;
            }
        }
    }
}

// 0x80105EF4
void grPupupuUpdateWhispyStatus(void)
{
    switch (gGRCommonStruct.pupupu.whispy_status)
    {
    case nGRPupupuWhispyWindStatusSleep:
        grPupupuWhispyUpdateSleep();
        break;

    case nGRPupupuWhispyWindStatusWait:
        grPupupuWhispyUpdateWait();
        break;

    case nGRPupupuWhispyWindStatusTurn:
        grPupupuWhispyUpdateTurn();
        break;

    case nGRPupupuWhispyWindStatusOpen:
        grPupupuWhispyUpdateOpen();
        break;

    case nGRPupupuWhispyWindStatusBlow:
        grPupupuWhispyUpdateBlow();
        break;

    case nGRPupupuWhispyWindStatusStop:
        grPupupuWhispyUpdateStop();
        break;
    }
    grPupupuWhispyUpdateBlink();
}

// 0x80105F94
void grPupupuFlowersBackWindStart(void)
{
    gGRCommonStruct.pupupu.flowers_back_wait--;

    if (gGRCommonStruct.pupupu.flowers_back_wait == 0)
    {
        gGRCommonStruct.pupupu.whispy_mouth_texture = 0;
        gGRCommonStruct.pupupu.flowers_back_status = nGRPupupuFlowerStatusWindLoopStart;
    }
}

// 0x80105FC4
void grPupupuFlowersBackLoopStart(void)
{
    if (gGRCommonStruct.pupupu.map_gobj[2]->anim_frame <= 0.0F)
    {
        gGRCommonStruct.pupupu.whispy_mouth_texture = 1;
        gGRCommonStruct.pupupu.flowers_back_status = nGRPupupuFlowerStatusWindLoop;
        gGRCommonStruct.pupupu.flowers_back_wait = 15;
    }
}

// 0x80106008
void grPupupuFlowersBackLoopEnd(void)
{
    gGRCommonStruct.pupupu.flowers_back_wait--;

    if (gGRCommonStruct.pupupu.flowers_back_wait == 0)
    {
        gGRCommonStruct.pupupu.whispy_mouth_texture = 2;
        gGRCommonStruct.pupupu.flowers_back_status = nGRPupupuFlowerStatusWindStop;
        gGRCommonStruct.pupupu.flowers_back_wait = 15;
    }
}

// 0x80106044
void grPupupuFlowersBackUpdateAll(void)
{
    switch (gGRCommonStruct.pupupu.flowers_back_status)
    {
    case nGRPupupuFlowerStatusWindStart:
        grPupupuFlowersBackWindStart();
        break;

    case nGRPupupuFlowerStatusWindLoopStart:
        grPupupuFlowersBackLoopStart();
        break;

    case nGRPupupuFlowerStatusWindLoopEnd:
        grPupupuFlowersBackLoopEnd();
        break;
    }
}

// 0x801060B0
void grPupupuFlowersFrontWindStart(void)
{
    gGRCommonStruct.pupupu.flowers_front_wait--;

    if (gGRCommonStruct.pupupu.flowers_front_wait == 0)
    {
        gGRCommonStruct.pupupu.whispy_eyes_texture = 0;
        gGRCommonStruct.pupupu.flowers_front_status = nGRPupupuFlowerStatusWindLoopStart;
    }
}

// 0x801060E0
void grPupupuWhispyDustMakeEffect(void)
{
    efParticle *efpart;
    efTransform *eftrans;

    eftrans = NULL;
    efpart = func_ovl0_800CE9E8(gGRCommonStruct.pupupu.particle_bank_id | 8, 1);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans == NULL)
        {
            func_ovl0_800CEA40(efpart);
        }
        else
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                eftrans = NULL;
            }
            else
            {
                eftrans->translate = dGRPupupuWhispyDustEffectPositions[gGRCommonStruct.pupupu.lr_players];

                eftrans->rotate.y = (gGRCommonStruct.pupupu.lr_players == 1) ? 0.0F : F_CST_DTOR32(180.0F);
            }
        }
    }
    gGRCommonStruct.pupupu.dust_eftrans = eftrans;
}

// 0x801061CC
void grPupupuFlowersFrontLoopStart(void)
{
    if (gGRCommonStruct.pupupu.map_gobj[3]->anim_frame <= 0.0F)
    {
        gGRCommonStruct.pupupu.whispy_eyes_texture = 1;
        gGRCommonStruct.pupupu.flowers_front_status = nGRPupupuFlowerStatusWindLoop;
        gGRCommonStruct.pupupu.flowers_front_wait = 22;

        grPupupuWhispyDustMakeEffect();
    }
}

// 0x80106220
void grPupupuFlowersFrontLoopEnd(void)
{
    gGRCommonStruct.pupupu.flowers_front_wait--;

    if (gGRCommonStruct.pupupu.flowers_front_wait == 0)
    {
        gGRCommonStruct.pupupu.whispy_eyes_texture = 2;
        gGRCommonStruct.pupupu.flowers_front_status = nGRPupupuFlowerStatusWindStop;
        gGRCommonStruct.pupupu.flowers_front_wait = 22;

        if (gGRCommonStruct.pupupu.dust_eftrans != NULL)
        {
            func_ovl0_800D39D4(gGRCommonStruct.pupupu.dust_eftrans->unk_effect_0xB8, 1);
        }
    }
    else grPupupuWhispySetWindPush();
}

// 0x80106290
void grPupupuFlowersFrontUpdateAll(void)
{
    switch (gGRCommonStruct.pupupu.flowers_front_status)
    {
    case nGRPupupuFlowerStatusWindStart:
        grPupupuFlowersFrontWindStart();
        break;

    case nGRPupupuFlowerStatusWindLoopStart:
        grPupupuFlowersFrontLoopStart();
        break;

    case nGRPupupuFlowerStatusWindLoop:
        grPupupuWhispySetWindPush();
        break;

    case nGRPupupuFlowerStatusWindLoopEnd:
        grPupupuFlowersFrontLoopEnd();
        break;
    }
}

// 0x80106314
void grPupupuUpdateGObjAnims(void)
{
    if (gGRCommonStruct.pupupu.whispy_eyes_status != -1)
    {
        intptr_t offset = dGRPupupuWhispyEyesAnims[gGRCommonStruct.pupupu.lr_players][gGRCommonStruct.pupupu.whispy_eyes_status][1];

        func_8000BED8_CAD8
        (
            // arg0
            gGRCommonStruct.pupupu.map_gobj[0],

            // arg1
            dGRPupupuWhispyEyesAnims[gGRCommonStruct.pupupu.lr_players][gGRCommonStruct.pupupu.whispy_eyes_status][0] + (uintptr_t)gGRCommonStruct.pupupu.map_head,

            // arg2
            (offset != 0) ? (void*) ((uintptr_t)gGRCommonStruct.pupupu.map_head + offset) : NULL,

            // arg3
            0.0F
        );
        func_8000DF34_EB34(gGRCommonStruct.pupupu.map_gobj[0]);

        gGRCommonStruct.pupupu.whispy_eyes_status = -1;
    }
    if (gGRCommonStruct.pupupu.whispy_mouth_status != -1)
    {
        func_8000BED8_CAD8
        (
            // arg0
            gGRCommonStruct.pupupu.map_gobj[1],

            // arg1
            dGRPupupuWhispyMouthAnims[gGRCommonStruct.pupupu.lr_players][gGRCommonStruct.pupupu.whispy_mouth_status][0] + (uintptr_t)gGRCommonStruct.pupupu.map_head,

            // arg2
            dGRPupupuWhispyMouthAnims[gGRCommonStruct.pupupu.lr_players][gGRCommonStruct.pupupu.whispy_mouth_status][1] + (uintptr_t)gGRCommonStruct.pupupu.map_head,

            // arg3
            0.0F
        );
        func_8000DF34_EB34(gGRCommonStruct.pupupu.map_gobj[1]);

        gGRCommonStruct.pupupu.whispy_mouth_status = -1;
    }
    if (gGRCommonStruct.pupupu.whispy_mouth_texture != -1)
    {
        func_8000BD8C_C98C
        (
            // arg0
            gGRCommonStruct.pupupu.map_gobj[2], 

            // arg1
            dGRPupupuWhispyMouthTextures[gGRCommonStruct.pupupu.lr_players][gGRCommonStruct.pupupu.whispy_mouth_texture] + (uintptr_t)gGRCommonStruct.pupupu.map_head, 

            // arg2
            0.0F
        );
        func_8000DF34_EB34(gGRCommonStruct.pupupu.map_gobj[2]);

        gGRCommonStruct.pupupu.whispy_mouth_texture = -1;
    }
    if (gGRCommonStruct.pupupu.whispy_eyes_texture != -1)
    {
        func_8000BD8C_C98C
        (
            // arg0
            gGRCommonStruct.pupupu.map_gobj[3],

            // arg1
            dGRPupupuWhispyEyesTextures[gGRCommonStruct.pupupu.lr_players][gGRCommonStruct.pupupu.whispy_eyes_texture] + (uintptr_t)gGRCommonStruct.pupupu.map_head, 
            
            // arg2
            0.0F
        );
        func_8000DF34_EB34(gGRCommonStruct.pupupu.map_gobj[3]);

        gGRCommonStruct.pupupu.whispy_eyes_texture = -1;
    }
}

// 0x80106490
void grPupupuProcUpdate(GObj *ground_gobj)
{
    grPupupuUpdateWhispyStatus();
    grPupupuFlowersBackUpdateAll();
    grPupupuFlowersFrontUpdateAll();
    grPupupuUpdateGObjAnims();
}

// 0x801064C8
GObj* grPupupuMakeMapGObj(intptr_t tk, intptr_t offset2, void (*proc_render)(GObj*), u8 dl_link)
{
    GObj *ground_gobj = omMakeGObjSPAfter(nOMObjCommonKindGround, NULL, nOMObjCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(ground_gobj, proc_render, dl_link, GOBJ_DLLINKORDER_DEFAULT, -1);

    func_8000F590(ground_gobj, (uintptr_t)gGRCommonStruct.pupupu.map_head + tk, NULL, nOMTransformTraRotRpyRSca, nOMTransformNull, 0);

    if (offset2 != 0)
    {
        func_8000F8F4(ground_gobj, (uintptr_t)gGRCommonStruct.pupupu.map_head + offset2);
    }
    omAddGObjCommonProc(ground_gobj, func_8000DF34_EB34, nOMObjProcessKindProc, 5);

    return ground_gobj;
}

// 0x8010658C
void grPupupuInitAll(void)
{
    // Many linker things here

    gGRCommonStruct.pupupu.map_head = (void*) ((uintptr_t)gMPCollisionGroundData->map_nodes - (intptr_t)&lGRPupupuMapHead);

    gGRCommonStruct.pupupu.map_gobj[0] = grPupupuMakeMapGObj(&lGRPupupuMapHead, &D_NF_00000F00, grGeometryLayer0ProcRenderPri, 4);
    gGRCommonStruct.pupupu.map_gobj[1] = grPupupuMakeMapGObj(&lGRPupupuWhispyMouthTransformKinds, &D_NF_000013B0, grGeometryLayer0ProcRenderPri, 4);
    gGRCommonStruct.pupupu.map_gobj[2] = grPupupuMakeMapGObj(&lGRPupupuFlowersBackTrasnformKinds, 0x0, grGeometryLayer0ProcRenderPri, 4);
    gGRCommonStruct.pupupu.map_gobj[3] = grPupupuMakeMapGObj(&lGRPupupuFlowersFrontTransformKinds, 0x0, grGeometryLayer3ProcRenderPri, 16);

    gGRCommonStruct.pupupu.whispy_eyes_status   =
    gGRCommonStruct.pupupu.whispy_mouth_status  =
    gGRCommonStruct.pupupu.whispy_mouth_texture =
    gGRCommonStruct.pupupu.whispy_eyes_texture  = -1;

    gGRCommonStruct.pupupu.whispy_status        = 0;

    gGRCommonStruct.pupupu.lr_players           = 1;

    gGRCommonStruct.pupupu.whispy_wind_wait     = mtTrigGetRandomIntRange(GRPUPUPU_WHISPY_WAIT_DURATION_RANDOM) + GRPUPUPU_WHISPY_WAIT_DURATION_BASE;
    gGRCommonStruct.pupupu.whispy_blink_wait    = mtTrigGetRandomIntRange(GRPUPUPU_WHISPY_BLINK_WAIT_RANDOM)    + GRPUPUPU_WHISPY_BLINK_WAIT_BASE;

    gGRCommonStruct.pupupu.flowers_back_status  =
    gGRCommonStruct.pupupu.flowers_front_status = 0;

    gGRCommonStruct.pupupu.flowers_back_wait    = 15;
    gGRCommonStruct.pupupu.flowers_front_wait   = 22;

    gGRCommonStruct.pupupu.particle_bank_id = efAllocGetAddParticleBankID(&lGRPupupuParticleBankHeaderLo, &lGRPupupuParticleBankHeaderHi, &lGRPupupuParticleBankTextureLo, &lGRPupupuParticleBankTextureHi);
}

// 0x801066D4
GObj* grPupupuMakeGround(void)
{
    GObj *ground_gobj = omMakeGObjSPAfter(nOMObjCommonKindGround, NULL, nOMObjCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);

    omAddGObjCommonProc(ground_gobj, grPupupuProcUpdate, nOMObjProcessKindProc, 4);
    grPupupuInitAll();

    return ground_gobj;
}
