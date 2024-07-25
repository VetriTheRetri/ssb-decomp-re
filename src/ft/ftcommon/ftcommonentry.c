#include <ft/fighter.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x801884A0
s32 dFTCommonEntryAppearStatusIDs[/* */][2] =
{
    { ftStatus_Mario_AppearR,        ftStatus_Mario_AppearL         }, // Mario
    { ftStatus_Fox_AppearR,          ftStatus_Fox_AppearL           }, // Fox
    { ftStatus_Donkey_AppearR,       ftStatus_Donkey_AppearL        }, // Donkey Kong
    { ftStatus_Samus_AppearR,        ftStatus_Samus_AppearL         }, // Samus
    { ftStatus_Mario_AppearR,        ftStatus_Mario_AppearL         }, // Luigi
    { ftStatus_Link_AppearR,         ftStatus_Link_AppearL          }, // Link
    { ftStatus_Yoshi_AppearR,        ftStatus_Yoshi_AppearL         }, // Yoshi
    { ftStatus_Captain_AppearRStart, ftStatus_Captain_AppearLStart, }, // Captain Falcon
    { ftStatus_Kirby_AppearR,        ftStatus_Kirby_AppearL         }, // Kirby
    { ftStatus_Pikachu_AppearR,      ftStatus_Pikachu_AppearL       }, // Pikachu
    { ftStatus_Purin_AppearR,        ftStatus_Purin_AppearL         }, // Jigglypuff
    { ftStatus_Ness_AppearRStart,    ftStatus_Ness_AppearLStart     }, // Ness
    { ftStatus_Boss_Appear,          ftStatus_Boss_Appear           }, // Master Hand
    { ftStatus_Mario_AppearR,        ftStatus_Mario_AppearL         }, // Metal Mario
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Mario
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Fox
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Donkey Kong
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Samus
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Luigi
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Link
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Yoshi
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Captain Falcon
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Kirby
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Pikachu
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Jigglypuff
    { ftStatus_Common_EntryNull,     ftStatus_Common_EntryNull      }, // Poly Ness
    { ftStatus_Donkey_AppearR,       ftStatus_Donkey_AppearL        }  // Giant Donkey Kong
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013D930
void ftCommonEntrySetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_Entry, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_invisible = TRUE;
    fp->x18E_flag_b0 = TRUE;
    fp->is_nullstatus = TRUE;
    fp->is_playertag_hide = TRUE;
}

// 0x8013D994
void ftCommonEntryNullProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.entry.entry_wait != 0)
    {
        fp->status_vars.common.entry.entry_wait--;

        if (fp->status_vars.common.entry.entry_wait == 0)
        {
            if (fp->ft_kind == Ft_Kind_MasterHand)
            {
                ftBossWaitSetStatus(fighter_gobj);
            }
            else
            {
                fp->lr = fp->status_vars.common.entry.lr_entry;

                DObjGetStruct(fighter_gobj)->translate.vec.f = fp->entry_pos;

                fp->coll_data.ground_line_id = fp->status_vars.common.entry.ground_line_id;

                ftCommonWaitSetStatus(fighter_gobj);
            }
        }
    }
}

// 0x8013DA14
void ftCommonAppearUpdateEffects(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        if ((fp->ft_kind == Ft_Kind_Pikachu) || (fp->ft_kind == Ft_Kind_Purin) || (fp->ft_kind == Ft_Kind_PolyPikachu) || (fp->ft_kind == Ft_Kind_PolyPurin))
        {
            efManagerMBallRaysMakeEffect(&fp->entry_pos);
        }
        fp->command_vars.flags.flag1 = 0;
    }
    if (fp->command_vars.flags.flag2 != 0)
    {
        fp->command_vars.flags.flag2 = 0;

        fp->x18E_flag_b0 = FALSE;
    }
}

// 0x8013DA94
void ftCommonAppearProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonAppearUpdateEffects(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        fp->lr = fp->status_vars.common.entry.lr_entry;

        DObjGetStruct(fighter_gobj)->translate.vec.f = fp->entry_pos;

        fp->coll_data.ground_line_id = fp->status_vars.common.entry.ground_line_id;

        if (fp->ft_kind == Ft_Kind_MasterHand)
        {
            ftBossWaitSetStatus(fighter_gobj);
        }
        else ftCommonWaitSetStatus(fighter_gobj);
    }
}

// 0x8013DB2C
void ftCommonAppearProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *topn_joint = fp->joint[ftParts_Joint_TopN];
    DObj *transn_joint = fp->joint[ftParts_Joint_TransN];

    topn_joint->translate.vec.f.y = fp->entry_pos.y + transn_joint->translate.vec.f.y;

    if (fp->status_vars.common.entry.is_rotate != FALSE)
    {
        topn_joint->translate.vec.f.x = fp->entry_pos.x - transn_joint->translate.vec.f.x;
        topn_joint->translate.vec.f.z = fp->entry_pos.z - transn_joint->translate.vec.f.z;

        topn_joint->rotate.vec.f.y = F_CST_DTOR32(180.0F);
    }
    else
    {
        topn_joint->translate.vec.f.x = fp->entry_pos.x + transn_joint->translate.vec.f.x;
        topn_joint->translate.vec.f.z = fp->entry_pos.z + transn_joint->translate.vec.f.z;
    }
}

// 0x8013DBAC
void ftCommonAppearInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_nullstatus = TRUE;

    fp->camera_mode = 3;

    fp->x18E_flag_b0 = TRUE;
    fp->is_playertag_hide = TRUE;
}

// 0x8013DBE0
void ftCommonAppearSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    s32 entry_id;
    GObj *boss_target_gobj;

    entry_id = (fp->lr == LR_Right) ? 0 : 1;

    fp->entry_pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    fp->status_vars.common.entry.is_rotate = FALSE;

    fp->status_vars.common.entry.lr_entry = fp->lr;

    fp->lr = LR_Center;

    fp->status_vars.common.entry.ground_line_id = fp->coll_data.ground_line_id;

    status_id = dFTCommonEntryAppearStatusIDs[fp->ft_kind][entry_id];

    switch (fp->ft_kind)
    {
    case Ft_Kind_Mario:
    case Ft_Kind_Luigi:
    case Ft_Kind_MetalMario:
        efManagerMarioEntryDokanMakeEffect(&fp->entry_pos, fp->ft_kind);
        break;

    case Ft_Kind_Fox:
        efManagerFoxEntryArwingMakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Donkey:
    case Ft_Kind_GiantDonkey:
        efManagerDonkeyEntryTaruMakeEffect(&fp->entry_pos);
        break;

    case Ft_Kind_Samus:
        efManagerSamusEntryPointMakeEffect(&fp->entry_pos);
        break;

    case Ft_Kind_Link:
        efManagerLinkEntryWaveMakeEffect(&fp->entry_pos);
        efManagerLinkEntryBeamMakeEffect(&fp->entry_pos);
        break;

    case Ft_Kind_Yoshi:
        efManagerYoshiEntryEggMakeEffect(&fp->entry_pos);
        break;

    case Ft_Kind_Kirby:
        efManagerKirbyEntryStarMakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Pikachu:
    case Ft_Kind_Purin:
        efManagerMBallThrownMakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Captain:
        if (fp->status_vars.common.entry.lr_entry == LR_Left)
        {
            fp->status_vars.common.entry.is_rotate = TRUE;
        }
        efManagerCaptainEntryCarMakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_MasterHand:
        boss_target_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

        while (boss_target_gobj != NULL)
        {
            if (boss_target_gobj != fighter_gobj) 
            {
                break; // This assumes Master Hand has found its target, since it is not his own object
            }
            else boss_target_gobj = boss_target_gobj->link_next;
        }
        fp->fighter_vars.boss.p->target_gobj = boss_target_gobj;

        break;
    }
    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommonAppearInitStatusVars(fighter_gobj);

    fp->status_vars.common.entry.entry_wait = FTCOMMON_ENTRY_WAIT;

    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag0 = 0;

    if ((fp->ft_kind == Ft_Kind_Captain) && (fp->status_vars.common.entry.lr_entry == LR_Left))
    {
        ftRenderSwapDLLink(fighter_gobj, 1);
    }
}

// 0x8013DDE0
void ftCommonAppearSetPosition(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->camera_mode = 3;

    fp->entry_pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    DObjGetStruct(fighter_gobj)->translate.vec.f.y = (gMPGroundData->cam_bound_top + gMPGroundData->blastzone_top) * 0.5F;

    ftCommonFallSetStatus(fighter_gobj);
}

// 0x8013DE60
void ftNessAppearStartProcUpdate(GObj *fighter_gobj)
{
    ftCommonAppearUpdateEffects(fighter_gobj);
    ftStatusSetOnAnimEnd(fighter_gobj, ftNessAppearWaitSetStatus);
}

// 0x8013DE90
void ftNessAppearWaitProcUpdate(GObj *fighter_gobj)
{
    ftCommonAppearUpdateEffects(fighter_gobj);
    ftStatusSetOnAnimEnd(fighter_gobj, ftNessAppearEndSetStatus);
}

// 0x8013DEC0
void ftNessAppearWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Ness_AppearWait, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftCommonAppearInitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}

// 0x8013DF14
void ftNessAppearEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ((fp->status_vars.common.entry.lr_entry == LR_Right) ? ftStatus_Ness_AppearREnd : ftStatus_Ness_AppearLEnd), 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftCommonAppearInitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}

// 0x8013DF7C
void ftCaptainAppearStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonAppearUpdateEffects(fighter_gobj);

    if ((fp->status_vars.common.entry.lr_entry == LR_Left) && (fp->dl_link != 9) && (DObjGetStruct(fighter_gobj)->translate.vec.f.z > -1000.0F))
    {
        ftRenderSwapDLLink(fighter_gobj, 9);
    }
    ftStatusSetOnAnimEnd(fighter_gobj, ftCaptainAppearEndSetStatus);
}

// 0x8013E008
void ftCaptainAppearEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ((fp->status_vars.common.entry.lr_entry == LR_Right) ? ftStatus_Captain_AppearREnd : ftStatus_Captain_AppearLEnd), 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommonAppearInitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}
