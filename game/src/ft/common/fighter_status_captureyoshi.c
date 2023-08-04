#include <ft/chara/ftyoshi/ftyoshi.h>
#include <it/item.h>

void func_ovl3_8014C770(void) // Unused
{
	return;
}

// 0x8014C778
void ftCommon_CaptureYoshi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftCommon_CapturePulled_BitmapRotateScale(fighter_gobj, &pos, &DObjGetStruct(fighter_gobj)->rotate);

    DObjGetStruct(fighter_gobj)->translate.x = pos.x;
    DObjGetStruct(fighter_gobj)->translate.z = pos.z;

    if (fp->status_info.status_id == ftStatus_Common_CaptureYoshi)
    {
        if (fp->status_vars.common.captureyoshi.stage == 3)
        {
            ftCommon_YoshiEgg_SetStatus(fighter_gobj);
        }
        else if (fp->status_vars.common.captureyoshi.stage == 1)
        {
            fp->status_vars.common.captureyoshi.stage = 2;

            fp->is_invisible = fp->x18E_flag_b0 = TRUE;

            ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);
        }
    }
}

// 0x8014C83C
void ftCommon_CaptureYoshi_ProcCapture(GObj *fighter_gobj, GObj *capture_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp;

    ftCommon_ProcDamageStopVoice(fighter_gobj);

    if ((this_fp->item_hold != NULL) && (itGetStruct(this_fp->item_hold)->weight == It_Weight_Heavy))
    {
        ftSetupDropItem(this_fp);
    }
    if (this_fp->catch_gobj != NULL)
    {
        func_ovl3_8014B330(this_fp->catch_gobj);

        this_fp->catch_gobj = NULL;
    }
    else if (this_fp->capture_gobj != NULL)
    {
        func_ovl3_8014AECC(this_fp->capture_gobj, fighter_gobj);
    }
    this_fp->x192_flag_b3 = FALSE;

    this_fp->capture_gobj = capture_gobj;

    capture_fp = ftGetStruct(capture_gobj);

    this_fp->lr = -capture_fp->lr;

    ftMap_SetAir(this_fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CaptureYoshi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    this_fp->status_vars.common.captureyoshi.stage = 0;
    this_fp->status_vars.common.captureyoshi.breakout_wait = 0;

    ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);
    func_ovl2_800D9444(fighter_gobj);
    ftCommon_CaptureYoshi_ProcPhysics(fighter_gobj);
    func_ovl2_800DE348(fighter_gobj);
}

// 0x8014C958
void ftCommon_YoshiEgg_SpawnEggGFX(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.captureyoshi.effect_gobj == NULL)
    {
        fp->status_vars.common.captureyoshi.effect_gobj = func_ovl2_80103060(fighter_gobj);

        if (fp->status_vars.common.captureyoshi.effect_gobj != NULL)
        {
            fp->is_persist_effect = TRUE;
        }
    }
}

// 0x8014C9A0
void ftCommon_YoshiEgg_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    bool32 is_escape = FALSE;

    if (fp->status_vars.common.captureyoshi.unk_0x9 == TRUE)
    {
        is_escape = TRUE;

        if (fp->status_vars.common.captureyoshi.effect_gobj != NULL)
        {
            ftCommon_ProcStopGFX(fighter_gobj);

            fp->status_vars.common.captureyoshi.effect_gobj = NULL;
        }
    }
    else
    {
        ftCommon_YoshiEgg_SpawnEggGFX(fighter_gobj);

        if (fp->status_vars.common.captureyoshi.effect_gobj != NULL)
        {
            efStruct *ep = efGetStruct(fp->status_vars.common.captureyoshi.effect_gobj);

            if ((ep->effect_vars.basic1.lifetime == 1) && (fp->status_vars.common.captureyoshi.effect_gobj->anim_frame <= 0.0F))
            {
                is_escape = TRUE;
            }
        }
        else if (fp->command_vars.flags.flag0 == 1)
        {
            if (fp->status_vars.common.captureyoshi.breakout_wait-- <= 0)
            {
                is_escape = TRUE;
            }
        }
    }
    if (is_escape == TRUE)
    {
        Vec3f pos = DObjGetStruct(fighter_gobj)->translate;

        pos.z = 0.0F;

        func_ovl2_80103A88(&pos);
        func_ovl2_801041A0(&pos);
        func_800269C0(0x101);

        fp->phys_info.vel_air.y = FTCOMMON_YOSHIEGG_ESCAPE_VEL_Y;
        fp->phys_info.vel_air.z = 0.0F;
        fp->phys_info.vel_air.x = 0.0F;

        DObjGetStruct(fighter_gobj)->translate.y += FTCOMMON_YOSHIEGG_ESCAPE_OFF_Y;

        ftMap_SetAir(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Common_Fall, 0.0F, 1.0F, FTSTATUPDATE_DAMAGEPORT_PRESERVE);
        ftCommon_ApplyIntangibleTimer(fp, FTCOMMON_YOSHIEGG_INTANGIBLE_TIMER);
    }
}

// 0x8014CB24
void ftCommon_YoshiEgg_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.captureyoshi.effect_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(fp->status_vars.common.captureyoshi.effect_gobj)->next;

        if (fp->ground_or_air == GA_Ground)
        {
            if (ABS(fp->input.pl.stick_range.y) >= FTCOMMON_YOSHIEGG_WIGGLE_STICK_RANGE_MIN)
            {
                joint->translate.y = ((fp->input.pl.stick_range.y < 0) ? -1 : 1) * FTCOMMON_YOSHIEGG_WIGGLE_GFX_RANGE_XY;
            }
            else joint->translate.y = 0.0F;

            if (ABS(fp->input.pl.stick_range.x) >= FTCOMMON_YOSHIEGG_WIGGLE_STICK_RANGE_MIN)
            {
                joint->translate.x = ((fp->input.pl.stick_range.x < 0) ? -1 : 1) * FTCOMMON_YOSHIEGG_WIGGLE_GFX_RANGE_XY;
            }
            else joint->translate.x = 0.0F;
        }
        else
        {
            joint->translate.x = 0.0F;
            joint->translate.y = 0.0F;
        }
    }
}

// 0x8014CC0C
void ftCommon_YoshiEgg_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag0 == 0)
    {
        s32 breakout_wait = fp->breakout_wait;

        if (ftCommon_Trap_UpdateBreakoutVars(fp) == TRUE)
        {
            if (fp->status_vars.common.captureyoshi.effect_gobj != NULL)
            {
                gOMObj_SetAnimPlaybackRate(fp->status_vars.common.captureyoshi.effect_gobj, FTCOMMON_YOSHIEGG_WIGGLE_ANIM_SPEED);
            }
        }
        else if (fp->status_vars.common.captureyoshi.effect_gobj != NULL)
        {
            gOMObj_SetAnimPlaybackRate(fp->status_vars.common.captureyoshi.effect_gobj, 1.0F);
        }
        fp->status_vars.common.captureyoshi.breakout_wait -= ((breakout_wait - fp->breakout_wait) * 12);

        if (fp->status_vars.common.captureyoshi.breakout_wait-- <= 0)
        {
            fp->command_vars.flags.flag0 = 1;
            fp->status_vars.common.captureyoshi.breakout_wait = FTCOMMON_YOSHIEGG_ESCAPE_WAIT_DEFAULT;
        }
    }
    if (fp->command_vars.flags.flag0 == 1)
    {
        if (fp->status_vars.common.captureyoshi.effect_gobj != NULL)
        {
            efStruct *ep = efGetStruct(fp->status_vars.common.captureyoshi.effect_gobj);

            ep->effect_vars.basic1.unk_ef_0x1C = 1;
        }
    }
    if (fp->ground_or_air == GA_Ground)
    {
        func_ovl2_800D8BB4(fighter_gobj);
    }
    else jtgt_ovl2_800D9160(fighter_gobj);
}

// 0x8014CD24
void ftCommon_YoshiEgg_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
        {
            fp->ground_or_air = GA_Air;
        }
    }
    else if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        fp->ground_or_air = GA_Ground;
    }
}

// 0x8014CD7C
void ftCommon_YoshiEgg_ProcTrap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag0 == 0)
    {
        fp->status_vars.common.captureyoshi.breakout_wait -= ((2.0F * fp->damage_queue) / 0.5F);
    }
    if ((fp->damage_object_class == ftHitlog_ObjectClass_Ground) && (fp->damage_object_kind == 0))
    {
        fp->status_vars.common.captureyoshi.breakout_wait = 0;
        fp->status_vars.common.captureyoshi.unk_0x9 = 1;
    }
    fp->damage_kind = 4;
}

ftYoshiEggDesc Fighter_YoshiEgg_HurtDesc[Ft_Kind_EnumMax] =
{
    { 2.0F, { 0.0F, 157.0F, 0.0F }, { 180.0F, 180.0F, 180.0F } },   // Mario
    { 1.9F, { 0.0F, 155.0F, 0.0F }, { 171.0F, 171.0F, 171.0F } },   // Fox
    { 3.5F, { 0.0F, 230.0F, 0.0F }, { 245.0F, 245.0F, 245.0F } },   // Donkey Kong
    { 2.2F, { 0.0F, 163.0F, 0.0F }, { 198.0F, 198.0F, 198.0F } },   // Samus
    { 2.2F, { 0.0F, 160.0F, 0.0F }, { 188.0F, 188.0F, 188.0F } },   // Luigi
    { 2.0F, { 0.0F, 133.0F, 0.0F }, { 148.0F, 148.0F, 148.0F } },   // Link
    { 2.5F, { 0.0F, 175.0F, 0.0F }, { 210.0F, 210.0F, 210.0F } },   // Yoshi
    { 2.2F, { 0.0F, 156.0F, 0.0F }, { 198.0F, 198.0F, 198.0F } },   // Captain Falcon
    { 1.8F, { 0.0F, 132.0F, 0.0F }, { 164.0F, 164.0F, 164.0F } },   // Kirby
    { 1.8F, { 0.0F, 144.0F, 0.0F }, { 165.0F, 165.0F, 165.0F } },   // Pikachu
    { 2.0F, { 0.0F, 144.0F, 0.0F }, { 162.0F, 162.0F, 162.0F } },   // Jigglypuff
    { 1.8F, { 0.0F, 160.0F, 0.0F }, { 168.0F, 168.0F, 168.0F } },   // Ness
    { 2.0F, { 0.0F, 157.0F, 0.0F }, { 180.0F, 180.0F, 180.0F } },   // Master Hand
    { 2.0F, { 0.0F, 157.0F, 0.0F }, { 180.0F, 180.0F, 180.0F } },   // Metal Mario
    { 2.0F, { 0.0F, 157.0F, 0.0F }, { 180.0F, 180.0F, 180.0F } },   // Poly Mario
    { 1.9F, { 0.0F, 155.0F, 0.0F }, { 171.0F, 171.0F, 171.0F } },   // Poly Fox
    { 3.5F, { 0.0F, 230.0F, 0.0F }, { 245.0F, 245.0F, 245.0F } },   // Poly Donkey Kong
    { 2.2F, { 0.0F, 163.0F, 0.0F }, { 198.0F, 198.0F, 198.0F } },   // Poly Samus
    { 2.2F, { 0.0F, 160.0F, 0.0F }, { 188.0F, 188.0F, 188.0F } },   // Poly Luigi
    { 2.0F, { 0.0F, 133.0F, 0.0F }, { 148.0F, 148.0F, 148.0F } },   // Poly Link
    { 2.5F, { 0.0F, 175.0F, 0.0F }, { 210.0F, 210.0F, 210.0F } },   // Poly Yoshi
    { 2.2F, { 0.0F, 156.0F, 0.0F }, { 198.0F, 198.0F, 198.0F } },   // Poly Captain Falcon
    { 1.8F, { 0.0F, 132.0F, 0.0F }, { 164.0F, 164.0F, 164.0F } },   // Poly Kirby
    { 1.8F, { 0.0F, 144.0F, 0.0F }, { 165.0F, 165.0F, 165.0F } },   // Poly Pikachu
    { 2.0F, { 0.0F, 144.0F, 0.0F }, { 162.0F, 162.0F, 162.0F } },   // Poly Jigglypuff
    { 1.8F, { 0.0F, 160.0F, 0.0F }, { 168.0F, 168.0F, 168.0F } },   // Poly Ness
    { 5.7F, { 0.0F, 400.0F, 0.0F }, { 350.0F, 350.0F, 350.0F } }    // Giant Donkey Kong
};

// 0x8014CDFC
void ftCommon_YoshiEgg_SetHurt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftHurtbox *ft_hurt = &fp->fighter_hurt[0];
    ftYoshiEggDesc *egg = &Fighter_YoshiEgg_HurtDesc[fp->ft_kind];
    s32 i;

    ft_hurt->joint = fp->joint[ftParts_TopN_Joint];
    ft_hurt->joint_index = 0;
    ft_hurt->placement = 1;
    ft_hurt->is_grabbable = 0;
    ft_hurt->offset = egg->offset;
    ft_hurt->size = egg->size;

    ft_hurt++;

    for (i = 1; i < ARRAY_COUNT(fp->fighter_hurt); i++, ft_hurt++)
    {
        if (ft_hurt->hitstatus != gmHitCollision_HitStatus_None)
        {
            ft_hurt->hitstatus = gmHitCollision_HitStatus_Intangible;
        }
    }
    fp->is_hitstatus_nodamage = TRUE;
    fp->is_hurtbox_modify = TRUE;
}

// 0x8014CF0C
void ftCommon_YoshiEgg_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.captureyoshi.breakout_wait = FTCOMMON_YOSHIEGG_ESCAPE_WAIT_MAX;

    fp->command_vars.flags.flag0 = 0;
}

// 0x8014CF20
void ftCommon_YoshiEgg_SetStatus(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp;

    if (this_fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(this_fp);
    }
    this_fp->proc_status = ftCommon_YoshiEgg_ProcStatus;

    ftMap_SetAir(this_fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_YoshiEgg, 0.0F, 0.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);

    this_fp->is_invisible = TRUE;

    ftCommon_YoshiEgg_SetHurt(fighter_gobj);
    ftCommon_Trap_InitBreakoutVars(this_fp, FTCOMMON_YOSHIEGG_BREAKOUT_INPUTS_MIN);
    ftKirby_SpecialN_ApplyCaptureDamage(this_fp->capture_gobj, fighter_gobj, 5);
    func_ovl2_800E7F7C(fighter_gobj, 1);

    capture_fp = ftGetStruct(this_fp->capture_gobj);

    DObjGetStruct(fighter_gobj)->translate = DObjGetStruct(this_fp->capture_gobj)->translate;
    DObjGetStruct(fighter_gobj)->translate.x -= (capture_fp->lr * FTCOMMON_YOSHIEGG_LAY_OFF_X);
    DObjGetStruct(fighter_gobj)->translate.y += FTCOMMON_YOSHIEGG_LAY_OFF_Y;

    func_ovl2_800DF014(fighter_gobj, &DObjGetStruct(this_fp->capture_gobj)->translate, &ftGetStruct(this_fp->capture_gobj)->coll_data);

    this_fp->phys_info.vel_air.x = -capture_fp->lr * FTCOMMON_YOSHIEGG_LAY_VEL_X;
    this_fp->phys_info.vel_air.y = FTCOMMON_YOSHIEGG_LAY_VEL_Y;
    this_fp->damage_mul = FTCOMMON_YOSHIEGG_DAMAGE_MUL;

    this_fp->capture_gobj = NULL;

    this_fp->proc_trap = ftCommon_YoshiEgg_ProcTrap;

    this_fp->status_vars.common.captureyoshi.lr = capture_fp->lr;
    this_fp->status_vars.common.captureyoshi.effect_gobj = NULL;
    this_fp->status_vars.common.captureyoshi.unk_0x9 = 0;

    ftCommon_Update1PGameDamageStats(this_fp, capture_fp->player, ftHitlog_ObjectClass_Fighter, capture_fp->ft_kind, capture_fp->stat_flags.halfword, capture_fp->stat_count);
    ftCommon_YoshiEgg_SpawnEggGFX(fighter_gobj);
}
