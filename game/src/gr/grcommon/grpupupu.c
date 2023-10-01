#include <gr/ground.h>

#include <ft/fighter.h>
#include <ef/effect.h>
#include <gm/battle.h>

// 0x801058E0
s32 grCommon_Pupupu_GetPlayerCountSides(GObj *ground_gobj)
{
    s32 players_rside = 0;
    s32 players_lside = 0;
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > GRPUPUPU_WHISPY_POS_X)
        {
            players_rside++;
        }
        else players_lside++;

        fighter_gobj = fighter_gobj->group_gobj_next;
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
void grCommon_Pupupu_WhispySetWindPush(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];
    sb32 lr_wind = gGroundStruct.pupupu.lr_players;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);
        DObj *joint = fp->joint[ftParts_Joint_TopN];
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

                    ftCommon_CollDataSetVelPush(fighter_gobj, &push);
                }
            }
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
    }
}

// 0x80105AF0
void grCommon_Pupupu_UpdateWhispySleep(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.pupupu.whispy_status = grPupupu_WhispyWind_Wait;
    }
}

// 0x8012E900
grPupupuEffect grPupupu_WhispyLeaves_EffectPos[2] = 
{
    { { -715.0F, 450.0F, -696.0F }, F_DEG_TO_RAD(-157.0F) },
    { { -205.0F, 450.0F, -762.0F }, F_DEG_TO_RAD( -13.0F) }
};

// 0x8012E920
Vec3f grPupupu_WhispyDust_EffectPos[2] =
{
    { -715.0F, 100.0F, 0.0F },
    { -205.0F, 100.0F, 0.0F }
};

// 0x80105B18
void efParticle_WhispyLeaves_MakeEffect(void)
{
    efParticle *efpart;
    efTransform *eftrans;

    eftrans = NULL;
    efpart = func_ovl0_800CE9E8(gGroundStruct.pupupu.effect_bank_index | 8, 0);

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
                eftrans->translate.vec.f = grPupupu_WhispyLeaves_EffectPos[gGroundStruct.pupupu.lr_players].pos;
                eftrans->rotate.vec.f.y = grPupupu_WhispyLeaves_EffectPos[gGroundStruct.pupupu.lr_players].rotate;
            }
        }
    }
    gGroundStruct.pupupu.leaves_eftrans = eftrans;
}

// 0x80105BE8
void grCommon_Pupupu_UpdateWhispyWait(void)
{
    if (gGroundStruct.pupupu.whispy_wind_wait != 0)
    {
        gGroundStruct.pupupu.whispy_wind_wait--;
    }
    else
    {
        s32 lr = grCommon_Pupupu_GetPlayerCountSides(gGroundStruct.pupupu.map_gobj[1]);

        if (lr == -1) // -1 = Both sides of the map have an equal number of players
        {
            lr = gGroundStruct.pupupu.lr_players;
        }
        if (lr != gGroundStruct.pupupu.lr_players)
        {
            gGroundStruct.pupupu.whispy_eyes_status = grPupupu_WhispyEyes_Turn;
            gGroundStruct.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Turn;
            gGroundStruct.pupupu.whispy_status = grPupupu_WhispyWind_Turn;
            gGroundStruct.pupupu.lr_players = lr;
        }
        else
        {
            gGroundStruct.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Open;
            gGroundStruct.pupupu.whispy_status = grPupupu_WhispyWind_Open;
        }
    }
}

// 0x80105C70
void grCommon_Pupupu_UpdateWhispyTurn(void)
{
    if (gGroundStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGroundStruct.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Open;
        gGroundStruct.pupupu.whispy_status = grPupupu_WhispyWind_Open;
    }
}

// 0x80105CAC
void grCommon_Pupupu_UpdateWhispyOpen(void)
{
    if (gGroundStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGroundStruct.pupupu.whispy_status = grPupupu_WhispyWind_Blow;

        gGroundStruct.pupupu.flowers_back_status = gGroundStruct.pupupu.flowers_front_status = grPupupu_Flower_WindStart;

        gGroundStruct.pupupu.whispy_wind_duration = lbRandom_GetIntRange(GRPUPUPU_WHISPY_WIND_DURATION_RANDOM) + GRPUPUPU_WHISPY_WIND_DURATION_BASE;

        gGroundStruct.pupupu.rumble_wait = 0;

        efParticle_WhispyLeaves_MakeEffect();

        func_800269C0(alSound_SFX_PupupuWhispyWind);
    }
}

// 0x80105D20
void grCommon_Pupupu_UpdateWindRumble(void)
{
    if (gGroundStruct.pupupu.rumble_wait == 0)
    {
        efParticle_Quake_MakeEffect(0);

        gGroundStruct.pupupu.rumble_wait = GRPUPUPU_WHISPY_WIND_RUMBLE_WAIT;
    }
    gGroundStruct.pupupu.rumble_wait--;
}

// 0x80105D6C
void grCommon_Pupupu_UpdateWhispyBlow(void)
{
    gGroundStruct.pupupu.whispy_wind_duration--;

    if (gGroundStruct.pupupu.whispy_wind_duration == 0)
    {
        gGroundStruct.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Close;

        gGroundStruct.pupupu.flowers_back_status = gGroundStruct.pupupu.flowers_front_status = grPupupu_Flower_WindLoopEnd;

        gGroundStruct.pupupu.whispy_status = grPupupu_WhispyWind_Stop;

        if (gGroundStruct.eftrans != NULL)
        {
            func_ovl0_800D39D4(gGroundStruct.eftrans->unk_effect_0xB8, 1);
        }
    }
    grCommon_Pupupu_UpdateWindRumble();
}

// 0x80105DD8
void grCommon_Pupupu_UpdateWhispyStop(void)
{
    if (gGroundStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGroundStruct.pupupu.whispy_wind_wait = lbRandom_GetIntRange(GRPUPUPU_WHISPY_WAIT_DURATION_RANDOM) + GRPUPUPU_WHISPY_WAIT_DURATION_BASE;
        gGroundStruct.pupupu.whispy_status = grPupupu_WhispyWind_Wait;
    }
}

// 0x80105E34
void grCommon_Pupupu_UpdateWhispyBlink(void)
{
    if ((gGroundStruct.pupupu.whispy_eyes_status == -1) && (gGroundStruct.pupupu.map_gobj[0]->anim_frame <= 0.0F))
    {
        gGroundStruct.pupupu.whispy_blink_wait--;

        if ((gGroundStruct.pupupu.whispy_blink_wait == 0) || (gGroundStruct.pupupu.whispy_blink_wait == -10))
        {
            gGroundStruct.pupupu.whispy_eyes_status = grPupupu_WhispyEyes_Blink;

            if ((gGroundStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F) && (gGroundStruct.pupupu.whispy_status != grPupupu_WhispyWind_Blow))
            {
                gGroundStruct.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Stretch;
            }
            if (gGroundStruct.pupupu.whispy_blink_wait != 0)
            {
                gGroundStruct.pupupu.whispy_blink_wait = lbRandom_GetIntRange(GRPUPUPU_WHISPY_BLINK_WAIT_RANDOM) + GRPUPUPU_WHISPY_BLINK_WAIT_BASE;
            }
        }
    }
}

// 0x80105EF4
void grCommon_Pupupu_UpdateWhispyStatus(void)
{
    switch (gGroundStruct.pupupu.whispy_status)
    {
    case grPupupu_WhispyWind_Sleep:
        grCommon_Pupupu_UpdateWhispySleep();
        break;

    case grPupupu_WhispyWind_Wait:
        grCommon_Pupupu_UpdateWhispyWait();
        break;

    case grPupupu_WhispyWind_Turn:
        grCommon_Pupupu_UpdateWhispyTurn();
        break;

    case grPupupu_WhispyWind_Open:
        grCommon_Pupupu_UpdateWhispyOpen();
        break;

    case grPupupu_WhispyWind_Blow:
        grCommon_Pupupu_UpdateWhispyBlow();
        break;

    case grPupupu_WhispyWind_Stop:
        grCommon_Pupupu_UpdateWhispyStop();
        break;
    }
    grCommon_Pupupu_UpdateWhispyBlink();
}

void grCommon_Pupupu_FlowersBackWindStart(void)
{
    gGroundStruct.pupupu.flowers_back_wait--;

    if (gGroundStruct.pupupu.flowers_back_wait == 0)
    {
        gGroundStruct.pupupu.whispy_mouth_texture = 0;
        gGroundStruct.pupupu.flowers_back_status = grPupupu_Flower_WindLoopStart;
    }
}

void grCommon_Pupupu_FlowersBackLoopStart(void)
{
    if (gGroundStruct.pupupu.map_gobj[2]->anim_frame <= 0.0F)
    {
        gGroundStruct.pupupu.whispy_mouth_texture = 1;
        gGroundStruct.pupupu.flowers_back_status = grPupupu_Flower_WindLoop;
        gGroundStruct.pupupu.flowers_back_wait = 15;
    }
}

void grCommon_Pupupu_FlowersBackLoopEnd(void)
{
    gGroundStruct.pupupu.flowers_back_wait--;

    if (gGroundStruct.pupupu.flowers_back_wait == 0)
    {
        gGroundStruct.pupupu.whispy_mouth_texture = 2;
        gGroundStruct.pupupu.flowers_back_status = grPupupu_Flower_WindStop;
        gGroundStruct.pupupu.flowers_back_wait = 15;
    }
}

// 0x80106044
void grCommon_Pupupu_UpdateFlowersBack(void)
{
    switch (gGroundStruct.pupupu.flowers_back_status)
    {
    case grPupupu_Flower_WindStart:
        grCommon_Pupupu_FlowersBackWindStart();
        break;

    case grPupupu_Flower_WindLoopStart:
        grCommon_Pupupu_FlowersBackLoopStart();
        break;

    case grPupupu_Flower_WindLoopEnd:
        grCommon_Pupupu_FlowersBackLoopEnd();
        break;
    }
}

// 0x80105C70
void func_ovl2_80105C70(void)
{
    if (gGroundStruct.pupupu.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGroundStruct.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Open;
        gGroundStruct.pupupu.whispy_status = grPupupu_WhispyWind_Open;
    }
}

// 0x801060B0
void grCommon_Pupupu_FlowersFrontWindStart(void)
{
    gGroundStruct.pupupu.flowers_front_wait--;

    if (gGroundStruct.pupupu.flowers_front_wait == 0)
    {
        gGroundStruct.pupupu.whispy_eyes_texture = 0;
        gGroundStruct.pupupu.flowers_front_status = grPupupu_Flower_WindLoopStart;
    }
}

// 0x801060E0
void efParticle_WhispyDust_MakeEffect(void)
{
    efParticle *efpart;
    efTransform *eftrans;

    eftrans = NULL;
    efpart = func_ovl0_800CE9E8(gGroundStruct.pupupu.effect_bank_index | 8, 1);

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
                eftrans->translate.vec.f = grPupupu_WhispyDust_EffectPos[gGroundStruct.pupupu.lr_players];

                eftrans->rotate.vec.f.y = (gGroundStruct.pupupu.lr_players == 1) ? 0.0F : F_DEG_TO_RAD(180.0F);
            }
        }
    }
    gGroundStruct.pupupu.dust_eftrans = eftrans;
}

// 0x801061CC
void grCommon_Pupupu_FlowersFrontLoopStart(void)
{
    if (gGroundStruct.pupupu.map_gobj[3]->anim_frame <= 0.0F)
    {
        gGroundStruct.pupupu.whispy_eyes_texture = 1;
        gGroundStruct.pupupu.flowers_front_status = grPupupu_Flower_WindLoop;
        gGroundStruct.pupupu.flowers_front_wait = 22;

        efParticle_WhispyDust_MakeEffect();
    }
}

// 0x80106220
void grCommon_Pupupu_FlowersFrontLoopEnd(void)
{
    gGroundStruct.pupupu.flowers_front_wait--;

    if (gGroundStruct.pupupu.flowers_front_wait == 0)
    {
        gGroundStruct.pupupu.whispy_eyes_texture = 2;
        gGroundStruct.pupupu.flowers_front_status = grPupupu_Flower_WindStop;
        gGroundStruct.pupupu.flowers_front_wait = 22;

        if (gGroundStruct.pupupu.dust_eftrans != NULL)
        {
            func_ovl0_800D39D4(gGroundStruct.pupupu.dust_eftrans->unk_effect_0xB8, 1);
        }
    }
    else grCommon_Pupupu_WhispySetWindPush();
}

// 0x80106290
void grCommon_Pupupu_UpdateFlowersFront(void)
{
    switch (gGroundStruct.pupupu.flowers_front_status)
    {
    case grPupupu_Flower_WindStart:
        grCommon_Pupupu_FlowersFrontWindStart();
        break;

    case grPupupu_Flower_WindLoopStart:
        grCommon_Pupupu_FlowersFrontLoopStart();
        break;

    case grPupupu_Flower_WindLoop:
        grCommon_Pupupu_WhispySetWindPush();
        break;

    case grPupupu_Flower_WindLoopEnd:
        grCommon_Pupupu_FlowersFrontLoopEnd();
        break;
    }
}

// My brain hurts from these - actually linker things
intptr_t D_ovl2_8012E870[2][2][2] =
{
    { { 0x11A0, 0x11E0 }, { 0x12B0, 0x0000 } },
    { { 0x1220, 0x1270 }, { 0x1330, 0x0000 } }
};

intptr_t D_ovl2_8012E890[2][4][2] =
{
    { { 0x18B0, 0x1A00 }, { 0x1BE0, 0x1CE0 }, { 0x1E80, 0x20B0 }, { 0x2100, 0x22A0 } },
    { { 0x1A40, 0x1BA0 }, { 0x1D30, 0x1E30 }, { 0x22F0, 0x2540 }, { 0x2590, 0x2740 } }
};

intptr_t D_ovl2_8012E8D0[2][3] =
{
    { 0x2BE0, 0x2C30, 0x2C80 },
    { 0x2CD0, 0x2D20, 0x2D70 }
};

intptr_t D_ovl2_8012E8E8[2][3] =
{
    { 0x33E0, 0x3450, 0x34B0 },
    { 0x3510, 0x35C0, 0x3660 }
};

// 0x80106314
void grCommon_Pupupu_UpdateGObjAnims(void)
{
    if (gGroundStruct.pupupu.whispy_eyes_status != -1)
    {
        intptr_t offset = D_ovl2_8012E870[gGroundStruct.pupupu.lr_players][gGroundStruct.pupupu.whispy_eyes_status][1];

        func_8000BED8
        (
            // arg0
            gGroundStruct.pupupu.map_gobj[0],

            // arg1
            D_ovl2_8012E870[gGroundStruct.pupupu.lr_players][gGroundStruct.pupupu.whispy_eyes_status][0] + (uintptr_t)gGroundStruct.pupupu.map_head,

            // arg2
            (offset != 0) ? (void*) ((uintptr_t)gGroundStruct.pupupu.map_head + offset) : NULL,

            // arg3
            0.0F
        );
        func_8000DF34(gGroundStruct.pupupu.map_gobj[0]);

        gGroundStruct.pupupu.whispy_eyes_status = -1;
    }
    if (gGroundStruct.pupupu.whispy_mouth_status != -1)
    {
        func_8000BED8
        (
            // arg0
            gGroundStruct.pupupu.map_gobj[1],

            // arg1
            D_ovl2_8012E890[gGroundStruct.pupupu.lr_players][gGroundStruct.pupupu.whispy_mouth_status][0] + (uintptr_t)gGroundStruct.pupupu.map_head,

            // arg2
            D_ovl2_8012E890[gGroundStruct.pupupu.lr_players][gGroundStruct.pupupu.whispy_mouth_status][1] + (uintptr_t)gGroundStruct.pupupu.map_head,

            // arg3
            0.0F
        );
        func_8000DF34(gGroundStruct.pupupu.map_gobj[1]);
        gGroundStruct.pupupu.whispy_mouth_status = -1;
    }
    if (gGroundStruct.pupupu.whispy_mouth_texture != -1)
    {
        func_8000BD8C
        (
            // arg0
            gGroundStruct.pupupu.map_gobj[2], 

            // arg1
            D_ovl2_8012E8D0[gGroundStruct.pupupu.lr_players][gGroundStruct.pupupu.whispy_mouth_texture] + (uintptr_t)gGroundStruct.pupupu.map_head, 

            // arg2
            0.0F
        );
        func_8000DF34(gGroundStruct.pupupu.map_gobj[2]);
        gGroundStruct.pupupu.whispy_mouth_texture = -1;
    }
    if (gGroundStruct.pupupu.whispy_eyes_texture != -1)
    {
        func_8000BD8C
        (
            // arg0
            gGroundStruct.pupupu.map_gobj[3],

            // arg1
            D_ovl2_8012E8E8[gGroundStruct.pupupu.lr_players][gGroundStruct.pupupu.whispy_eyes_texture] + (uintptr_t)gGroundStruct.pupupu.map_head, 
            
            // arg2
            0.0F
        );
        func_8000DF34(gGroundStruct.pupupu.map_gobj[3]);

        gGroundStruct.pupupu.whispy_eyes_texture = -1;
    }
}

// 0x80106490
void grCommon_Pupupu_ProcUpdate(GObj *ground_gobj)
{
    grCommon_Pupupu_UpdateWhispyStatus();
    grCommon_Pupupu_UpdateFlowersBack();
    grCommon_Pupupu_UpdateFlowersFront();
    grCommon_Pupupu_UpdateGObjAnims();
}

// 0x801064C8
GObj* grCommon_Pupupu_MakeMapGObj(intptr_t offset1, intptr_t offset2, void (*proc_render)(GObj*), u8 dl_link)
{
    GObj *ground_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000);

    omAddGObjRenderProc(ground_gobj, proc_render, dl_link, 0x80000000U, -1);

    func_8000F590(ground_gobj, (uintptr_t)gGroundStruct.pupupu.map_head + offset1, NULL, 0x1C, 0, 0);

    if (offset2 != 0)
    {
        func_8000F8F4(ground_gobj, (uintptr_t)gGroundStruct.pupupu.map_head + offset2);
    }
    omAddGObjCommonProc(ground_gobj, func_8000DF34, 1, 5);

    return ground_gobj;
}

intptr_t D_NF_00000F00;
intptr_t D_NF_000010F0;
intptr_t D_NF_000013B0;
intptr_t D_NF_00001770;
intptr_t D_NF_00002A80;
intptr_t D_NF_000031F8;
intptr_t D_NF_00B1E640;
intptr_t D_NF_00B1E7E0;
intptr_t D_NF_00B1E7E0_again;
intptr_t D_NF_00B1F960;

// 0x8010658C
void grCommon_Pupupu_InitGroundVars(void)
{
    // Many linker things here

    gGroundStruct.pupupu.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_000010F0);

    gGroundStruct.pupupu.map_gobj[0] = grCommon_Pupupu_MakeMapGObj(&D_NF_000010F0, &D_NF_00000F00, func_ovl2_80104D90, 4);
    gGroundStruct.pupupu.map_gobj[1] = grCommon_Pupupu_MakeMapGObj(&D_NF_00001770, &D_NF_000013B0, func_ovl2_80104D90, 4);
    gGroundStruct.pupupu.map_gobj[2] = grCommon_Pupupu_MakeMapGObj(&D_NF_00002A80, 0, func_ovl2_80104D90, 4);
    gGroundStruct.pupupu.map_gobj[3] = grCommon_Pupupu_MakeMapGObj(&D_NF_000031F8, 0, func_ovl2_80105290, 0x10);

    gGroundStruct.pupupu.whispy_eyes_status     =
    gGroundStruct.pupupu.whispy_mouth_status    =
    gGroundStruct.pupupu.whispy_mouth_texture   =
    gGroundStruct.pupupu.whispy_eyes_texture    = -1;

    gGroundStruct.pupupu.whispy_status          = 0;

    gGroundStruct.pupupu.lr_players             = 1;

    gGroundStruct.pupupu.whispy_wind_wait       = lbRandom_GetIntRange(GRPUPUPU_WHISPY_WAIT_DURATION_RANDOM) + GRPUPUPU_WHISPY_WAIT_DURATION_BASE;
    gGroundStruct.pupupu.whispy_blink_wait      = lbRandom_GetIntRange(GRPUPUPU_WHISPY_BLINK_WAIT_RANDOM)    + GRPUPUPU_WHISPY_BLINK_WAIT_BASE;

    gGroundStruct.pupupu.flowers_back_status    =
    gGroundStruct.pupupu.flowers_front_status   = 0;

    gGroundStruct.pupupu.flowers_back_wait      = 15;
    gGroundStruct.pupupu.flowers_front_wait     = 22;

    gGroundStruct.pupupu.effect_bank_index = efAlloc_SetParticleBank(&D_NF_00B1E640, &D_NF_00B1E7E0, &D_NF_00B1E7E0_again, &D_NF_00B1F960);
}

// 0x801066D4
GObj* grCommon_Pupupu_MakeGround(void)
{
    GObj *ground_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000);

    omAddGObjCommonProc(ground_gobj, grCommon_Pupupu_ProcUpdate, 1, 4);
    grCommon_Pupupu_InitGroundVars();

    return ground_gobj;
}
