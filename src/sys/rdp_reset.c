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
void (*sScissorCallback)(Gfx**) = NULL;
Mtx sIdentityMatrix              = 
{
    {
        /* Integer Portion */
        {0x00010000, 0x00000000, 0x00000001, 0x00000000},
        {0x00000000, 0x00010000, 0x00000000, 0x00000001},
        /* Fractional Portion */
        {0x00000000, 0x00000000, 0x00000000, 0x00000000},
        {0x00000000, 0x00000000, 0x00000000, 0x00000000}
    }
};

DIAGNOSTIC_SAVE()
DIAGNOSTIC_IGNORE("-Wmissing-braces")

Gfx sResetRdp[] = 
{
    gsDPPipeSync(),
    gsSPViewport(&sViewport),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN| G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
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
    gsSPEndDisplayList()
};

DIAGNOSTIC_RESTORE()

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

#pragma GLOBAL_ASM("asm/nonmatchings/sys/rdp_reset/func_80007080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/rdp_reset/dpSetViewport.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/rdp_reset/set_scissor_callback.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/rdp_reset/reset_rdp_settings.s")
