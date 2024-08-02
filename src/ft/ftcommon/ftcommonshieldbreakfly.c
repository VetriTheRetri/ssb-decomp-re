#include <ft/fighter.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern ub8 gGM1PGameBonusShieldBreaker; // Bonus for breaking an enemy's shield in 1P game

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80149440
void ftCommonShieldBreakFlyProcUpdate(GObj *fighter_gobj)
{
    ftAnimEndSetStatus(fighter_gobj, ftCommonShieldBreakFallSetStatus);
}

// 0x80149464
void ftCommonShieldBreakFlyProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftCommonShieldBreakDownSetStatus);
}

// 0x80149488
void ftCommonShieldBreakFlySetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusShieldBreakFly, 0.0F, 1.0F, FTSTATUS_PRESERVE_DAMAGEPLAYER);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = attributes->shield_break_vel_y;

    ftParamCheckSetFighterColAnimID(fighter_gobj, FTCOMMON_SHIELDBREAK_COLANIM_ID, FTCOMMON_SHIELDBREAK_COLANIM_LENGTH);
    func_800269C0_275C0(nGMSoundFGMShieldBreak);
}

// 0x80149510
void ftCommonShieldBreakFlyCommonSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f offset;

    offset.x = 0.0F;
    offset.y = 0.0F;
    offset.z = 0.0F;

    gmCollisionGetFighterPartsWorldPosition(fp->joint[nFTPartsJointYRotN], &offset);

    if (fp->ft_kind == nFTKindYoshi)
    {
        efManagerYoshiEggExplodeMakeEffect(&DObjGetStruct(fighter_gobj)->translate.vec.f);
        efManagerEggBreakMakeEffect(&DObjGetStruct(fighter_gobj)->translate.vec.f);
    }
    else efManagerShieldBreakMakeEffect(&offset);

    ftParamUpdate1PGameDamageStats(fp, fp->shield_player, nFTHitlogObjectNone, 0, 0, 0);

    if ((gBattleState->game_type == nGMBattleGameType1PGame) && (fp->shield_damage != 0))
    {
        if ((fp->shield_player == gSceneData.spgame_player) && (fp->shield_player != fp->player))
        {
            gGM1PGameBonusShieldBreaker = TRUE;
        }
    }
    ftCommonShieldBreakFlySetStatus(fighter_gobj);
}

// 0x80149608
void ftCommonShieldBreakFlyReflectorSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftSpecialHit *special_hit = fp->special_hit;
    Vec3f offset = special_hit->offset;

    gmCollisionGetFighterPartsWorldPosition(fp->joint[special_hit->joint_id], &offset);
    efManagerReflectBreakMakeEffect(&offset, fp->lr_reflect);
    ftCommonShieldBreakFlySetStatus(fighter_gobj);
}
