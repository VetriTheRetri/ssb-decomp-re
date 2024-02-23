#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <gm/battle.h>

extern intptr_t D_NF_000000C6;
extern intptr_t D_NF_000000FC;
extern intptr_t D_NF_00001404;
extern intptr_t D_NF_00005028;
extern intptr_t D_NF_00005300;
extern intptr_t D_NF_00005C20;

// 0x8018E6E0
s32 dExplainInterfacePositions[/* */] = {  55, 125, 195, 265 };

// 0x8018E7F0
gmMatchInfo gExplainBattleState;

// 0x8018E9E0
void *D_ovl63_8018E9E0;

// 0x8018E9E4
void *D_ovl63_8018E9E4;

// 0x8018E9E8
void *D_ovl63_8018E9E8;

// 0x8018E9F0
scExplainInteface D_ovl63_8018E9F0;

// 0x8018D0C0
void func_ovl63_8018D0C0(void)
{
    D_ovl63_8018E9E0 = rldm_get_file_with_external_heap((uintptr_t)&D_NF_000000C6, hal_alloc(rldm_bytes_needed_to_load((uintptr_t)&D_NF_000000C6), 0x10));
    D_ovl63_8018E9E4 = rldm_get_file_with_external_heap((uintptr_t)&D_NF_000000FC, hal_alloc(rldm_bytes_needed_to_load((uintptr_t)&D_NF_000000FC), 0x10));
    D_ovl63_8018E9E8 = (void*) ((uintptr_t)D_ovl63_8018E9E4 + (intptr_t)&D_NF_00001404);
}

// 0x8018E7F0
void scExplainSetBattleState(void)
{
    gExplainBattleState = gDefaultBattleState;

    gBattleState = &gExplainBattleState;

    gBattleState->game_type = gmMatch_GameType_Explain;

    gBattleState->gr_kind = Gr_Kind_Explain;

    gBattleState->pl_count = 2;
    gBattleState->cp_count = 0;

    gBattleState->player_block[0].character_kind = Ft_Kind_Mario;
    gBattleState->player_block[1].character_kind = Ft_Kind_Luigi;

    gBattleState->player_block[0].player_kind = Pl_Kind_GameKey;
    gBattleState->player_block[1].player_kind = Pl_Kind_GameKey;
}

// 0x8018D1D4
void scExplainSetStartExplain(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        ftCommon_Appear_SetStatus(fighter_gobj);
        ftCommon_SetAllowPlayerControl(fighter_gobj);

        fp->camera_mode = 4;

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    gBattleState->game_status = gmMatch_GameStatus_Go;
}

// 0x8018D248
void func_ovl63_8018D248(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B9FC(9, 0x80000000U, 0x64, 1, 0xFF));

    func_80007080
    (
        &cam->viewport,
        gCameraStruct.scissor_ulx,
        gCameraStruct.scissor_uly,
        gCameraStruct.scissor_lrx,
        gCameraStruct.scissor_lry
    );
}

// 0x8018D2D0
void func_ovl63_8018D2D0(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetScissor(gDisplayListHead[0]++, G_SC_NON_INTERLACE, 10, 160, 310, 230);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, rgba32_to_fill_color(0xFF, gDisplayListHead));
    gDPFillRectangle(gDisplayListHead[0]++, 10, 160, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8018D3D8
void func_ovl63_8018D3D8(void)
{
    func_8000B93C(0x3EC, NULL, 9, 0x80000000, func_ovl63_8018D2D0, 0xF, 0, 0, 0, 0, 0, 0, 0);
}

// 0x8018D440
void scExplainSetPlayerInterfacePositions(void)
{
    gPlayerCommonInterface.ifplayers_pos_x = dExplainInterfacePositions;
    gPlayerCommonInterface.ifplayers_pos_y = 150;
}

// 0x8018D460
GObj* func_ovl63_8018D460(void)
{
    GObj *camera_gobj = func_8000B93C(0x3EC, NULL, 9, 0x80000000, func_ovl0_800CD2CC, 0xF, 0x04000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, 10.0F, 160.0F, 310.0F, 230.0F);

    return camera_gobj;
}

// 0x8018D500
GObj* func_ovl63_8018D500(void)
{
    GObj *camera_gobj = func_8000B93C(0x3EC, NULL, 9, 0x80000000, func_80017EC0, 0xF, 0x08000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);

    func_80008CF0(cam, 5, 1);
    func_80008CF0(cam, 6, 1);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->mtx_types.f6.f[0] = -150.0F;
    cam->mtx_types.f6.f[1] = 150.0F;
    cam->mtx_types.f6.f[2] = -110.0F;
    cam->mtx_types.f6.f[3] = 110.0F;

    return camera_gobj;
}

// 0x8018D5FC
void func_ovl63_8018D5FC(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80014768(gobj);

    gDPPipeSync(gDisplayListHead[1]++);
    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x8018D6DC
void scExplainProcUpdateSparkEffect(GObj *gobj)
{
    func_8000DF34(gobj);

    if (DObjGetStruct(gobj)->mobj->mobj_f2 == 15.0F)
    {
        if ((D_ovl63_8018E9F0.unk_scexplainif_0x31 == 4) || (D_ovl63_8018E9F0.unk_scexplainif_0x31 == 6))
        {
            func_ovl63_8018D8E8();
        }
    }
}

// 0x8018D748
GObj* func_ovl63_8018D748(void)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl63_8018D5FC, 0x1B, 0x80000000, -1);
    func_8000F590(interface_gobj, ((uintptr_t)D_ovl63_8018E9E0 + (intptr_t)&D_NF_00005300), NULL, 0x12, 0, 0);
    func_8000F8F4(interface_gobj, ((uintptr_t)D_ovl63_8018E9E0 + (intptr_t)&D_NF_00005028));
    omAddGObjCommonProc(interface_gobj, scExplainProcUpdateSparkEffect, 1, 5);

    interface_gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;

    return interface_gobj;
}

// 0x8018D808
void func_ovl63_8018D808(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80013E8C(gobj);

    gDPPipeSync(gDisplayListHead[1]++);
    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x8018D8E8
void func_ovl63_8018D8E8(void)
{
    GObj *gobj = D_ovl63_8018E9F0.unk_scexplainif_0x8;
    DObj *dobj = DObjGetStruct(gobj);
    Vec3f *pos = &DObjGetStruct(D_ovl63_8018E9F0.unk_scexplainif_0x4)->translate.vec.f;

    if (D_ovl63_8018E9F0.unk_scexplainif_0x31 == 4)
    {
        dobj->translate.vec.f.x = pos->x + 5.0F;
        dobj->translate.vec.f.y = pos->y + 15.0F;
    }
    else
    {
        dobj->translate.vec.f.x = pos->x + 15.0F;
        dobj->translate.vec.f.y = pos->y + 5.0F;
    }
    func_8000BED8(gobj, NULL, ((uintptr_t)D_ovl63_8018E9E0 + (intptr_t)&D_NF_00005C20), 0.0F);
    func_8000DF34(gobj);

    gobj->obj_renderflags = GOBJ_RENDERFLAG_NONE;
}

// 0x8018D9B4
void func_ovl63_8018D9B4(GObj *gobj)
{
    func_8000DF34(gobj);

    if (DObjGetStruct(gobj)->mobj->mobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;
    }
}