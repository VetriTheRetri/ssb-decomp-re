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
    { nFTMarioStatusAppearR,        nFTMarioStatusAppearL         }, // Mario
    { nFTFoxStatusAppearR,          nFTFoxStatusAppearL           }, // Fox
    { nFTDonkeyStatusAppearR,       nFTDonkeyStatusAppearL        }, // Donkey Kong
    { nFTSamusStatusAppearR,        nFTSamusStatusAppearL         }, // Samus
    { nFTMarioStatusAppearR,        nFTMarioStatusAppearL         }, // Luigi
    { nFTLinkStatusAppearR,         nFTLinkStatusAppearL          }, // Link
    { nFTYoshiStatusAppearR,        nFTYoshiStatusAppearL         }, // Yoshi
    { nFTCaptainStatusAppearRStart, nFTCaptainStatusAppearLStart, }, // Captain Falcon
    { nFTKirbyStatusAppearR,        nFTKirbyStatusAppearL         }, // Kirby
    { nFTPikachuStatusAppearR,      nFTPikachuStatusAppearL       }, // Pikachu
    { nFTPurinStatusAppearR,        nFTPurinStatusAppearL         }, // Jigglypuff
    { nFTNessStatusAppearRStart,    nFTNessStatusAppearLStart     }, // Ness
    { nFTBossStatusAppear,          nFTBossStatusAppear           }, // Master Hand
    { nFTMarioStatusAppearR,        nFTMarioStatusAppearL         }, // Metal Mario
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Mario
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Fox
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Donkey Kong
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Samus
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Luigi
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Link
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Yoshi
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Captain Falcon
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Kirby
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Pikachu
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Jigglypuff
    { nFTCommonStatusEntryNull,     nFTCommonStatusEntryNull      }, // Poly Ness
    { nFTDonkeyStatusAppearR,       nFTDonkeyStatusAppearL        }  // Giant Donkey Kong
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

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusEntry, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

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
            if (fp->ft_kind == nFTKindBoss)
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
        if ((fp->ft_kind == nFTKindPikachu) || (fp->ft_kind == nFTKindPurin) || (fp->ft_kind == nFTKindPolyPikachu) || (fp->ft_kind == nFTKindPolyPurin))
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

        if (fp->ft_kind == nFTKindBoss)
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
    DObj *topn_joint = fp->joint[nFTPartsJointTopN];
    DObj *transn_joint = fp->joint[nFTPartsJointTransN];

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

    entry_id = (fp->lr == nGMDirectionR) ? 0 : 1;

    fp->entry_pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    fp->status_vars.common.entry.is_rotate = FALSE;

    fp->status_vars.common.entry.lr_entry = fp->lr;

    fp->lr = nGMDirectionC;

    fp->status_vars.common.entry.ground_line_id = fp->coll_data.ground_line_id;

    status_id = dFTCommonEntryAppearStatusIDs[fp->ft_kind][entry_id];

    switch (fp->ft_kind)
    {
    case nFTKindMario:
    case nFTKindLuigi:
    case nFTKindMetalMario:
        efManagerMarioEntryDokanMakeEffect(&fp->entry_pos, fp->ft_kind);
        break;

    case nFTKindFox:
        efManagerFoxEntryArwingMakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case nFTKindDonkey:
    case nFTKindGiantDonkey:
        efManagerDonkeyEntryTaruMakeEffect(&fp->entry_pos);
        break;

    case nFTKindSamus:
        efManagerSamusEntryPointMakeEffect(&fp->entry_pos);
        break;

    case nFTKindLink:
        efManagerLinkEntryWaveMakeEffect(&fp->entry_pos);
        efManagerLinkEntryBeamMakeEffect(&fp->entry_pos);
        break;

    case nFTKindYoshi:
        efManagerYoshiEntryEggMakeEffect(&fp->entry_pos);
        break;

    case nFTKindKirby:
        efManagerKirbyEntryStarMakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case nFTKindPikachu:
    case nFTKindPurin:
        efManagerMBallThrownMakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case nFTKindCaptain:
        if (fp->status_vars.common.entry.lr_entry == nGMDirectionL)
        {
            fp->status_vars.common.entry.is_rotate = TRUE;
        }
        efManagerCaptainEntryCarMakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case nFTKindBoss:
        boss_target_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

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
    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftCommonAppearInitStatusVars(fighter_gobj);

    fp->status_vars.common.entry.entry_wait = FTCOMMON_ENTRY_WAIT;

    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag0 = 0;

    if ((fp->ft_kind == nFTKindCaptain) && (fp->status_vars.common.entry.lr_entry == nGMDirectionL))
    {
        ftParamMoveDLLink(fighter_gobj, 1);
    }
}

// 0x8013DDE0
void ftCommonAppearSetPosition(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->camera_mode = 3;

    fp->entry_pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    DObjGetStruct(fighter_gobj)->translate.vec.f.y = (gMPCollisionGroundData->cam_bound_top + gMPCollisionGroundData->blastzone_top) * 0.5F;

    ftCommonFallSetStatus(fighter_gobj);
}

// 0x8013DE60
void ftNessAppearStartProcUpdate(GObj *fighter_gobj)
{
    ftCommonAppearUpdateEffects(fighter_gobj);
    ftAnimEndSetStatus(fighter_gobj, ftNessAppearWaitSetStatus);
}

// 0x8013DE90
void ftNessAppearWaitProcUpdate(GObj *fighter_gobj)
{
    ftCommonAppearUpdateEffects(fighter_gobj);
    ftAnimEndSetStatus(fighter_gobj, ftNessAppearEndSetStatus);
}

// 0x8013DEC0
void ftNessAppearWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusAppearWait, 0.0F, 1.0F, (FTSTATUS_PRESERVE_MODELPART | FTSTATUS_PRESERVE_COLANIM));
    ftCommonAppearInitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}

// 0x8013DF14
void ftNessAppearEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ((fp->status_vars.common.entry.lr_entry == nGMDirectionR) ? nFTNessStatusAppearREnd : nFTNessStatusAppearLEnd), 0.0F, 1.0F, (FTSTATUS_PRESERVE_MODELPART | FTSTATUS_PRESERVE_COLANIM));
    ftCommonAppearInitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}

// 0x8013DF7C
void ftCaptainAppearStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonAppearUpdateEffects(fighter_gobj);

    if ((fp->status_vars.common.entry.lr_entry == nGMDirectionL) && (fp->dl_link != FTRENDER_DLLINK_DEFAULT) && (DObjGetStruct(fighter_gobj)->translate.vec.f.z > -1000.0F))
    {
        ftParamMoveDLLink(fighter_gobj, FTRENDER_DLLINK_DEFAULT);
    }
    ftAnimEndSetStatus(fighter_gobj, ftCaptainAppearEndSetStatus);
}

// 0x8013E008
void ftCaptainAppearEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ((fp->status_vars.common.entry.lr_entry == nGMDirectionR) ? nFTCaptainStatusAppearREnd : nFTCaptainStatusAppearLEnd), 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftCommonAppearInitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}
