#include "effect.h"

extern Gfx *gDisplayListHead[4];

s32 gEffectBankIndex;

extern intptr_t D_NF_00AC7340;
extern intptr_t D_NF_00AC9DE0;
extern intptr_t D_NF_00AC9DE0_other;
extern intptr_t D_NF_00B16C80;

void func_ovl2_800FCCC0(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_THRESHOLD);

    gDPSetBlendColor(gDisplayListHead[1]++, 0, 0, 0, 8);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
}

void func_ovl2_800FCD64(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_NONE);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
}

void func_ovl2_800FCDEC(void)
{
    omAddGObjRenderProc(omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6U, 0x80000000U), func_ovl2_800FCCC0, 0xF, 3, -1);
    omAddGObjRenderProc(omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6U, 0x80000000U), func_ovl2_800FCCC0, 0x12, 3, -1);
}

void func_ovl2_800FCE6C(void)
{
    omAddGObjRenderProc(omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6U, 0x80000000U), func_ovl2_800FCD64, 0xF, 0, -1);
    omAddGObjRenderProc(omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6U, 0x80000000U), func_ovl2_800FCD64, 0x12, 0, -1);
}

void func_ovl2_800FCEEC(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

void func_ovl2_800FCFCC(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

void func_ovl2_800FD0AC(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

void func_ovl2_800FD18C(void)
{
    GObj *gobj;

    gobj = omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6U, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl2_800FCFCC, 0x12, 1, -1);
    gobj->unk_0x30 = 5;

    gobj = omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6U, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl2_800FCFCC, 0xF, 1, -1);
    gobj->unk_0x30 = 2;

    gobj = omMakeGObjCommon(0x3F8U, NULL, 0xBU, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl2_800FCEEC, 0x19, 0x80000000U, -1);
    gobj->unk_0x30 = 8;

    gobj = omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6U, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl2_800FD0AC, 0xA, 0x80000000U, -1);
    gobj->unk_0x30 = 16;

    gEffectBankIndex = efAlloc_SetParticleBank(&D_NF_00AC7340, &D_NF_00AC9DE0, &D_NF_00AC9DE0_other, &D_NF_00B16C80);
}
