#include "effect.h"

extern Gfx *gpDisplayListHead[4];

s32 gEffectBankIndex;

extern intptr_t D_NF_00AC7340;
extern intptr_t D_NF_00AC9DE0;
extern intptr_t D_NF_00AC9DE0_other;
extern intptr_t D_NF_00B16C80;

void func_ovl2_800FCCC0(GObj *effect_gobj)
{
    gDPPipeSync(gpDisplayListHead[1]++);

    gDPSetRenderMode(gpDisplayListHead[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetAlphaCompare(gpDisplayListHead[1]++, G_AC_THRESHOLD);

    gDPSetBlendColor(gpDisplayListHead[1]++, 0, 0, 0, 8);

    gSPClearGeometryMode(gpDisplayListHead[1]++, G_ZBUFFER);
}

void func_ovl2_800FCD64(GObj *effect_gobj)
{
    gDPPipeSync(gpDisplayListHead[1]++);

    gDPSetRenderMode(gpDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetAlphaCompare(gpDisplayListHead[1]++, G_AC_NONE);

    gSPSetGeometryMode(gpDisplayListHead[1]++, G_ZBUFFER);
}

void func_ovl2_800FCDEC(void)
{
    func_80009DF4(omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6U, 0x80000000U), func_ovl2_800FCCC0, 0xF, 3, -1);
    func_80009DF4(omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6U, 0x80000000U), func_ovl2_800FCCC0, 0x12, 3, -1);
}

void func_ovl2_800FCE6C(void)
{
    func_80009DF4(omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6U, 0x80000000U), func_ovl2_800FCD64, 0xF, 0, -1);
    func_80009DF4(omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6U, 0x80000000U), func_ovl2_800FCD64, 0x12, 0, -1);
}

void func_ovl2_800FCEEC(GObj *effect_gobj)
{
    gDPPipeSync(gpDisplayListHead[0]++);

    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gpDisplayListHead[0]++);

    gDPSetTexturePersp(gpDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gpDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

void func_ovl2_800FCFCC(GObj *effect_gobj)
{
    gDPPipeSync(gpDisplayListHead[0]++);

    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gpDisplayListHead[0]++);

    gDPSetTexturePersp(gpDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gpDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

void func_ovl2_800FD0AC(GObj *effect_gobj)
{
    gDPPipeSync(gpDisplayListHead[0]++);

    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gpDisplayListHead[0]++);

    gDPSetTexturePersp(gpDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gpDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

void func_ovl2_800FD18C(void)
{
    GObj *gobj;

    gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6U, 0x80000000);
    func_80009DF4(gobj, func_ovl2_800FCFCC, 0x12, 1, -1);
    gobj->unk_0x30 = 5;

    gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6U, 0x80000000);
    func_80009DF4(gobj, func_ovl2_800FCFCC, 0xF, 1, -1);
    gobj->unk_0x30 = 2;

    gobj = omMakeGObjCommon(0x3F8U, NULL, 0xBU, 0x80000000);
    func_80009DF4(gobj, func_ovl2_800FCEEC, 0x19, 0x80000000U, -1);
    gobj->unk_0x30 = 8;

    gobj = omMakeGObjCommon(gOMObj_Kind_Effect, NULL, 6U, 0x80000000);
    func_80009DF4(gobj, func_ovl2_800FD0AC, 0xA, 0x80000000U, -1);
    gobj->unk_0x30 = 16;

    gEffectBankIndex = func_ovl2_801159F8(&D_NF_00AC7340, &D_NF_00AC9DE0, &D_NF_00AC9DE0_other, &D_NF_00B16C80);
}
