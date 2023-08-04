#include "sys/rdp_reset.h"

#include "sys/gtl.h"
#include "sys/system_00.h"

#include <config.h>
#include <macros.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

// bss
Vp sViewport;

// data
void (*sScissorCallback)(Gfx **) = NULL;
Mtx sIdentityMatrix              = {{
    /* Integer Portion */
    {0x00010000, 0x00000000, 0x00000001, 0x00000000},
    {0x00000000, 0x00010000, 0x00000000, 0x00000001},
    /* Fractional Portion */
    {0x00000000, 0x00000000, 0x00000000, 0x00000000},
    {0x00000000, 0x00000000, 0x00000000, 0x00000000},
}};

DIAGNOSTIC_SAVE()
DIAGNOSTIC_IGNORE("-Wmissing-braces")
Gfx sResetRdp[] = {
    gsDPPipeSync(),
    gsSPViewport(&sViewport),
    gsSPClearGeometryMode(
        G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN
        | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPClipRatio(FRUSTRATIO_1),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPMatrix(&sIdentityMatrix, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION),
    gsSPMatrix(&sIdentityMatrix, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPPipelineMode(G_PM_NPRIMITIVE),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    gsDPSetCombineKey(G_CK_NONE),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_OPA_SURF2),
    gsDPSetColorDither(G_CD_MAGICSQ),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};
DIAGNOSTIC_RESTORE()

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

#ifdef NON_MATCHING
void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    vp->vp.vscale[0] = ((arg3 - ((arg1 + arg3) / 2.0f)) * 4.0f);
    vp->vp.vscale[1] = ((arg4 - ((arg2 + arg4) / 2.0f)) * 4.0f);
    vp->vp.vtrans[0] = (((arg1 + arg3) / 2.0f) * 4.0f);
    vp->vp.vtrans[1] = (((arg2 + arg4) / 2.0f) * 4.0f);
    vp->vp.vscale[2] = vp->vp.vtrans[2] = G_MAXZ / 2;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_01/func_80007080.s")
#endif

#pragma GCC diagnostic pop

void setup_viewport(Vp *vp) {
    vp->vp.vscale[0] = vp->vp.vtrans[0] = gCurrScreenWidth * 2;
    vp->vp.vscale[1] = vp->vp.vtrans[1] = gCurrScreenHeight * 2;
    vp->vp.vscale[2] = vp->vp.vtrans[2] = G_MAXZ / 2;
}

void set_scissor_callback(void (*cb)(Gfx **)) {
    sScissorCallback = cb;
}

void reset_rdp_settings(Gfx **dlist) {
    Gfx *dlHead = *dlist;

    gSPSegment(dlHead++, G_MWO_SEGMENT_0, 0x00000000);
    func_800048F8(&dlHead);
    gDPSetDepthImage(dlHead++, gZBuffer);
    setup_viewport(&sViewport);
    gSPDisplayList(dlHead++, sResetRdp);

    gDPSetScissor(
        dlHead++,
        G_SC_NON_INTERLACE,
        10 * (gCurrScreenWidth / SCREEN_WIDTH),
        10 * (gCurrScreenHeight / SCREEN_HEIGHT),
        gCurrScreenWidth - 10 * (gCurrScreenWidth / SCREEN_WIDTH),
        gCurrScreenHeight - 10 * (gCurrScreenHeight / SCREEN_HEIGHT));

    if (sScissorCallback != NULL) { sScissorCallback(&dlHead); }

    *dlist = dlHead;
}
