#include <ef/effect.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lEFCommonParticleBankHeaderLo;                  // 0x00AC7340
extern intptr_t lEFCommonParticleBankHeaderHi;                  // 0x00AC9DE0
extern intptr_t lEFCommonParticleBankTextureLo;                 // 0x00AC9DE0
extern intptr_t lEFCommonParticleBankTextureHi;                 // 0x00B16C80

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800FCCC0
void efRenderProcRenderBlendCLD(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_THRESHOLD);

    gDPSetBlendColor(gDisplayListHead[1]++, 0x00, 0x00, 0x00, 0x08);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
}

// 0x800FCD64
void efRenderProcRenderXLU(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_NONE);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
}

// 0x800FCDEC
void efRenderMakeBlendCLD(void)
{
    omAddGObjRenderProc(omMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efRenderProcRenderBlendCLD, 15, 3, -1);
    omAddGObjRenderProc(omMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efRenderProcRenderBlendCLD, 18, 3, -1);
}

// 0x800FCE6C
void efRenderMakeXLU(void)
{
    omAddGObjRenderProc(omMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efRenderProcRenderXLU, 15, 0, -1);
    omAddGObjRenderProc(omMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efRenderProcRenderXLU, 18, 0, -1);
}

// 0x800FCEEC
void efRenderProcRenderZPerspXLU(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FCFCC
void efRenderProcRenderZPerspCLD(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD0AC
void efRenderProcRenderZPerspAAXLU(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD18C
void efRenderInitAll(void)
{
    GObj *gobj;

    gobj = omMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, efRenderProcRenderZPerspCLD, 18, 1, -1);
    gobj->unk_gobj_0x30 = 5;

    gobj = omMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, efRenderProcRenderZPerspCLD, 15, 1, -1);
    gobj->unk_gobj_0x30 = 2;

    gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, efRenderProcRenderZPerspXLU, 25, GOBJ_DLLINKORDER_DEFAULT, -1);
    gobj->unk_gobj_0x30 = 8;

    gobj = omMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, efRenderProcRenderZPerspAAXLU, 10, GOBJ_DLLINKORDER_DEFAULT, -1);
    gobj->unk_gobj_0x30 = 16;

    gEFManagerParticleBankID = efAllocGetAddParticleBankID(&lEFCommonParticleBankHeaderLo, &lEFCommonParticleBankHeaderHi, &lEFCommonParticleBankTextureLo, &lEFCommonParticleBankTextureHi);
}
