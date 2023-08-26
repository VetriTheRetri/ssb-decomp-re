#include <ft/fighter.h>
#include <gr/ground.h>

// 0x8013D930
void ftCommon_Entry_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_Entry, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_invisible = TRUE;
    fp->x18E_flag_b0 = TRUE;
    fp->is_nullstatus = TRUE;
    fp->x18E_flag_b3 = TRUE;
}

// 0x8013D994
void ftCommon_Entry_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.entry.entry_wait != 0)
    {
        fp->status_vars.common.entry.entry_wait--;

        if (fp->status_vars.common.entry.entry_wait == 0)
        {
            if (fp->ft_kind == Ft_Kind_MasterHand)
            {
                ftMasterHand_Wait_SetStatus(fighter_gobj);
            }
            else
            {
                fp->lr = fp->status_vars.common.entry.lr_entry;

                DObjGetStruct(fighter_gobj)->translate.vec.f = fp->entry_pos;

                fp->coll_data.ground_line_id = fp->status_vars.common.entry.ground_line_id;

                ftCommon_Wait_SetStatus(fighter_gobj);
            }
        }
    }
}

// 0x8013DA14
void ftCommon_Entry_UpdateEffects(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        if ((fp->ft_kind == Ft_Kind_Pikachu) || (fp->ft_kind == Ft_Kind_Purin) || (fp->ft_kind == Ft_Kind_PolyPikachu) || (fp->ft_kind == Ft_Kind_PolyPurin))
        {
            efParticle_MBallRays_MakeEffect(&fp->entry_pos);
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
void ftCommon_Appear_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Entry_UpdateEffects(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        fp->lr = fp->status_vars.common.entry.lr_entry;

        DObjGetStruct(fighter_gobj)->translate.vec.f = fp->entry_pos;

        fp->coll_data.ground_line_id = fp->status_vars.common.entry.ground_line_id;

        if (fp->ft_kind == Ft_Kind_MasterHand)
        {
            ftMasterHand_Wait_SetStatus(fighter_gobj);
        }
        else ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x8013DB2C
void ftCommon_Appear_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *topn_joint = fp->joint[ftParts_Joint_TopN];
    DObj *transn_joint = fp->joint[ftParts_Joint_TransN];

    topn_joint->translate.vec.f.y = fp->entry_pos.y + transn_joint->translate.vec.f.y;

    if (fp->status_vars.common.entry.is_rotate != FALSE)
    {
        topn_joint->translate.vec.f.x = fp->entry_pos.x - transn_joint->translate.vec.f.x;
        topn_joint->translate.vec.f.z = fp->entry_pos.z - transn_joint->translate.vec.f.z;

        topn_joint->rotate.vec.f.y = F_DEG_TO_RAD(180.0F);
    }
    else
    {
        topn_joint->translate.vec.f.x = fp->entry_pos.x + transn_joint->translate.vec.f.x;
        topn_joint->translate.vec.f.z = fp->entry_pos.z + transn_joint->translate.vec.f.z;
    }
}

// 0x8013DBAC
void ftCommon_Appear_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_nullstatus = TRUE;

    fp->camera_mode = 3;

    fp->x18E_flag_b0 = TRUE;
    fp->x18E_flag_b3 = TRUE;
}

s32 Fighter_Status_EntryStatusIndex[Ft_Kind_EnumMax][2] =
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
    { ftStatus_MasterHand_Appear,    ftStatus_MasterHand_Appear     }, // Master Hand                                                           
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

// 0x8013DBE0
void ftCommon_Appear_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    s32 entry_id;
    GObj *mh_target_gobj;

    entry_id = (fp->lr == LR_Right) ? 0 : 1;

    fp->entry_pos = DObjGetStruct(fighter_gobj)->translate;

    fp->status_vars.common.entry.is_rotate = FALSE;

    fp->status_vars.common.entry.lr_entry = fp->lr;

    fp->lr = LR_Center;

    fp->status_vars.common.entry.ground_line_id = fp->coll_data.ground_line_id;

    status_id = Fighter_Status_EntryStatusIndex[fp->ft_kind][entry_id];

    switch (fp->ft_kind)
    {
    case Ft_Kind_Mario:
    case Ft_Kind_Luigi:
    case Ft_Kind_MetalMario:
        efParticle_MarioEntryPipe_MakeEffect(&fp->entry_pos, fp->ft_kind);
        break;

    case Ft_Kind_Fox:
        efParticle_FoxEntryArwing_MakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Donkey:
    case Ft_Kind_GiantDonkey:
        efParticle_DonkeyEntryBarrel_MakeEffect(&fp->entry_pos);
        break;

    case Ft_Kind_Samus:
        efParticle_SamusEntryPoint_MakeEffect(&fp->entry_pos);
        break;

    case Ft_Kind_Link:
        efParticle_LinkEntryWave_MakeEffect(&fp->entry_pos);
        efParticle_LinkEntryBeam_MakeEffect(&fp->entry_pos);
        break;

    case Ft_Kind_Yoshi:
        efParticle_YoshiEntryEgg_MakeEffect(&fp->entry_pos);
        break;

    case Ft_Kind_Kirby:
        efParticle_KirbyEntryStar_MakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Pikachu:
    case Ft_Kind_Purin:
        efParticle_MBallThrown_MakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Captain:
        if (fp->status_vars.common.entry.lr_entry == LR_Left)
        {
            fp->status_vars.common.entry.is_rotate = TRUE;
        }
        efParticle_CaptainEntryCar_MakeEffect(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_MasterHand:
        mh_target_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

        while (mh_target_gobj != NULL)
        {
            if (mh_target_gobj != fighter_gobj) 
            {
                break;  // This assumes Master Hand has found its target, since it is not his own object
            }
            else mh_target_gobj = mh_target_gobj->group_gobj_next;
        }
        fp->fighter_vars.masterhand.boss->target_gobj = mh_target_gobj;

        break;
    }
    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_Appear_InitStatusVars(fighter_gobj);

    fp->status_vars.common.entry.entry_wait = FTCOMMON_ENTRY_WAIT;

    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag0 = 0;

    if ((fp->ft_kind == Ft_Kind_Captain) && (fp->status_vars.common.entry.lr_entry == LR_Left))
    {
        func_ovl2_800E827C(fighter_gobj, 1);
    }
}

// 0x8013DDE0
void ftCommon_Appear_SetPosition(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->camera_mode = 3;

    fp->entry_pos = DObjGetStruct(fighter_gobj)->translate;

    DObjGetStruct(fighter_gobj)->translate.vec.f.y = (gGroundInfo->cam_bound_top + gGroundInfo->blastzone_top) * 0.5F;

    ftCommon_Fall_SetStatus(fighter_gobj);
}