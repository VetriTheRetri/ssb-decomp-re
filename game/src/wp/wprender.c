#include <wp/weapon.h>

#include <sys/develop.h>
#include <sys/hal_gu.h>
#include <sys/obj_renderer.h>
#include <sys/obj.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

extern Gfx *gpDisplayListHead[4];

extern mlBumpAllocRegion gMatrixHeap;

extern Gfx gDisplayListHitboxEdge;  // 0x8012C128
extern Gfx gDisplayListHitboxBlend; // 0x8012C160
extern Gfx gDisplayListHitboxCube;  // 0x8012C310

extern Gfx gDisplayListMapCollisionBottom;
extern Gfx gDisplayListMapCollisionTop;

// 0x80166E80
void wpRender_DisplayHitCollisions(GObj *weapon_gobj) // Render weapon hitboxes
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    wpHitbox *weapon_hit = &wp->weapon_hit;
    MtxStore mtx_store;
    s32 i;

    for (i = 0; i < weapon_hit->hitbox_count; i++)
    {
        if ((weapon_hit->update_state != gmHitCollision_UpdateState_Disable) && (weapon_hit->update_state != gmHitCollision_UpdateState_New))
        {
            gDPPipeSync(gpDisplayListHead[0]++);

            if (wp->display_mode == dbObject_DisplayMode_HitAttackOutline)
            {
                gDPSetPrimColor(gpDisplayListHead[0]++, 0, 0, 176, 0, 0, 255);

                gDPSetEnvColor(gpDisplayListHead[0]++, 176, 0, 0, 255);

                gDPSetBlendColor(gpDisplayListHead[0]++, 0, 0, 0, 224);
            }
            else
            {
                gDPSetPrimColor(gpDisplayListHead[0]++, 0, 0, 255, 255, 255, 255);

                gDPSetEnvColor(gpDisplayListHead[0]++, 176, 0, 0, 255);

                gDPSetBlendColor(gpDisplayListHead[0]++, 0, 0, 0, 0);
            }
            if (weapon_hit->update_state == gmHitCollision_UpdateState_Interpolate)
            {
                hlMatrixStoreGBI(mtx_store, gMatrixHeap);

                hal_translate(mtx_store.gbi, weapon_hit->hit_positions[i].pos_prev.x, weapon_hit->hit_positions[i].pos_prev.y, weapon_hit->hit_positions[i].pos_prev.z);

                gSPMatrix(gpDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                hlMatrixStoreGBI(mtx_store, gMatrixHeap);

                hal_scale(mtx_store.gbi, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F);

                gSPMatrix(gpDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                gSPDisplayList(gpDisplayListHead[0]++, &gDisplayListHitboxEdge);

                gSPPopMatrix(gpDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_translate(mtx_store.gbi, weapon_hit->hit_positions[i].pos.x, weapon_hit->hit_positions[i].pos.y, weapon_hit->hit_positions[i].pos.z);

            gSPMatrix(gpDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_scale(mtx_store.gbi, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F);

            gSPMatrix(gpDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            if (weapon_hit->update_state == gmHitCollision_UpdateState_Interpolate)
            {
                gSPDisplayList(gpDisplayListHead[0]++, &gDisplayListHitboxBlend);
            }
            gSPDisplayList(gpDisplayListHead[0]++, &gDisplayListHitboxCube);

            gSPPopMatrix(gpDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
    }
}

// 0x801671F0
void wpRender_DisplayMapCollisions(GObj *weapon_gobj) // Render item ECB?
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f *translate = &DObjGetStruct(weapon_gobj)->translate;
    mpObjectColl *object_coll = &wp->coll_data.object_coll;
    MtxStore mtx_store;

    gDPPipeSync(gpDisplayListHead[1]++);

    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

    hal_translate(mtx_store.gbi, translate->x, translate->y + object_coll->bottom, translate->z);

    gSPMatrix(gpDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

    hal_scale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->center - object_coll->bottom) / 30.0F, 1.0F);

    gSPMatrix(gpDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gpDisplayListHead[1]++, &gDisplayListMapCollisionBottom);

    gSPPopMatrix(gpDisplayListHead[1]++, G_MTX_MODELVIEW);

    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

    hal_translate(mtx_store.gbi, translate->x, translate->y + object_coll->center, translate->z);

    gSPMatrix(gpDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

    hal_scale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->top - object_coll->center) / 30.0F, 1.0F);

    gSPMatrix(gpDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gpDisplayListHead[1]++, &gDisplayListMapCollisionTop);

    gSPPopMatrix(gpDisplayListHead[1]++, G_MTX_MODELVIEW);
}

// 0x80167454
void wpRender_DrawMaster(void)
{
    gDPPipeSync(gpDisplayListHead[1]++);

    gSPClearGeometryMode(gpDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gpDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
}

// 0x801674B8
void wpRender_DrawZBuffer(void)
{
    gDPPipeSync(gpDisplayListHead[1]++);

    gSPSetGeometryMode(gpDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gpDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

void func_ovl3_80167520(GObj *weapon_gobj, void(*proc_render)(GObj*))
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->display_mode == dbObject_DisplayMode_MapCollision)
    {
        wpRender_DrawMaster(weapon_gobj);

        proc_render(weapon_gobj);

        wpRender_DrawZBuffer();

        wpRender_DisplayMapCollisions(weapon_gobj);
    }
    else if ((wp->display_mode == dbObject_DisplayMode_Master) || (wp->weapon_hit.update_state == gmHitCollision_UpdateState_Disable))
    {
        wpRender_DrawMaster();

        proc_render(weapon_gobj);

        wpRender_DrawZBuffer();
    }
    else wpRender_DisplayHitCollisions(weapon_gobj);
}

// 0x801675D0
void func_ovl3_801675D0(GObj *weapon_gobj)
{
    func_ovl3_80167520(weapon_gobj, func_80013E8C);
}

// 0x801675F4
void func_ovl3_801675F4(GObj *weapon_gobj)
{
    func_ovl3_80167520(weapon_gobj, func_800143FC);
}

// 0x80167618
void func_ovl3_80167618(GObj *weapon_gobj)
{
    func_ovl3_80167520(weapon_gobj, func_ovl0_800CB4B0); // Unused?
}

// 0x8016763C
void func_ovl3_8016763C(GObj *weapon_gobj)
{
    func_ovl3_80167520(weapon_gobj, func_80014768);
}

GfxColor wpNess_PKThunder_PrimColor[WPPKTHUNDER_TRAIL_COUNT - 1]    = { { 94, 163, 255 }, { 152, 189, 255 }, { 194, 217, 255 }, { 179, 241, 255 } };
GfxColor wpNess_PKThunder_EnvColor[WPPKTHUNDER_TRAIL_COUNT - 1]     = { { 58,   0, 131 }, {  91,   0, 178 }, { 134,  51, 217 }, { 167, 116, 248 } };

// 0x80167660
void wpRender_DisplayPKThunder(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 index = wp->weapon_vars.pkthunder_trail.trail_index;

    if (ip->display_mode == dbObject_DisplayMode_MapCollision)
    {
        wpRender_DrawMaster();

        gDPPipeSync(gpDisplayListHead[1]++);

        gDPSetPrimColor(gpDisplayListHead[1]++, 0, 0, wpNess_PKThunder_PrimColor[index].r, wpNess_PKThunder_PrimColor[index].g, wpNess_PKThunder_PrimColor[index].b, 255);

        gDPSetEnvColor(gpDisplayListHead[1]++, wpNess_PKThunder_EnvColor[index].r, wpNess_PKThunder_EnvColor[index].g, wpNess_PKThunder_EnvColor[index].b, 255);

        func_800143FC(weapon_gobj);

        wpRender_DrawZBuffer();

        wpRender_DisplayMapCollisions(weapon_gobj);
    }
    else if ((wp->display_mode == dbObject_DisplayMode_Master) || (wp->weapon_hit.update_state == gmHitCollision_UpdateState_Disable))
    {
        wpRender_DrawMaster();

        gDPPipeSync(gpDisplayListHead[1]++);

        gDPSetPrimColor(gpDisplayListHead[1]++, 0, 0, wpNess_PKThunder_PrimColor[index].r, wpNess_PKThunder_PrimColor[index].g, wpNess_PKThunder_PrimColor[index].b, 255);

        gDPSetEnvColor(gpDisplayListHead[1]++, wpNess_PKThunder_EnvColor[index].r, wpNess_PKThunder_EnvColor[index].g, wpNess_PKThunder_EnvColor[index].b, 255);

        func_800143FC(weapon_gobj);

        wpRender_DrawZBuffer();
    }
    else wpRender_DisplayHitCollisions(weapon_gobj);
}
