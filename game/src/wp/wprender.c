#include <wp/weapon.h>

#include <sys/develop.h>
#include <sys/hal_gu.h>
#include <sys/obj_renderer.h>
#include <sys/obj.h>
#include <sys/ml.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

extern Gfx *gDisplayListHead[4];

extern mlBumpAllocRegion gMatrixHeap;

extern Vtx D_ovl2_8012BCF8;
extern Vtx D_ovl2_8012BE78;
extern Vtx D_ovl2_8012BEB8;
extern Vtx D_ovl2_8012BEF8;
extern Vtx D_ovl2_8012BF38;
extern Vtx D_ovl2_8012BF78;
extern Vtx D_ovl2_8012BFB8;

// 0x8012C128
extern Gfx gDisplayListHitboxEdge[/* */] =
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
    gsSPVertex(&D_ovl2_8012BCF8, 24, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList()
};  

// 0x8012C160
extern Gfx gDisplayListHitboxBlend[/* */] = 
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
    gsDPSetCombineMode(G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, 0x8012B978),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 255, 512),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 4, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSPVertex(&D_ovl2_8012BE78, 4, 24),
    gsSP2Triangles(0, 24, 27, 0, 3, 0, 27, 0),
    gsSP2Triangles(1, 25, 26, 0, 2, 1, 26, 0),
    gsSP2Triangles(27, 24, 0, 0, 27, 0, 3, 0),
    gsSP2Triangles(26, 25, 1, 0, 26, 1, 2, 0),
    gsSPVertex(&D_ovl2_8012BEB8, 4, 24),
    gsSP2Triangles(5, 25, 24, 0, 4, 5, 24, 0),
    gsSP2Triangles(6, 26, 27, 0, 7, 6, 27, 0),
    gsSP2Triangles(24, 25, 5, 0, 24, 5, 4, 0),
    gsSP2Triangles(27, 26, 6, 0, 27, 6, 7, 0),
    gsSPVertex(&D_ovl2_8012BEF8, 4, 24),
    gsSP2Triangles(8, 24, 27, 0, 11, 8, 27, 0),
    gsSP2Triangles(9, 25, 26, 0, 10, 9, 26, 0),
    gsSP2Triangles(27, 24, 8, 0, 27, 8, 11, 0),
    gsSP2Triangles(26, 25, 9, 0, 26, 9, 10, 0),
    gsSPVertex(&D_ovl2_8012BF38, 4, 24),
    gsSP2Triangles(13, 25, 24, 0, 12, 13, 24, 0),
    gsSP2Triangles(14, 26, 27, 0, 15, 14, 27, 0),
    gsSP2Triangles(24, 25, 13, 0, 24, 13, 12, 0),
    gsSP2Triangles(27, 26, 14, 0, 27, 14, 15, 0),
    gsSPVertex(&D_ovl2_8012BF78, 4, 24),
    gsSP2Triangles(17, 25, 24, 0, 16, 17, 24, 0),
    gsSP2Triangles(18, 26, 27, 0, 19, 18, 27, 0),
    gsSP2Triangles(24, 25, 17, 0, 24, 17, 16, 0),
    gsSP2Triangles(27, 26, 18, 0, 27, 18, 19, 0),
    gsSPVertex(&D_ovl2_8012BFB8, 4, 24),
    gsSP2Triangles(21, 25, 24, 0, 20, 21, 24, 0),
    gsSP2Triangles(22, 26, 27, 0, 23, 22, 27, 0),
    gsSP2Triangles(24, 25, 21, 0, 24, 21, 20, 0),
    gsSP2Triangles(27, 26, 22, 0, 27, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList()
}; 
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
            gDPPipeSync(gDisplayListHead[0]++);

            if (wp->display_mode == dbObject_DisplayMode_HitAttackOutline)
            {
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 176, 0, 0, 255);

                gDPSetEnvColor(gDisplayListHead[0]++, 176, 0, 0, 255);

                gDPSetBlendColor(gDisplayListHead[0]++, 0, 0, 0, 224);
            }
            else
            {
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 255, 255, 255, 255);

                gDPSetEnvColor(gDisplayListHead[0]++, 176, 0, 0, 255);

                gDPSetBlendColor(gDisplayListHead[0]++, 0, 0, 0, 0);
            }
            if (weapon_hit->update_state == gmHitCollision_UpdateState_Interpolate)
            {
                hlMatrixStoreGBI(mtx_store, gMatrixHeap);

                hal_translate(mtx_store.gbi, weapon_hit->hit_positions[i].pos_prev.x, weapon_hit->hit_positions[i].pos_prev.y, weapon_hit->hit_positions[i].pos_prev.z);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                hlMatrixStoreGBI(mtx_store, gMatrixHeap);

                hal_scale(mtx_store.gbi, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                gSPDisplayList(gDisplayListHead[0]++, &gDisplayListHitboxEdge);

                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_translate(mtx_store.gbi, weapon_hit->hit_positions[i].pos.x, weapon_hit->hit_positions[i].pos.y, weapon_hit->hit_positions[i].pos.z);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_scale(mtx_store.gbi, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F, weapon_hit->size / 15.0F);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            if (weapon_hit->update_state == gmHitCollision_UpdateState_Interpolate)
            {
                gSPDisplayList(gDisplayListHead[0]++, &gDisplayListHitboxBlend);
            }
            gSPDisplayList(gDisplayListHead[0]++, &gDisplayListHitboxCube);

            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
    }
}

// 0x801671F0
void wpRender_DisplayMapCollisions(GObj *weapon_gobj) // Render item ECB?
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f *translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;
    mpObjectColl *object_coll = &wp->coll_data.object_coll;
    MtxStore mtx_store;

    gDPPipeSync(gDisplayListHead[1]++);

    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

    hal_translate(mtx_store.gbi, translate->x, translate->y + object_coll->bottom, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

    hal_scale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->center - object_coll->bottom) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gDisplayListHead[1]++, &gDisplayListMapCollisionBottom);

    gSPPopMatrix(gDisplayListHead[1]++, G_MTX_MODELVIEW);

    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

    hal_translate(mtx_store.gbi, translate->x, translate->y + object_coll->center, translate->z);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

    hal_scale(mtx_store.gbi, object_coll->width / 30.0F, (object_coll->top - object_coll->center) / 30.0F, 1.0F);

    gSPMatrix(gDisplayListHead[1]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gDisplayListHead[1]++, &gDisplayListMapCollisionTop);

    gSPPopMatrix(gDisplayListHead[1]++, G_MTX_MODELVIEW);
}

// 0x80167454
void wpRender_DrawMaster(void)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
}

// 0x801674B8
void wpRender_DrawZBuffer(void)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
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

gsColorRGB wpNess_PKThunder_PrimColor[WPPKTHUNDER_PARTS_COUNT - 1]    = { { 94, 163, 255 }, { 152, 189, 255 }, { 194, 217, 255 }, { 179, 241, 255 } };
gsColorRGB wpNess_PKThunder_EnvColor[WPPKTHUNDER_PARTS_COUNT - 1]     = { { 58,   0, 131 }, {  91,   0, 178 }, { 134,  51, 217 }, { 167, 116, 248 } };

// 0x80167660
void wpRender_DisplayPKThunder(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 index = wp->weapon_vars.pkthunder_trail.trail_index;

    if (wp->display_mode == dbObject_DisplayMode_MapCollision)
    {
        wpRender_DrawMaster();

        gDPPipeSync(gDisplayListHead[1]++);

        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, wpNess_PKThunder_PrimColor[index].r, wpNess_PKThunder_PrimColor[index].g, wpNess_PKThunder_PrimColor[index].b, 0xFF);

        gDPSetEnvColor(gDisplayListHead[1]++, wpNess_PKThunder_EnvColor[index].r, wpNess_PKThunder_EnvColor[index].g, wpNess_PKThunder_EnvColor[index].b, 0xFF);

        func_800143FC(weapon_gobj);

        wpRender_DrawZBuffer();

        wpRender_DisplayMapCollisions(weapon_gobj);
    }
    else if ((wp->display_mode == dbObject_DisplayMode_Master) || (wp->weapon_hit.update_state == gmHitCollision_UpdateState_Disable))
    {
        wpRender_DrawMaster();

        gDPPipeSync(gDisplayListHead[1]++);

        gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, wpNess_PKThunder_PrimColor[index].r, wpNess_PKThunder_PrimColor[index].g, wpNess_PKThunder_PrimColor[index].b, 0xFF);

        gDPSetEnvColor(gDisplayListHead[1]++, wpNess_PKThunder_EnvColor[index].r, wpNess_PKThunder_EnvColor[index].g, wpNess_PKThunder_EnvColor[index].b, 0xFF);

        func_800143FC(weapon_gobj);

        wpRender_DrawZBuffer();
    }
    else wpRender_DisplayHitCollisions(weapon_gobj);
}
