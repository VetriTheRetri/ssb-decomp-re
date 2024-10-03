#include <it/item.h>
#include <ft/fighter.h>
#include <sys/malloc.h>
#include <sys/develop.h>
#include <sys/hal_gu.h>

extern syMallocRegion gSYProgGraphicsHeap;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80171410
void itDisplayHitCollisions(GObj *item_gobj)
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
        if ((it_hit->update_state != nGMHitUpdateDisable) && (it_hit->update_state != nGMHitUpdateNew))
        {
            gDPPipeSync(gSYProgDLHeads[0]++);

            if (ip->display_mode == nDBDisplayModeHitAttackOutline)
            {
                gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetEnvColor(gSYProgDLHeads[0]++, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetBlendColor(gSYProgDLHeads[0]++, 0x00, 0x00, 0x00, 0xE0);
            }
            else
            {
                gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gSYProgDLHeads[0]++, 0xB0, 0x00, 0x00, 0xFF);
                gDPSetBlendColor(gSYProgDLHeads[0]++, 0x00, 0x00, 0x00, 0x00);
            }
            if (it_hit->update_state == nGMHitUpdateInterpolate)
            {
                syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

                syMatrixTranslate(mtx_store.gbi, it_hit->hit_positions[i].pos_prev.x, it_hit->hit_positions[i].pos_prev.y, it_hit->hit_positions[i].pos_prev.z);

                gSPMatrix(gSYProgDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

                syMatrixSca(mtx_store.gbi, it_hit->size / 15.0F, it_hit->size / 15.0F, it_hit->size / 15.0F);

                gSPMatrix(gSYProgDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                gSPDisplayList(gSYProgDLHeads[0]++, dFTRenderMainHitCollisionEdgeDL);
                gSPPopMatrix(gSYProgDLHeads[0]++, G_MTX_MODELVIEW);
            }
            syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

            syMatrixTranslate(mtx_store.gbi, it_hit->hit_positions[i].pos.x, it_hit->hit_positions[i].pos.y, it_hit->hit_positions[i].pos.z);

            gSPMatrix(gSYProgDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

            syMatrixSca(mtx_store.gbi, it_hit->size / 15.0F, it_hit->size / 15.0F, it_hit->size / 15.0F);

            gSPMatrix(gSYProgDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            if (it_hit->update_state == nGMHitUpdateInterpolate)
            {
                gSPDisplayList(gSYProgDLHeads[0]++, dFTRenderMainHitCollisionBlendDL);
            }
            gSPDisplayList(gSYProgDLHeads[0]++, dFTRenderMainHitCollisionCubeDL);
            gSPPopMatrix(gSYProgDLHeads[0]++, G_MTX_MODELVIEW);
        }
    }
    it_hurt = &ip->item_hurt;

    if (it_hurt->hitstatus != nGMHitStatusNone)
    {
        translate = &DObjGetStruct(item_gobj)->translate.vec.f;

        syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

        syMatrixTranslate(mtx_store.gbi, it_hurt->offset.x + translate->x, it_hurt->offset.y + translate->y, it_hurt->offset.z + translate->z);

        gSPMatrix(gSYProgDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

        syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

        syMatrixSca(mtx_store.gbi, it_hurt->size.x / 15.0F, it_hurt->size.y / 15.0F, it_hurt->size.z / 15.0F);

        gSPMatrix(gSYProgDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gDPPipeSync(gSYProgDLHeads[0]++);

        switch (it_hurt->hitstatus)
        {
        case nGMHitStatusNormal:
            gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
            gDPSetEnvColor(gSYProgDLHeads[0]++, 0xD0, 0xD0, 0x00, 0xFF);
            break;

        case nGMHitStatusInvincible:
            gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
            gDPSetEnvColor(gSYProgDLHeads[0]++, 0x00, 0xD0, 0x00, 0xFF);
            break;

        case nGMHitStatusIntangible:
            gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
            gDPSetEnvColor(gSYProgDLHeads[0]++, 0x00, 0x00, 0xD0, 0xFF);
            break;
        }
        gSPDisplayList(gSYProgDLHeads[0]++, dFTRenderMainHurtCollisionCuboidDL);
        gSPPopMatrix(gSYProgDLHeads[0]++, G_MTX_MODELVIEW);
    }
}

// 0x801719AC
void itDisplayMapCollisions(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f *translate = &DObjGetStruct(item_gobj)->translate.vec.f;
    mpObjectColl *objcoll = &ip->coll_data.objcoll;
    gsMtxStore mtx_store;

    gDPPipeSync(gSYProgDLHeads[1]++);

    syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

    syMatrixTranslate(mtx_store.gbi, translate->x, translate->y + objcoll->bottom, translate->z);

    gSPMatrix(gSYProgDLHeads[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

    syMatrixSca(mtx_store.gbi, objcoll->width / 30.0F, (objcoll->center - objcoll->bottom) / 30.0F, 1.0F);

    gSPMatrix(gSYProgDLHeads[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gSYProgDLHeads[1]++, dFTRenderMainMapCollisionBottomDL);
    gSPPopMatrix(gSYProgDLHeads[1]++, G_MTX_MODELVIEW);

    syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

    syMatrixTranslate(mtx_store.gbi, translate->x, translate->y + objcoll->center, translate->z);

    gSPMatrix(gSYProgDLHeads[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    syMatrixStoreGbi(mtx_store, gSYProgGraphicsHeap);

    syMatrixSca(mtx_store.gbi, objcoll->width / 30.0F, (objcoll->top - objcoll->center) / 30.0F, 1.0F);

    gSPMatrix(gSYProgDLHeads[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gSYProgDLHeads[1]++, dFTRenderMainMapCollisionTopDL);
    gSPPopMatrix(gSYProgDLHeads[1]++, G_MTX_MODELVIEW);
}

// 0x80171C10
sb32 itDisplayCheckItemVisible(itStruct *ip)
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
void itDisplayProcDisplayOPA(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itDisplayCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            gcDrawDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            gcDrawDObjTreeForGObj(item_gobj);
            itDisplayMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == nGMHitStatusNone) && (ip->item_hit.update_state == nGMHitUpdateDisable))
        {
            gcDrawDObjTreeForGObj(item_gobj);
        }
        else itDisplayHitCollisions(item_gobj);
    }
}

// 0x80171D38
void itDisplayProcDisplayXLU(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itDisplayCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            gcDrawDObjTreeDLLinksForGObj(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            gcDrawDObjTreeDLLinksForGObj(item_gobj);
            itDisplayMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == nGMHitStatusNone) && (ip->item_hit.update_state == nGMHitUpdateDisable))
        {
            gcDrawDObjTreeDLLinksForGObj(item_gobj);
        }
        else itDisplayHitCollisions(item_gobj);
    }
}

// 0x80171DF4
void itDisplayColAnimOPA(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_2CYCLE);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_PASS, G_RM_AA_ZB_OPA_SURF2);

    if (ip->colanim.is_use_maincolor)
    {
        gDPSetEnvColor(gSYProgDLHeads[0]++, ip->colanim.maincolor.r, ip->colanim.maincolor.g, ip->colanim.maincolor.b, ip->colanim.maincolor.a);
    }
    else gDPSetEnvColor(gSYProgDLHeads[0]++, 0x00, 0x00, 0x00, 0x00);
    
    gcDrawDObjTreeForGObj(item_gobj);

    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80171F4C
void itDisplayProcDisplayColAnimOPA(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itDisplayCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            itDisplayColAnimOPA(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            itDisplayColAnimOPA(item_gobj);
            itDisplayMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == nGMHitStatusNone) && (ip->item_hit.update_state == nGMHitUpdateDisable))
        {
            itDisplayColAnimOPA(item_gobj);
        }
        else itDisplayHitCollisions(item_gobj);
    }
}

// 0x80172008
void itDisplayColAnimXLU(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_2CYCLE);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_PASS, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gSYProgDLHeads[1]++);
    gDPSetCycleType(gSYProgDLHeads[1]++, G_CYC_2CYCLE);
    gDPSetRenderMode(gSYProgDLHeads[1]++, G_RM_PASS, G_RM_AA_ZB_XLU_SURF2);

    if (ip->colanim.is_use_maincolor)
    {
        gDPSetEnvColor(gSYProgDLHeads[0]++, ip->colanim.maincolor.r, ip->colanim.maincolor.g, ip->colanim.maincolor.b, ip->colanim.maincolor.a);
        gDPSetEnvColor(gSYProgDLHeads[1]++, ip->colanim.maincolor.r, ip->colanim.maincolor.g, ip->colanim.maincolor.b, ip->colanim.maincolor.a);
    }
    else
    {
        gDPSetEnvColor(gSYProgDLHeads[0]++, 0x00, 0x00, 0x00, 0x00);
        gDPSetEnvColor(gSYProgDLHeads[1]++, 0x00, 0x00, 0x00, 0x00);
    }
    gcDrawDObjTreeDLLinksForGObj(item_gobj);

    gDPPipeSync(gSYProgDLHeads[0]++);
    gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gSYProgDLHeads[1]++);
    gDPSetCycleType(gSYProgDLHeads[1]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gSYProgDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x8017224C
void itDisplayProcDisplayColAnimXLU(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itDisplayCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            itDisplayColAnimXLU(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            itDisplayColAnimXLU(item_gobj);
            itDisplayMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == nGMHitStatusNone) && (ip->item_hit.update_state == nGMHitUpdateDisable))
        {
            itDisplayColAnimXLU(item_gobj);
        }
        else itDisplayHitCollisions(item_gobj);
    }
}
