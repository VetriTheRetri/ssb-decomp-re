#include <ft/chara/ftmasterhand/ftmasterhand.h>

// General Master Hand code?

// 0x80157F60
void ftMasterHand_Common_InvertLR(GObj *fighter_gobj) // Turn Master Hand around?
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->lr = -fp->lr;

    fp->joint[ftParts_TopN_Joint]->rotate.y = fp->lr * HALF_PI32;
}

void func_ovl3_80157F90(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos_b;
    Vec3f pos_a;

    mpCollision_GetLREdgeLeft(fp->fighter_vars.masterhand.boss->current_line_id, &pos_b);

    mpCollision_GetLREdgeRight(fp->fighter_vars.masterhand.boss->current_line_id, &pos_a);

    if (((((pos_b.x + pos_a.x) * 0.5F) - DObjGetStruct(fighter_gobj)->translate.x) * fp->lr) < 0.0F)
    {
        ftMasterHand_Common_InvertLR(fighter_gobj);
    }
}

void func_ovl3_80158030(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.x - DObjGetStruct(fighter_gobj)->translate.x) * fp->lr) < 0.0F)
    {
        ftMasterHand_Common_InvertLR(fighter_gobj);
    }
}

void func_ovl3_80158094(s32 var, Vec3f *pos)
{
    if (lbRandom_GetShort() & 1)
    {
        mpCollision_GetLREdgeLeft(var, pos);
    }
    else mpCollision_GetLREdgeRight(var, pos);
}

void func_ovl3_801580E0(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftStruct *unk_fp = ftGetStruct(fp->fighter_vars.masterhand.boss->target_gobj);
    ftBossInfo *boss = fp->fighter_vars.masterhand.boss;

    if ((unk_fp->coll_data.ground_line_id != -1) && (unk_fp->coll_data.ground_line_id != -2))
    {
        fp->fighter_vars.masterhand.boss->current_line_id = unk_fp->coll_data.ground_line_id;
    }
    else
    {
        if ((fp->coll_data.ground_line_id != -1) && (unk_fp->coll_data.ground_line_id != -2))
        {
            fp->fighter_vars.masterhand.boss->current_line_id = fp->coll_data.ground_line_id;
        }
        else
        {
            fp->fighter_vars.masterhand.boss->current_line_id = fp->fighter_vars.masterhand.boss->default_line_id;
        }
    }
    func_ovl3_80158094(fp->fighter_vars.masterhand.boss->current_line_id, pos);

    pos->y += 100.0F;
}

// 0x8015817C
void ftMasterHand_Common_SetPosOffsetY(GObj *fighter_gobj, Vec3f *pos, f32 off_y)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    pos->x = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.x;
    pos->y = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.y + off_y;
    pos->z = 0.0F;
}

// 0x801581BC
void ftMasterHand_Common_SetPosAddVelPlayer(GObj *fighter_gobj, Vec3f *pos, f32 vel_x, f32 vel_y)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftStruct *fp_unk = ftGetStruct(fp->fighter_vars.masterhand.boss->target_gobj);
    Vec3f translate = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate;
    f32 x;
    f32 y;

    x = translate.x;

    translate.x += (lbRandom_GetShort() & 1) ? vel_x : -vel_x;

    if (mpCollision_GetUUCommonUp(fp_unk->coll_data.ground_line_id, &translate, &y, 0, 0) != FALSE)
    {
        pos->x = translate.x;
    }
    else
    {
        translate.x = (x < translate.x) ? x - vel_x : x + vel_x;

        pos->x = (mpCollision_GetUUCommonUp(fp_unk->coll_data.ground_line_id, &translate, &y, 0, 0) != FALSE) ? translate.x : x;
    }
    pos->y = (translate.y + y + vel_y);
    pos->z = 0.0F;
}

// 0x80158310
void ftMasterHand_Common_SetPosAddVelAuto(GObj *fighter_gobj, Vec3f *pos, f32 vel_x, f32 vel_y)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    pos->x = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.x + ((lbRandom_GetShort() & 1) ? vel_x : -vel_x);
    pos->y = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.y + vel_y;
    pos->z = 0.0F;
}

// I have no idea what is going on here but at least it matches
// Maybe Master Hand movement values or player tracking???

void func_ovl3_8015839C(s32 var, Vec3f *pos_input)
{
    Vec3f pos_b;
    Vec3f pos_a;
    f32 y;

    mpCollision_GetLREdgeLeft(var, &pos_b);
    mpCollision_GetLREdgeRight(var, &pos_a);

    pos_input->x = (pos_b.x + pos_a.x) * 0.5F;
    pos_input->z = 0.0F;
    pos_input->y = 0.0F;

    mpCollision_GetUUCommonUp(var, pos_input, &y, 0, 0);
    pos_input->y += y;
}

// 0x80158428
void ftMasterHand_Common_SetNextAttackWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_vars.masterhand.boss->wait_timer = ((lbRandom_GetIntRange(FTMASTERHAND_ATTACK_WAIT_MAX) + (FTMASTERHAND_ATTACK_WAIT_LEVEL_DIV / fp->cp_level)) / fp->fighter_vars.masterhand.boss->wait_div);
}

void func_ovl3_80158528(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 var_at;
    f32 var_f2;
    s32 temp_f4;

    if (fp->joint[ftParts_TopN_Joint]->translate.z > 0.0F)
    {
        var_at = 127.0F;
        var_f2 = 1.0F;
    }
    else
    {
        if (fp->joint[ftParts_TopN_Joint]->translate.z < -15000.0F)
        {
            var_f2 = 0.0F;
        }
        else
        {
            var_f2 = (fp->joint[ftParts_TopN_Joint]->translate.z - (-15000.0F)) / 15000.0F;
        }
        var_at = 127.0F;
    }

    temp_f4 = ((var_at * var_f2) + 128.0F);

    if (temp_f4 >= (U8_MAX + 1))
    {
        fp->unk_0xA8C = U8_MAX;
    }
    else
    {
        fp->unk_0xA8C = temp_f4;
    }
    if (temp_f4 >= (U8_MAX + 1))
    {
        fp->unk_0xA8D = U8_MAX;
    }
    else
    {
        fp->unk_0xA8D = temp_f4;
    }
    if (temp_f4 >= (U8_MAX + 1))
    {
        fp->unk_0xA8E = U8_MAX;
    }
    else fp->unk_0xA8E = temp_f4;
}

void func_ovl3_80158604(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->x192_flag_b4 = TRUE;
    fp->unk_0xA8F = U8_MAX;
}

void func_ovl3_80158620(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->x192_flag_b4 = FALSE;
}

void func_ovl3_80158634(GObj *fighter_gobj)
{
    ftStruct *fp;

    if (func_ovl2_800FC8EC(0) == FALSE)
    {
        while (TRUE)
        {
            fatal_printf("nothing under cll id\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    fp = ftGetStruct(fighter_gobj);

    func_ovl2_800FC900(0, 1, &fp->fighter_vars.masterhand.boss->default_line_id);
}

// 0x801586A0
void ftMasterHand_Common_UpdateMainInfo(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = fp->status_info.status_id;

    if ((status_id != ftStatus_MasterHand_Dead1) && (status_id != ftStatus_MasterHand_Dead2) && (status_id != ftStatus_MasterHand_Dead3))
    {
        if (fp->percent_damage >= 300)
        {
            func_unkmulti_8018F75C(fighter_gobj);

            if (fp->lr == LEFT)
            {
                ftMasterHand_Dead1_SetStatus(fighter_gobj);
            }
            else ftMasterHand_Dead3_SetStatus(fighter_gobj);
        }
        else if (fp->percent_damage >= 200)
        {
            fp->fighter_vars.masterhand.boss->wait_div = 1.5F;
        }
    }
}