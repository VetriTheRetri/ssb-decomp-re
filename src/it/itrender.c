#include <it/item.h>
#include <ft/fighter.h>
#include <sys/ml.h>
#include <sys/develop.h>
#include <sys/hal_gu.h>

extern Gfx dGMHurtCollisionCuboidGfx[/* */];
extern Gfx dGMHitCollisionEdgeGfx[/* */];
extern Gfx dGMHitCollisionBlendGfx[/* */];
extern Gfx dGMHitCollisionCubeGfx[/* */];
extern Gfx dGMMapCollisionBottomGfx[/* */];
extern Gfx dGMMapCollisionTopGfx[/* */];
extern mlBumpAllocRegion gGraphicsHeap;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80171410
void itRenderHitCollisions(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 i;
    itHitbox *it_hit;
    itHurtbox *it_hurt;
    gsMtxStore mtx_store;
    Vec3f *translate;

    it_hit = &ip->item_hit;

    for (i = 0; i < it_hit->hitbox_count; i++)
    {
        if ((it_hit->update_state != gmHitCollision_UpdateState_Disable) && (it_hit->update_state != gmHitCollision_UpdateState_New))
        {
            gDPPipeSync(gDisplayListHead[0]++);

            if (ip->display_mode == dbObject_DisplayMode_HitAttackOutline)
            {
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetEnvColor(gDisplayListHead[0]++, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetBlendColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0xE0);
            }
            else
            {
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gDisplayListHead[0]++, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetBlendColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0x00);
            }
            if (it_hit->update_state == gmHitCollision_UpdateState_Interpolate)
            {
                hlMtxStoreGbi(mtx_store, gGraphicsHeap);

                hlMtxTranslate(mtx_store.gbi, it_hit->hit_positions[i].pos_prev.x, it_hit->hit_positions[i].pos_prev.y, it_hit->hit_positions[i].pos_prev.z);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                hlMtxStoreGbi(mtx_store, gGraphicsHeap);

                hlMtxScale(mtx_store.gbi, it_hit->size / 15.0F, it_hit->size / 15.0F, it_hit->size / 15.0F);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                gSPDisplayList(gDisplayListHead[0]++, dGMHitCollisionEdgeGfx);
                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
            hlMtxStoreGbi(mtx_store, gGraphicsHeap);

            hlMtxTranslate(mtx_store.gbi, it_hit->hit_positions[i].pos.x, it_hit->hit_positions[i].pos.y, it_hit->hit_positions[i].pos.z);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            hlMtxStoreGbi(mtx_store, gGraphicsHeap);

            hlMtxScale(mtx_store.gbi, it_hit->size / 15.0F, it_hit->size / 15.0F, it_hit->size / 15.0F);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            if (it_hit->update_state == gmHitCollision_UpdateState_Interpolate)
            {
                gSPDisplayList(gDisplayListHead[0]++, dGMHitCollisionBlendGfx);
            }
            gSPDisplayList(gDisplayListHead[0]++, dGMHitCollisionCubeGfx);
            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
    }
    it_hurt = &ip->item_hurt;

    if (it_hurt->hitstatus != gmHitCollision_HitStatus_None)
    {
        translate = &DObjGetStruct(item_gobj)->translate.vec.f;

        hlMtxStoreGbi(mtx_store, gGraphicsHeap);

        hlMtxTranslate(mtx_store.gbi, it_hurt->offset.x + translate->x, it_hurt->offset.y + translate->y, it_hurt->offset.z + translate->z);

        gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

        hlMtxStoreGbi(mtx_store, gGraphicsHeap);

        hlMtxScale(mtx_store.gbi, it_hurt->size.x / 15.0F, it_hurt->size.y / 15.0F, it_hurt->size.z / 15.0F);

        gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gDPPipeSync(gDisplayListHead[0]++);

        switch (it_hurt->hitstatus)
        {
        case gmHitCollision_HitStatus_Normal:
            gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
            gDPSetEnvColor(gDisplayListHead[0]++, 0xD0, 0xD0, 0x00, 0xFF);
            break;

        case gmHitCollision_HitStatus_Invincible:
            gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
            gDPSetEnvColor(gDisplayListHead[0]++, 0x00, 0xD0, 0x00, 0xFF);
            break;

        case gmHitCollision_HitStatus_Intangible:
            gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
            gDPSetEnvColor(gDisplayListHead[0]++, 0x00, 0x00, 0xD0, 0xFF);
            break;
        }
        gSPDisplayList(gDisplayListHead[0]++, dGMHurtCollisionCuboidGfx);
        gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
    }
}

// 0x801719AC
void itRenderMapCollisions(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f *translate = &DObjGetStruct(item_gobj)->translate.vec.f;
    mpObjectColl *object_coll = &ip->coll_data.object_coll;
    gsMtxStore mtx_store;

    gDPPipeSync(gDisplayListHead[1]++);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxTranslate(mtx_store.gbi, translate->x, translate->y + object_coll->bottom, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxScale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->center - object_coll->bottom) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gDisplayListHead[1]++, dGMMapCollisionBottomGfx);
    gSPPopMatrix(gDisplayListHead[1]++, G_MTX_MODELVIEW);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxTranslate(mtx_store.gbi, translate->x, translate->y + object_coll->center, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMtxStoreGbi(mtx_store, gGraphicsHeap);

    hlMtxScale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->top - object_coll->center) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gDisplayListHead[1]++, dGMMapCollisionTopGfx);
    gSPPopMatrix(gDisplayListHead[1]++, G_MTX_MODELVIEW);
}

// 0x80171C10
sb32 itRenderCheckItemVisible(itStruct *ip)
{
    ftStruct *fp;

    if (ip->owner_gobj == NULL)
    {
        return TRUE;
    }
    else if (!(ip->is_hold))
    {
        return TRUE;
    }

    fp = ftGetStruct(ip->owner_gobj);

    if (!(fp->is_show_item))
    {
        return FALSE;
    }
    else if (fp->is_invisible)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x80171C7C
void itRenderProcRenderOPA(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
}

// 0x80171D38
void itRenderProcRenderXLU(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            odRenderDObjTreeDLLinksForGObj(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            odRenderDObjTreeDLLinksForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            odRenderDObjTreeDLLinksForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
}

// 0x80171DF4
void itRenderColAnimOPA(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_2CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_PASS, G_RM_AA_ZB_OPA_SURF2);

    if (ip->colanim.is_use_maincolor)
    {
        gDPSetEnvColor(gDisplayListHead[0]++, ip->colanim.maincolor.r, ip->colanim.maincolor.g, ip->colanim.maincolor.b, ip->colanim.maincolor.a);
    }
    else gDPSetEnvColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0x00);
    
    odRenderDObjTreeForGObj(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80171F4C
void itRenderProcRenderColAnimOPA(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            itRenderColAnimOPA(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            itRenderColAnimOPA(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            itRenderColAnimOPA(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
}

// 0x80172008
void itRenderColAnimXLU(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_2CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_PASS, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_2CYCLE);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_PASS, G_RM_AA_ZB_XLU_SURF2);

    if (ip->colanim.is_use_maincolor)
    {
        gDPSetEnvColor(gDisplayListHead[0]++, ip->colanim.maincolor.r, ip->colanim.maincolor.g, ip->colanim.maincolor.b, ip->colanim.maincolor.a);
        gDPSetEnvColor(gDisplayListHead[1]++, ip->colanim.maincolor.r, ip->colanim.maincolor.g, ip->colanim.maincolor.b, ip->colanim.maincolor.a);
    }
    else
    {
        gDPSetEnvColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0x00);
        gDPSetEnvColor(gDisplayListHead[1]++, 0x00, 0x00, 0x00, 0x00);
    }
    odRenderDObjTreeDLLinksForGObj(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x8017224C
void itRenderProcRenderColAnimXLU(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            itRenderColAnimXLU(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            itRenderColAnimXLU(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            itRenderColAnimXLU(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
}
