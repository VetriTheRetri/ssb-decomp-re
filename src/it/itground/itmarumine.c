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

itCreateDesc dITMarumineItemDesc = 
{
    nITKindMarumine,                        // Item Kind
    &gGRCommonStruct.yamabuki.item_head,    // Pointer to item file data?
    &lITMarumineItemAttributes,             // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTra,                    // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itMarumineCommonProcUpdate,             // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITMarumineStatusDescs[/* */] = 
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
    efParticle *efpart;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->item_hurt.hitstatus = nGMHitStatusNone;

    efpart = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

    if (efpart != NULL)
    {
        efpart->effect_info->scale.x = ITMARUMINE_EXPLODE_EFFECT_SCALE;
        efpart->effect_info->scale.y = ITMARUMINE_EXPLODE_EFFECT_SCALE;
        efpart->effect_info->scale.z = ITMARUMINE_EXPLODE_EFFECT_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    ip->item_hit.hit_sfx = nGMSoundFGMExplodeL;

    itMainRefreshHit(item_gobj);
    itMarumineExplodeSetStatus(item_gobj);
}

// 0x80183830
void itMarumineExplodeUpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(dITMarumineItemDesc, lITMarumineHitEvents); // (itHitEvent*) ((uintptr_t)*dITMarumineItemDesc.p_file + (intptr_t)&lITMarumineHitEvents); // Linker thing

    if (ip->it_multi == ev[ip->item_event_id].timer)
    {
        ip->item_hit.angle  = ev[ip->item_event_id].angle;
        ip->item_hit.damage = ev[ip->item_event_id].damage;
        ip->item_hit.size   = ev[ip->item_event_id].size;

        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.can_shield = FALSE;

        ip->item_hit.element = nGMHitElementFire;

        ip->item_hit.can_setoff = FALSE;

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
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.marumine.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.marumine.offset.y;

    if (dobj->anim_remain == AOBJ_FRAME_NULL)
    {
        itMainRefreshHit(item_gobj);
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.marumine.offset.x = 0.0F;
        ip->item_vars.marumine.offset.y = 0.0F;

        itMarumineExplodeMakeEffectGotoSetStatus(item_gobj);
        func_800269C0_275C0(nGMSoundFGMExplodeL);
    }
    return FALSE;
}

// 0x801839A8
sb32 itMarumineExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.marumine.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.marumine.offset.y;

    itMarumineExplodeUpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITMARUMINE_EXPLODE_LIFETIME)
    {
        grYamabukiGateSetClosedWait();

        return TRUE;
    }
    else return FALSE;
}

// 0x80183A20
void itMarumineExplodeSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_hit.throw_mul = 1.0F;

    ip->item_event_id = 0;

    itMarumineExplodeUpdateHitEvent(item_gobj);
    itMainSetItemStatus(item_gobj, dITMarumineStatusDescs, nITMarumineStatusExplode);
}

// 0x80183A74
GObj* itMarumineMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITMarumineItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);
        DObj *dobj = DObjGetStruct(item_gobj);

        ip->item_vars.marumine.offset = *pos;

        ip->is_allow_knockback = TRUE;

        omAddOMMtxForDObjFixed(dobj, 0x46, 0);
        func_800269C0_275C0(nGMSoundVoiceYamabukiMarumine);
    }
    return item_gobj;
}
