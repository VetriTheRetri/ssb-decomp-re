#include <it/item.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITMarumineItemAttributes;  // 0x00000104
extern intptr_t lITMarumineHitEvents;       // 0x0000014C

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

ITCreateDesc dITMarumineItemDesc = 
{
    nITKindMarumine,                        // Item Kind
    &gGRCommonStruct.yamabuki.item_head,    // Pointer to item file data?
    &lITMarumineItemAttributes,             // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTra,                    // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMAttackStateOff,                      // Hitbox Update State
    itMarumineCommonProcUpdate,             // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

ITStatusDesc dITMarumineStatusDescs[/* */] = 
{
    // Status 0 (Neutral Explosion)
    {
        itMarumineExplodeProcUpdate,        // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itMarumineStatus
{
    nITMarumineStatusExplode,
    nITMarumineStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801837A0
void itMarumineExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    s32 unused;
    LBParticle *ptcl;
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->dmg_coll.hitstatus = nGMHitStatusNone;

    ptcl = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

    if (ptcl != NULL)
    {
        ptcl->tfrm->scale.x = ITMARUMINE_EXPLODE_EFFECT_SCALE;
        ptcl->tfrm->scale.y = ITMARUMINE_EXPLODE_EFFECT_SCALE;
        ptcl->tfrm->scale.z = ITMARUMINE_EXPLODE_EFFECT_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_HIDDEN;

    ip->atk_coll.fgm = nSYAudioFGMExplodeL;

    itMainRefreshAtk(item_gobj);
    itMarumineExplodeSetStatus(item_gobj);
}

// 0x80183830
void itMarumineExplodeUpdateHitEvent(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    ITAttackEvent *ev = itGetHitEvent(dITMarumineItemDesc, lITMarumineHitEvents); // (ITAttackEvent*) ((uintptr_t)*dITMarumineItemDesc.p_file + (intptr_t)&lITMarumineHitEvents); // Linker thing

    if (ip->multi == ev[ip->item_event_id].timer)
    {
        ip->atk_coll.angle  = ev[ip->item_event_id].angle;
        ip->atk_coll.damage = ev[ip->item_event_id].damage;
        ip->atk_coll.size   = ev[ip->item_event_id].size;

        ip->atk_coll.can_reflect = FALSE;
        ip->atk_coll.can_shield = FALSE;

        ip->atk_coll.element = nGMHitElementFire;

        ip->atk_coll.can_setoff = FALSE;

        ip->item_event_id++;

        if (ip->item_event_id == 4)
        {
            ip->item_event_id = 3;
        }
    }
}

// 0x80183914
sb32 itMarumineCommonProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.marumine.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.marumine.offset.y;

    if (dobj->anim_wait == AOBJ_ANIM_NULL)
    {
        itMainRefreshAtk(item_gobj);
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.marumine.offset.x = 0.0F;
        ip->item_vars.marumine.offset.y = 0.0F;

        itMarumineExplodeMakeEffectGotoSetStatus(item_gobj);
        func_800269C0_275C0(nSYAudioFGMExplodeL);
    }
    return FALSE;
}

// 0x801839A8
sb32 itMarumineExplodeProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.marumine.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.marumine.offset.y;

    itMarumineExplodeUpdateHitEvent(item_gobj);

    ip->multi++;

    if (ip->multi == ITMARUMINE_EXPLODE_LIFETIME)
    {
        grYamabukiGateSetClosedWait();

        return TRUE;
    }
    else return FALSE;
}

// 0x80183A20
void itMarumineExplodeSetStatus(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    ip->multi = 0;

    ip->atk_coll.throw_mul = 1.0F;

    ip->item_event_id = 0;

    itMarumineExplodeUpdateHitEvent(item_gobj);
    itMainSetItemStatus(item_gobj, dITMarumineStatusDescs, nITMarumineStatusExplode);
}

// 0x80183A74
GObj* itMarumineMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITMarumineItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        ITStruct *ip = itGetStruct(item_gobj);
        DObj *dobj = DObjGetStruct(item_gobj);

        ip->item_vars.marumine.offset = *pos;

        ip->is_allow_knockback = TRUE;

        gcAddXObjForDObjFixed(dobj, 0x46, 0);
        func_800269C0_275C0(nSYAudioVoiceYamabukiMarumine);
    }
    return item_gobj;
}
