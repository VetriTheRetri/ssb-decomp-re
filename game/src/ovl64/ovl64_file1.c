#include <ft/fighter.h>
#include <gm/battle.h>

// DATA

// 0x8018E1D4
f32 D_ovl64_8018E1D4[6];

// 0x8018E1EC
f32 D_ovl64_8018E1EC[5];

// 0x8018E230
Unk800D4060 D_ovl64_8018E230;

// FUNCTIONS

// 0x8018D0C0
void func_ovl64_8018D0C0(void)
{
    func_8000A5E4();
}

// 0x8018D0E0
void func_ovl64_8018D0E0(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (fighter_gobj != NULL)
    {
        ftCommon_SetAllowPlayerControl(fighter_gobj);

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    gBattleState->game_status = gmMatch_GameStatus_Go;
}

// 0x8018D134
void func_ovl64_8018D134(void)
{
    s32 player;

    for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
    {
        u16 button_new = gPlayerControllers[player].button_new;

        if (button_new & (A_BUTTON | B_BUTTON | START_BUTTON))
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_MnTitle;

            func_80005C74();
            break;
        }
    }
}

// 0x8018D19C
void func_ovl64_8018D19C(void)
{
    Unk800D4060 sp2C = D_ovl64_8018E230;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp2C, 0x1E, 1, 0);
}

// 0x8018D1EC
sb32 func_ovl64_8018D1EC(ftStruct *fp)
{
    switch (fp->status_info.status_id)
    {
    case ftStatus_Common_DeadDown:
    case ftStatus_Common_DeadLeftRight:
    case ftStatus_Common_DeadUpStar:
        return TRUE;

    default:
        return FALSE;
    }
}

// 0x8018D220
void func_ovl64_8018D220(GObj *fighter_gobj)
{
    func_ovl2_8010CF44
    (
        fighter_gobj,
        F_DEG_TO_RAD(D_ovl64_8018E1D4[lbRandom_GetIntRange(ARRAY_COUNT(D_ovl64_8018E1D4))]),
        F_DEG_TO_RAD(D_ovl64_8018E1EC[lbRandom_GetIntRange(ARRAY_COUNT(D_ovl64_8018E1EC))]),
        ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom,
        0.3F,
        28.0F
    );
}