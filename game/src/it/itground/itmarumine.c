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
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITMarumineItemDesc = 
{
    It_Kind_Marumine,                       // Item Kind
    &gGroundStruct.yamabuki.item_head,      // Pointer to item file data?
    &lITMarumineItemAttributes,             // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMarumineSDefaultProcUpdate,           // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITMarumineStatusDesc[/* */] = 
{
    // Status 0 (Neutral Explosion)
    {
        itMarumineNExplodeProcUpdate,       // Proc Update
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
    itStatus_Marumine_NExplode,
    itStatus_Marumine_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801837A0
void itMarumineNExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    s32 unused;
    efParticle *efpart;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    efpart = efParticle_SparkleWhiteMultiExplode_MakeEffect(&dobj->translate.vec.f);

    if (efpart != NULL)
    {
        efpart->effect_info->scale.vec.f.x = ITMARUMINE_EXPLODE_GFX_SCALE;
        efpart->effect_info->scale.vec.f.y = ITMARUMINE_EXPLODE_GFX_SCALE;
        efpart->effect_info->scale.vec.f.z = ITMARUMINE_EXPLODE_GFX_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    itMainRefreshHit(item_gobj);
    itMarumineNExplodeSetStatus(item_gobj);
}

// 0x80183830
void itMarumineNExplodeUpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(dITMarumineItemDesc, lITMarumineHitEvents); // (itHitEvent*) ((uintptr_t)*dITMarumineItemDesc.p_file + (intptr_t)&lITMarumineHitEvents); // Linker thing

    if (ip->it_multi == ev[ip->item_event_index].timer)
    {
        ip->item_hit.angle  = ev[ip->item_event_index].angle;
        ip->item_hit.damage = ev[ip->item_event_index].damage;
        ip->item_hit.size   = ev[ip->item_event_index].size;

        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.can_shield = FALSE;

        ip->item_hit.element = gmHitCollision_Element_Fire;

        ip->item_hit.can_setoff = FALSE;

        ip->item_event_index++;

        if (ip->item_event_index == 4)
        {
            ip->item_event_index = 3;
        }
    }
}

// 0x80183914
sb32 itMarumineSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.marumine.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.marumine.offset.y;

    if (dobj->dobj_f0 == AOBJ_FRAME_NULL)
    {
        itMainRefreshHit(item_gobj);
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.marumine.offset.x = 0.0F;
        ip->item_vars.marumine.offset.y = 0.0F;

        itMarumineNExplodeMakeEffectGotoSetStatus(item_gobj);
        func_800269C0(alSound_SFX_ExplodeL);
    }
    return FALSE;
}

// 0x801839A8
sb32 itMarumineNExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.marumine.offset.x;
    dobj->translate.vec.f.y += ip->item_vars.marumine.offset.y;

    itMarumineNExplodeUpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITMARUMINE_EXPLODE_LIFETIME)
    {
        grYamabukiGateSetClosedWait();

        return TRUE;
    }
    else return FALSE;
}

// 0x80183A20
void itMarumineNExplodeSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_hit.throw_mul = 1.0F;

    ip->item_event_index = 0;

    itMarumineNExplodeUpdateHitEvent(item_gobj);
    itMainSetItemStatus(item_gobj, dITMarumineStatusDesc, itStatus_Marumine_NExplode);
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
        func_800269C0(alSound_Voice_YamabukiMarumine);
    }
    return item_gobj;
}
