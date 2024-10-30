#include <ef/effect.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t lEFCommonParticleBankScriptsLo;                 // 0x00AC7340
extern uintptr_t lEFCommonParticleBankScriptsHi;                 // 0x00AC9DE0
extern uintptr_t lEFCommonParticleBankTexturesLo;                // 0x00AC9DE0
extern uintptr_t lEFCommonParticleBankTexturesHi;                // 0x00B16C80

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800FCCC0
void efDisplayCLDFuncDisplay(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[1]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPSetAlphaCompare(gSYTaskmanDLHeads[1]++, G_AC_THRESHOLD);
    gDPSetBlendColor(gSYTaskmanDLHeads[1]++, 0x00, 0x00, 0x00, 0x08);
    gSPClearGeometryMode(gSYTaskmanDLHeads[1]++, G_ZBUFFER);
}

// 0x800FCD64
void efDisplayXLUFuncDisplay(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[1]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    gDPSetAlphaCompare(gSYTaskmanDLHeads[1]++, G_AC_NONE);
    gSPSetGeometryMode(gSYTaskmanDLHeads[1]++, G_ZBUFFER);
}

// 0x800FCDEC
void efDisplayMakeCLD(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, nGCCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayCLDFuncDisplay, 15, 3, -1);
    gcAddGObjDisplay(gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, nGCCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayCLDFuncDisplay, 18, 3, -1);
}

// 0x800FCE6C
void efDisplayMakeXLU(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, nGCCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayXLUFuncDisplay, 15, 0, -1);
    gcAddGObjDisplay(gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, nGCCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayXLUFuncDisplay, 18, 0, -1);
}

// 0x800FCEEC
void efDisplayZPerspXLUFuncDisplay(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);

    LBParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_PERSP);
    gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FCFCC
void efDisplayZPerspCLDFuncDisplay(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    LBParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_PERSP);
    gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD0AC
void efDisplayZPerspAAXLUFuncDisplay(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    LBParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_PERSP);
    gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);
    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD18C
void efDisplayInitAll(void)
{
    GObj *gobj;

    gobj = gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, nGCCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayZPerspCLDFuncDisplay, 18, 1, -1);
    gobj->cobj_mask = (COBJ_MASK_DLLINK(2) | COBJ_MASK_DLLINK(0));

    gobj = gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, nGCCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayZPerspCLDFuncDisplay, 15, 1, -1);
    gobj->cobj_mask = COBJ_MASK_DLLINK(1);

    gobj = gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, nGCCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayZPerspXLUFuncDisplay, 25, GOBJ_DLLINKORDER_DEFAULT, -1);
    gobj->cobj_mask = COBJ_MASK_DLLINK(3);

    gobj = gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, nGCCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayZPerspAAXLUFuncDisplay, 10, GOBJ_DLLINKORDER_DEFAULT, -1);
    gobj->cobj_mask = COBJ_MASK_DLLINK(4);

    gEFManagerParticleBankID = efParticleGetLoadBankID
    (
        &lEFCommonParticleBankScriptsLo,
        &lEFCommonParticleBankScriptsHi,
        &lEFCommonParticleBankTexturesLo,
        &lEFCommonParticleBankTexturesHi
    );
}
