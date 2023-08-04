#include <ft/fighter.h>
#include <ft/chara/ftmario/ftmario.h>
#include <ft/chara/ftfox/ftfox.h>
#include <ft/chara/ftdonkey/ftdonkey.h>
#include <ft/chara/ftsamus/ftsamus.h>
#include <ft/chara/ftlink/ftlink.h>
#include <ft/chara/ftyoshi/ftyoshi.h>
#include <ft/chara/ftcaptain/ftcaptain.h>
#include <ft/chara/ftkirby/ftkirby.h>
#include <ft/chara/ftpikachu/ftpikachu.h>
#include <ft/chara/ftpurin/ftpurin.h>
#include <ft/chara/ftness/ftness.h>
#include <ft/chara/ftmasterhand/ftmasterhand.h>
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

                DObjGetStruct(fighter_gobj)->translate = fp->entry_pos;

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
            func_ovl2_80102C28(&fp->entry_pos);
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

        DObjGetStruct(fighter_gobj)->translate = fp->entry_pos;

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
    DObj *topn_joint = fp->joint[ftParts_TopN_Joint];
    DObj *transn_joint = fp->joint[ftParts_TransN_Joint];

    topn_joint->translate.y = fp->entry_pos.y + transn_joint->translate.y;

    if (fp->status_vars.common.entry.is_rotate != FALSE)
    {
        topn_joint->translate.x = fp->entry_pos.x - transn_joint->translate.x;
        topn_joint->translate.z = fp->entry_pos.z - transn_joint->translate.z;

        topn_joint->rotate.y = PI32;
    }
    else
    {
        topn_joint->translate.x = fp->entry_pos.x + transn_joint->translate.x;
        topn_joint->translate.z = fp->entry_pos.z + transn_joint->translate.z;
    }
}

// 0x8013DBAC
void ftCommon_Appear_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_nullstatus = TRUE;

    fp->x191_flag_b4567 = 3;

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

    entry_id = (fp->lr == RIGHT) ? 0 : 1;

    fp->entry_pos = DObjGetStruct(fighter_gobj)->translate;

    fp->status_vars.common.entry.is_rotate = FALSE;

    fp->status_vars.common.entry.lr_entry = fp->lr;

    fp->lr = CENTER;

    fp->status_vars.common.entry.ground_line_id = fp->coll_data.ground_line_id;

    status_id = Fighter_Status_EntryStatusIndex[fp->ft_kind][entry_id];

    switch (fp->ft_kind)
    {
    case Ft_Kind_Mario:
    case Ft_Kind_Luigi:
    case Ft_Kind_MetalMario:
        func_ovl2_801036EC(&fp->entry_pos, fp->ft_kind);
        break;

    case Ft_Kind_Fox:
        func_ovl2_801037EC(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Donkey:
    case Ft_Kind_GiantDonkey:
        func_ovl2_80103418(&fp->entry_pos, fp->ft_kind);
        break;

    case Ft_Kind_Samus:
        func_ovl2_80103474(&fp->entry_pos, fp->ft_kind);
        break;

    case Ft_Kind_Link:
        func_ovl2_80102AE4(&fp->entry_pos, fp->ft_kind);
        func_ovl2_80102B40(&fp->entry_pos);
        break;

    case Ft_Kind_Yoshi:
        func_ovl2_80102F34(&fp->entry_pos, fp->ft_kind);
        break;

    case Ft_Kind_Kirby:
        func_ovl2_80102B9C(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Pikachu:
    case Ft_Kind_Purin:
        func_ovl2_80102D14(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_Captain:
        if (fp->status_vars.common.entry.lr_entry == LEFT)
        {
            fp->status_vars.common.entry.is_rotate = TRUE;
        }
        func_ovl2_8010356C(&fp->entry_pos, fp->status_vars.common.entry.lr_entry);
        break;

    case Ft_Kind_MasterHand:
        mh_target_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

        while (mh_target_gobj != NULL)
        {
            if (mh_target_gobj != fighter_gobj) 
            {
                break;  // If Master Hand's GObj is not
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

    if ((fp->ft_kind == Ft_Kind_Captain) && (fp->status_vars.common.entry.lr_entry == LEFT))
    {
        func_ovl2_800E827C(fighter_gobj, 1);
    }
}

// 0x8013DDE0
void ftCommon_Appear_SetPosition(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->x191_flag_b4567 = 3;

    fp->entry_pos = DObjGetStruct(fighter_gobj)->translate;

    DObjGetStruct(fighter_gobj)->translate.y = (gpGroundInfo->cam_bound_top + gpGroundInfo->blastzone_top) * 0.5F;

    ftCommon_Fall_SetStatus(fighter_gobj);
}