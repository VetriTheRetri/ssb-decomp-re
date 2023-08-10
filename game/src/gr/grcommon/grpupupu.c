#include <gr/ground.h>

#include <ft/fighter.h>
#include <ef/effect.h>
#include <gm/gmmatch.h>

#define GRPUPUPU_WHISPY_POS_X (-525.0F)
#define GRPUPUPU_WHISPY_WIND_VEL_BASE 6.0F
#define GRPUPUPU_WHISPY_WIND_DIST_DECAY 0.0006F
#define GRPUPUPU_WHISPY_WINDBOX_TOP 1000.0F
#define GRPUPUPU_WHISPY_WINDBOX_BOTTOM (-10.0F)
#define GRPUPUPU_WHISPY_WINDBOX_EDGELEFT (-2325.0F)
#define GRPUPUPU_WHISPY_WINDBOX_EDGERIGHT 2275.0F

// 0x801058E0
s32 grCommon_Pupupu_GetPlayerCountSides(GObj *ground_gobj)
{
    s32 players_rside = 0;
    s32 players_lside = 0;
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->joint[ftParts_Joint_TopN]->translate.x > GRPUPUPU_WHISPY_POS_X)
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

s8 grCommon_Pupupu_WhispyWindLR; // 0x8013141A

// 0x8010595C
void grCommon_Pupupu_WhispySetWindPush(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    bool32 lr_wind = grCommon_Pupupu_WhispyWindLR;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);
        DObj *joint = fp->joint[ftParts_Joint_TopN];
        f32 dist_x;
        Vec3f push;
        f32 pos_x = joint->translate.x, pos_y = joint->translate.y;

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

s8 D_ovl2_80131416;

// 0x80105AF0
void func_ovl2_80105AF0(void)
{
    if (gpBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        D_ovl2_80131416 = TRUE;
    }
}

extern grPupupuEffect D_ovl2_8012E900[];
extern s32 D_ovl2_80131404;
extern efTransform *D_ovl2_80131408;

// 0x80105B18
void efParticle_WhispyLeaves_MakeEffect(void)
{
    efParticle *efpart;
    efTransform *eftrans;

    eftrans = NULL;
    efpart = func_ovl0_800CE9E8(D_ovl2_80131404 | 8, 0);

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
                eftrans->translate = D_ovl2_8012E900[gGroundStruct.ground_vars.pupupu.lr_players].pos;
                eftrans->rotate.y = D_ovl2_8012E900[gGroundStruct.ground_vars.pupupu.lr_players].rotate;
            }
        }
    }
    D_ovl2_80131408 = eftrans;
}

// 0x80105BE8
void grCommon_Pupupu_UpdateWhispyWait(void)
{
    if (gGroundStruct.ground_vars.pupupu.whispy_wind_wait != 0)
    {
        gGroundStruct.ground_vars.pupupu.whispy_wind_wait--;
    }
    else
    {
        s32 lr = grCommon_Pupupu_GetPlayerCountSides(gGroundStruct.map_gobj[1]);

        if (lr == -1) // -1 = Both sides of the map have an equal number of players
        {
            lr = gGroundStruct.ground_vars.pupupu.lr_players;
        }
        if (lr != gGroundStruct.ground_vars.pupupu.lr_players)
        {
            gGroundStruct.ground_vars.pupupu.whispy_eyes_status = grPupupu_WhispyEyes_Turn;
            gGroundStruct.ground_vars.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Turn;
            gGroundStruct.ground_vars.pupupu.whispy_status = grPupupu_WhispyWind_Turn;
            gGroundStruct.ground_vars.pupupu.lr_players = lr;
        }
        else
        {
            gGroundStruct.ground_vars.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Open;
            gGroundStruct.ground_vars.pupupu.whispy_status = grPupupu_WhispyWind_Open;
        }
    }
}

// 0x80105C70
void grCommon_Pupupu_UpdateWhispyTurn(void)
{
    if (gGroundStruct.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGroundStruct.ground_vars.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Open;
        gGroundStruct.ground_vars.pupupu.whispy_status = grPupupu_WhispyWind_Open;
    }
}

// 0x80105CAC
void grCommon_Pupupu_UpdateWhispyOpen(void)
{
    if (gGroundStruct.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGroundStruct.ground_vars.pupupu.whispy_status = grPupupu_WhispyWind_Blow;

        gGroundStruct.ground_vars.pupupu.flowers_back_status = gGroundStruct.ground_vars.pupupu.flowers_front_status = grPupupu_Flower_WindStart;

        gGroundStruct.ground_vars.pupupu.whispy_wind_duration = lbRandom_GetIntRange(GRPUPUPU_WHISPY_WIND_DURATION_RANDOM) + GRPUPUPU_WHISPY_WIND_DURATION_BASE;

        gGroundStruct.ground_vars.pupupu.rumble_wait = 0;

        efParticle_WhispyLeaves_MakeEffect();

        func_800269C0(gmSound_SFX_PupupuWhispyWind);
    }
}

// 0x80105D20
void grCommon_Pupupu_UpdateWindRumble(void)
{
    if (gGroundStruct.ground_vars.pupupu.rumble_wait == 0)
    {
        efParticle_Quake_MakeEffect(0);

        gGroundStruct.ground_vars.pupupu.rumble_wait = GRPUPUPU_WHISPY_WIND_RUMBLE_WAIT;
    }
    gGroundStruct.ground_vars.pupupu.rumble_wait--;
}

// 0x80105D6C
void grCommon_Pupupu_UpdateWhispyBlow(void)
{
    gGroundStruct.ground_vars.pupupu.whispy_wind_duration--;

    if (gGroundStruct.ground_vars.pupupu.whispy_wind_duration == 0)
    {
        gGroundStruct.ground_vars.pupupu.whispy_mouth_status = grPupupu_WhispyMouth_Close;

        gGroundStruct.ground_vars.pupupu.flowers_back_status = gGroundStruct.ground_vars.pupupu.flowers_front_status = grPupupu_Flower_WindLoopEnd;

        gGroundStruct.ground_vars.pupupu.whispy_status = grPupupu_WhispyWind_Stop;

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
    if (gGroundStruct.map_gobj[1]->anim_frame <= 0.0F)
    {
        gGroundStruct.ground_vars.pupupu.whispy_wind_wait = lbRandom_GetIntRange(GRPUPUPU_WHISPY_WAIT_DURATION_RANDOM) + GRPUPUPU_WHISPY_WAIT_DURATION_BASE;
        gGroundStruct.ground_vars.pupupu.whispy_status = grPupupu_WhispyWind_Wait;
    }
}