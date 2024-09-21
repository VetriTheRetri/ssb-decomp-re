#include <ft/fighter.h>
#include <it/item.h>
#include <if/interface.h>
#include <sc/scene.h>
#include <sys/system_00.h>



extern void func_80007080(void*, f32, f32, f32, f32);



// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t D_NF_000000C6;
extern intptr_t D_NF_000000FC;
extern intptr_t lSCExplainGameKeyuence0;                   // 0x00000000
extern intptr_t lSCExplainGameKeyuence1;                   // 0x000009D4
extern intptr_t lSCExplainGameKeyuence2;                   // 0x000013FC
extern intptr_t lSCExplainGameKeyuence3;                   // 0x00001400
extern intptr_t lSCExplainPhases;                           // 0x00001404
extern intptr_t lSCExplainStickMObjSub;                     // 0x00005028
extern intptr_t lSCExplainStickDObjDesc;                    // 0x00005300
extern intptr_t lSCExplainStickNeutralMatAnimJoint;         // 0x00005390
extern intptr_t lSCExplainStickHoldUpMatAnimJoint;          // 0x000053C0
extern intptr_t lSCExplainStickTapUpMatAnimJoint;           // 0x000053F0
extern intptr_t lSCExplainStickHoldForwardMatAnimJoint;     // 0x00005430
extern intptr_t lSCExplainStickTapForwardMatAnimJoint;      // 0x00005450
extern intptr_t lSCExplainTapSparkMObjSub;                  // 0x00005A98
extern intptr_t lSCExplainTapSparkDisplayList;              // 0x00005B68
extern intptr_t lSCExplainTapSparkMatAnimJoint;             // 0x00005C20
extern intptr_t lSCExplainSpecialMoveRGBDisplayList;        // 0x00005E40
extern intptr_t D_NF_00009628;
extern intptr_t D_NF_00011F60;
extern intptr_t D_NF_0001D338;
extern intptr_t D_NF_0001D948;
extern intptr_t D_NF_0001DF58;
extern intptr_t D_NF_0001E018;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018E7F0
scBattleState sSCExplainBattleState;

// 0x8018E9E0
void *sSCExplainGraphicsFileHead;

// 0x8018E9E4
void *sSCExplainMainFileHead;

// 0x8018E9E8
scExplainPhase *sSCExplainPhase;

// 0x8018E9F0
scExplainMain sSCExplainStruct;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018E6E0
s32 dSCExplainInterfacePositions[/* */] = {  55, 125, 195, 265 };

// 0x8018E6F0
s32 dSCExplainPad0x8018E6F0 = 0;

// 0x8018E6F4
intptr_t dSCExplainStickMatAnimJoints[/* */] = 
{
    0x0, 
    &lSCExplainStickNeutralMatAnimJoint, 
    &lSCExplainStickNeutralMatAnimJoint, 
    &lSCExplainStickHoldUpMatAnimJoint, 
    &lSCExplainStickTapUpMatAnimJoint, 
    &lSCExplainStickHoldForwardMatAnimJoint, 
    &lSCExplainStickTapForwardMatAnimJoint 
};

// 0x8018E710
intptr_t dSCExplainGameKeyuences[/* */] = 
{
    &lSCExplainGameKeyuence0,
    &lSCExplainGameKeyuence1,
    &lSCExplainGameKeyuence2,
    &lSCExplainGameKeyuence3
};

// 0x8018E720
Unk800D4060 D_ovl63_8018E720 = { 0 };

// 0x8018E724
s32 dSCExplainRandomSeed1 = 0x00000001;

// 0x8018E728
s32 dSCExplainRandomSeed2 = 0x00000001;

// 0x8018E72C
syDisplaySetup dSCExplainDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x8018E748
scRuntimeInfo dSCExplainGtlSetup =
{
    0,
    jtgt_ovl63_8018E568,
    jtgt_ovl63_8018E594,
    &ovl63_BSS_END,
    0,
    1,
    2,
    0x6000,
    0x3000,
    0,
    0,
    0x8000,
    0x20000,
    0xC000,
    scExplainProcLights,
    update_contdata,
    0,
    0x600,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0x800D5CAC,
    0,
    0,
    0,
    0,
    0x88,
    0,
    0x6C,
    0,
    0x90,
    scExplainProcStart
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018D0C0
void scExplainLoadExplainFiles(void)
{
    sSCExplainGraphicsFileHead = rdManagerGetFileWithExternHeap
    (
        (uintptr_t)&D_NF_000000C6,
        gsMemoryAlloc
        (
            rdManagerGetFileSize
            (
                (uintptr_t)&D_NF_000000C6
            ),
            0x10
        )
    );
    sSCExplainMainFileHead = rdManagerGetFileWithExternHeap
    (
        (uintptr_t)&D_NF_000000FC,
        gsMemoryAlloc
        (
            rdManagerGetFileSize
            (
                (uintptr_t)&D_NF_000000FC
            ), 
            0x10
        )
    );
    sSCExplainPhase = gcGetDataFromFile(scExplainPhase*, sSCExplainMainFileHead, &lSCExplainPhases);
}

// 0x8018D14C
void scExplainSetBattleState(void)
{
    sSCExplainBattleState = gDefaultBattleState;

    gBattleState = &sSCExplainBattleState;

    gBattleState->game_type = nSCBattleGameTypeExplain;

    gBattleState->gr_kind = nGRKindExplain;

    gBattleState->pl_count = 2;
    gBattleState->cp_count = 0;

    gBattleState->players[0].ft_kind = nFTKindMario;
    gBattleState->players[1].ft_kind = nFTKindLuigi;

    gBattleState->players[0].pl_kind = nFTPlayerKindGameKey;
    gBattleState->players[1].pl_kind = nFTPlayerKindGameKey;
}

// 0x8018D1D4
void scExplainStartBattle(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        ftCommonAppearSetStatus(fighter_gobj);
        ftParamUnlockPlayerControl(fighter_gobj);

        fp->camera_mode = nFTCameraModeExplain;

        fighter_gobj = fighter_gobj->link_next;
    }
    gBattleState->game_status = nSCBattleGameStatusGo;
}

// 0x8018D248
void func_ovl63_8018D248(void)
{
    Camera *cam = CameraGetStruct(gcMakeDefaultCameraGObj(9, 0x80000000U, 0x64, 1, 0xFF));

    func_80007080
    (
        &cam->viewport,
        gCMManagerCameraStruct.viewport_ulx,
        gCMManagerCameraStruct.viewport_uly,
        gCMManagerCameraStruct.viewport_lrx,
        gCMManagerCameraStruct.viewport_lry
    );
}

// 0x8018D2D0
void func_ovl63_8018D2D0(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetScissor(gDisplayListHead[0]++, G_SC_NON_INTERLACE, 10, 160, 310, 230);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, syDisplayGetFillColor(GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF)));
    gDPFillRectangle(gDisplayListHead[0]++, 10, 160, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8018D3D8
void func_ovl63_8018D3D8(void)
{
    gcMakeCameraGObj
    (
        nOMObjCommonKindScissorCamera,
        NULL,
        nOMObjCommonLinkIDCamera,
        GOBJ_LINKORDER_DEFAULT,
        func_ovl63_8018D2D0,
        15,
        0,
        0,
        0,
        0,
        0,
        0,
        0
    );
}

// 0x8018D440
void scExplainSetPlayerInterfacePositions(void)
{
    gIFCommonPlayerInterface.ifplayers_pos_x = dSCExplainInterfacePositions;
    gIFCommonPlayerInterface.ifplayers_pos_y = 150;
}

// 0x8018D460
GObj* func_ovl63_8018D460(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindScissorCamera,
        NULL,
        9,
        GOBJ_LINKORDER_DEFAULT,
        lbCommonScissorSpriteCamera,
        15,
        CAMERA_MASK_DLLINK(26), 
        -1,
        0,
        1,
        0,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, 10.0F, 160.0F, 310.0F, 230.0F);

    return camera_gobj;
}

// 0x8018D500
GObj* func_ovl63_8018D500(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        nOMObjCommonKindScissorCamera,
        NULL,
        nOMObjCommonLinkIDCamera,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        15,
        CAMERA_MASK_DLLINK(27),
        -1,
        0,
        1,
        0,
        1,
        0
    );
    Camera *cam = CameraGetStruct(camera_gobj);

    gcAddOMMtxForCamera(cam, nOMTransformOrtho, 1);
    gcAddOMMtxForCamera(cam, 6, 1);

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->projection.ortho.l = -150.0F;
    cam->projection.ortho.r = 150.0F;
    cam->projection.ortho.b = -110.0F;
    cam->projection.ortho.t = 110.0F;

    return camera_gobj;
}

// 0x8018D5FC
void scExplainControlStickProcDraw(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gcDrawDObjTreeDLLinksForGObj(gobj);

    gDPPipeSync(gDisplayListHead[1]++);
    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x8018D6DC
void scExplainProcUpdateControlStickSprite(GObj *gobj)
{
    gcPlayAnimAll(gobj);

    if (DObjGetStruct(gobj)->mobj->anim_frame == 15.0F)
    {
        if ((sSCExplainStruct.stick_status == 4) || (sSCExplainStruct.stick_status == 6))
        {
            scExplainUpdateTapSparkEffect();
        }
    }
}

// 0x8018D748
GObj* scExplainMakeControlStickInterface(void)
{
    GObj *interface_gobj = gcMakeGObjSPAfter
    (
        nOMObjCommonKindInterface,
        NULL,
        nOMObjCommonLinkIDInterface,
        GOBJ_LINKORDER_DEFAULT
    );
    gcAddGObjDisplay(interface_gobj, scExplainControlStickProcDraw, 27, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcSetupCustomDObjs
    (
        interface_gobj, 
        ((uintptr_t)sSCExplainGraphicsFileHead + (intptr_t)&lSCExplainStickDObjDesc), 
        NULL, 
        nOMTransformTra, 
        nOMTransformNull, 
        nOMTransformNull
    );
    gcAddMObjAll
    (
        interface_gobj,
        gcGetDataFromFile
        (
            MObjSub***, 
            sSCExplainGraphicsFileHead, 
            &lSCExplainStickMObjSub
        )
    );
    gcAddGObjProcess(interface_gobj, scExplainProcUpdateControlStickSprite, nOMObjProcessKindProc, 5);

    interface_gobj->flags = GOBJ_FLAG_NORENDER;

    return interface_gobj;
}

// 0x8018D808
void scExplainTapSparkProcDraw(GObj *gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gcDrawDObjDLHead1(gobj);

    gDPPipeSync(gDisplayListHead[1]++);
    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x8018D8E8
void scExplainUpdateTapSparkEffect(void)
{
    GObj *gobj = sSCExplainStruct.spark_gobj;
    DObj *dobj = DObjGetStruct(gobj);
    Vec3f *pos = &DObjGetStruct(sSCExplainStruct.stick_gobj)->translate.vec.f;

    if (sSCExplainStruct.stick_status == 4)
    {
        dobj->translate.vec.f.x = pos->x + 5.0F;
        dobj->translate.vec.f.y = pos->y + 15.0F;
    }
    else
    {
        dobj->translate.vec.f.x = pos->x + 15.0F;
        dobj->translate.vec.f.y = pos->y + 5.0F;
    }
    gcAddAnimAll(gobj, NULL, gcGetDataFromFile(AObjEvent32***, sSCExplainGraphicsFileHead, &lSCExplainTapSparkMatAnimJoint), 0.0F);
    gcPlayAnimAll(gobj);

    gobj->flags = GOBJ_FLAG_NONE;
}

// 0x8018D9B4
void scExplainTapSparkProcUpdate(GObj *gobj)
{
    gcPlayAnimAll(gobj);

    if (DObjGetStruct(gobj)->mobj->anim_remain == AOBJ_ANIM_NULL)
    {
        gobj->flags = GOBJ_FLAG_NORENDER;
    }
}

// 0x8018DA04
GObj* scExplainMakeTapSpark(void)
{
    GObj *interface_gobj = gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(interface_gobj, scExplainTapSparkProcDraw, 27, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddDObjForGObj(interface_gobj, (void*) ((uintptr_t)sSCExplainGraphicsFileHead + (intptr_t)&lSCExplainTapSparkDisplayList));
    gcAddOMMtxForDObjFixed(DObjGetStruct(interface_gobj), nOMTransformTra, 0);
    gcAddMObjAll(interface_gobj, gcGetDataFromFile(MObjSub***, sSCExplainGraphicsFileHead, &lSCExplainTapSparkMObjSub));
    gcAddGObjProcess(interface_gobj, scExplainTapSparkProcUpdate, nOMObjProcessKindProc, 5);

    interface_gobj->flags = GOBJ_FLAG_NORENDER;

    sSCExplainStruct.stick_status = 0;

    return interface_gobj;
}

// 0x8018DACC
void scExplainSpecialMoveRGBProcUpdate(void)
{
    s32 sw = sSCExplainPhase->rgb_overlay_args.sprite_status;
    GObj *gobj = sSCExplainStruct.rgb_gobj;

    // Check to apply trarnsparent RGB color overlay over control stick sprite when explaining B-button moves

    if (sw == 1)
    {
        DObj *dobj = DObjGetStruct(gobj);

        dobj->translate.vec.f.x = (sSCExplainPhase->control_stick_args.sprite_pos_x - 0x96);
        dobj->translate.vec.f.y = (-0x28 - sSCExplainPhase->control_stick_args.sprite_pos_y);

        gobj->flags = GOBJ_FLAG_NONE;
    }
    else gobj->flags = GOBJ_FLAG_NORENDER;
}

// 0x8018DB44
GObj* scExplainMakeSpecialMoveRGB(void)
{
    GObj *interface_gobj = gcMakeGObjSPAfter
    (
        nOMObjCommonKindInterface, 
        NULL,
        nOMObjCommonLinkIDInterface,
        GOBJ_LINKORDER_DEFAULT
    );
    gcAddGObjDisplay(interface_gobj, scExplainTapSparkProcDraw, 27, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddDObjForGObj(interface_gobj, gcGetDataFromFile(void*, sSCExplainGraphicsFileHead, &lSCExplainSpecialMoveRGBDisplayList));
    gcAddOMMtxForDObjFixed(DObjGetStruct(interface_gobj), nOMTransformTra, 0);

    interface_gobj->flags = GOBJ_FLAG_NORENDER;

    return interface_gobj;
}

// 0x8018DBD0
void scExplainSetInterfaceGObjs(void)
{
    sSCExplainStruct.stick_gobj = scExplainMakeControlStickInterface();
    sSCExplainStruct.spark_gobj = scExplainMakeTapSpark();
    sSCExplainStruct.rgb_gobj   = scExplainMakeSpecialMoveRGB();
}

// 0x8018DC0C
SObj* scExplainMakeSObjOffset(intptr_t offset)
{
    GObj *interface_gobj;
    SObj *sobj;

    interface_gobj = gcMakeGObjSPAfter
    (
        nOMObjCommonKindInterface,
        NULL,
        nOMObjCommonLinkIDInterface,
        GOBJ_LINKORDER_DEFAULT
    );
    gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    sobj = lbCommonMakeSObjForGObj(interface_gobj, gcGetDataFromFile(Sprite*, sSCExplainGraphicsFileHead, offset));

    sobj->sprite.attr |= SP_HIDDEN;

    return sobj;
}

// 0x8018DC84
void scExplainSetPhaseSObjs(void)
{
    sSCExplainStruct.textbox_sobj= scExplainMakeSObjOffset((intptr_t)&D_NF_00011F60);
    sSCExplainStruct.phase_sobj0 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001D338);
    sSCExplainStruct.phase_sobj1 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001D948);
    sSCExplainStruct.phase_sobj2 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001DF58);
    sSCExplainStruct.phase_sobj3 = scExplainMakeSObjOffset((intptr_t)&D_NF_00009628);
    sSCExplainStruct.phase_sobj4 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001E018);
    sSCExplainStruct.phase_sobj5 = scExplainMakeSObjOffset((intptr_t)&D_NF_0001E018);
}

// 0x8018DD18
void scExplainUpdateTextBoxSprite(void)
{
    sSCExplainStruct.textbox_sobj->sprite = *sSCExplainPhase->sprite;

    sSCExplainStruct.textbox_sobj->pos.x = sSCExplainPhase->textbox_pos_x + 10;
    sSCExplainStruct.textbox_sobj->pos.y = sSCExplainPhase->textbox_pos_y + 160;

    sSCExplainStruct.textbox_sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
}

// 0x8018DDBC
void func_ovl63_8018DDBC(void)
{
    s32 sw = sSCExplainPhase->control_stick_args.sprite_status;
    GObj *stick_gobj = sSCExplainStruct.stick_gobj;

    if (sw == 0)
    {
        stick_gobj->flags = GOBJ_FLAG_NORENDER;
    }
    else
    {
        DObj *dobj = DObjGetStruct(stick_gobj);

        dobj->translate.vec.f.x = sSCExplainPhase->control_stick_args.sprite_pos_x - 0x96;
        dobj->translate.vec.f.y = -0x28 - sSCExplainPhase->control_stick_args.sprite_pos_y;

        DObjGetStruct(stick_gobj)->child->flags = (sw == 2) ? DOBJ_FLAG_NONE : DOBJ_FLAG_NORENDER;

        gcAddAnimAll
        (
            stick_gobj,
            NULL,
            gcGetDataFromFile(AObjEvent32***, sSCExplainGraphicsFileHead, dSCExplainStickMatAnimJoints[sw]), 
            0.0F
        );
        gcPlayAnimAll(stick_gobj);

        stick_gobj->flags = GOBJ_FLAG_NONE;
    }
    sSCExplainStruct.stick_status = sw;
}

// 0x8018DEA0
void scExplainHideTapSpark(void)
{
    sSCExplainStruct.spark_gobj->flags = GOBJ_FLAG_NORENDER;
}

// 0x8018DEB4
void scExplainUpdateArgsSObj(scExplainArgs *args, SObj *sobj)
{
    if (args->sprite_status == 1)
    {
        sobj->sprite.attr &= ~SP_HIDDEN;

        sobj->pos.x = args->sprite_pos_x + 10;
        sobj->pos.y = args->sprite_pos_y + 160;
    }
    else sobj->sprite.attr |= SP_HIDDEN;
}

// 0x8018DF18
void scExplainDetectExit(void)
{
    s32 player;

    for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
    {
        u16 button_tap = gPlayerControllers[player].button_tap;

        if (button_tap & (A_BUTTON | B_BUTTON | START_BUTTON))
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            leoInitUnit_atten();

            break;
        }
    }
}

// 0x8018DF80
void scExplainTryMakeFireFlower(void)
{
    Vec3f pos;
    Vec3f vel;

    if (sSCExplainStruct.phase == 16)
    {
        pos.x = -1400.0F;
        pos.y = 1500.0F;
        pos.z = 0.0F;

        vel.x = vel.z = 0.0F;
        vel.y = 10.0F;

        itManagerMakeItemSetupCommon(NULL, nITKindFFlower, &pos, &vel, ITEM_FLAG_PARENT_DEFAULT);
    }
}

// 0x8018DFF8
void scExplainUpdatePhase(void)
{
    if (sSCExplainStruct.phase_advance_wait == 0)
    {
        scExplainTryMakeFireFlower();

        sSCExplainStruct.phase++;

        if (sSCExplainStruct.phase > 22)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindCharacters;

            leoInitUnit_atten();

            return;
        }
        else
        {
            scExplainUpdateTextBoxSprite();
            func_ovl63_8018DDBC();
            scExplainHideTapSpark();
            scExplainSpecialMoveRGBProcUpdate();
            scExplainUpdateArgsSObj(&sSCExplainPhase->phase_args0, sSCExplainStruct.phase_sobj0);
            scExplainUpdateArgsSObj(&sSCExplainPhase->phase_args1, sSCExplainStruct.phase_sobj1);
            scExplainUpdateArgsSObj(&sSCExplainPhase->phase_args2, sSCExplainStruct.phase_sobj2);
            scExplainUpdateArgsSObj(&sSCExplainPhase->phase_args3, sSCExplainStruct.phase_sobj3);
            scExplainUpdateArgsSObj(&sSCExplainPhase->phase_args4, sSCExplainStruct.phase_sobj4);
            scExplainUpdateArgsSObj(&sSCExplainPhase->phase_args5, sSCExplainStruct.phase_sobj5);

            sSCExplainStruct.phase_advance_wait = sSCExplainPhase->phase_time;

            sSCExplainPhase++;
        }
    }
    sSCExplainStruct.phase_advance_wait--;
}

// 0x8018E114
void scExplainSceneInterfaceProcUpdate(GObj *gobj)
{
    scExplainDetectExit();
    scExplainUpdatePhase();
}

// 0x8018E13C
GObj* scExplainMakeSceneInterface(void)
{
    GObj *interface_gobj = gcMakeGObjSPAfter
    (
        nOMObjCommonKindInterface, 
        NULL, 
        nOMObjCommonLinkIDInterface, 
        GOBJ_LINKORDER_DEFAULT
    );
    gcAddGObjProcess(interface_gobj, scExplainSceneInterfaceProcUpdate, nOMObjProcessKindProc, 5);

    sSCExplainStruct.phase_advance_wait = 0;
    sSCExplainStruct.phase = 0;

    scExplainSceneInterfaceProcUpdate(interface_gobj);

    return interface_gobj;
}

// 0x8018E1A0
void scExplainProcStart(void)
{
    s32 unused[3];
    GObj *fighter_gobj;
    s32 player;
    ftCreateDesc player_spawn;
    Unk800D4060 sp58;

    scExplainSetBattleState();
    scExplainSetupFiles();
    scExplainLoadExplainFiles();
    cmManagerSetViewportDimensions(10, 10, 310, 160);
    func_ovl63_8018D248();
    efAllocInitParticleBank();
    ftParamInitGame();
    mpCollisionInitGroundData();
    cmManagerMakeWallpaperCamera();
    grWallpaperMakeGroundWallpaper();
    func_ovl2_8010DB00();
    itManagerInitItems();
    grCommonSetupInitAll();
    ftManagerAllocFighter(FTDATA_FLAG_MAINMOTION, 2);
    wpManagerAllocWeapons();
    efManagerInitEffects();
    ifScreenFlashMakeInterface(0xFF);
    gmRumbleMakeActor();
    ftPublicityMakeActor();

    for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
    {
        player_spawn = dFTManagerDefaultFighterDesc;

        if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
        {
            continue;
        }
        ftManagerSetupFilesAllKind(gBattleState->players[player].ft_kind);

        player_spawn.ft_kind = gBattleState->players[player].ft_kind;

        mpCollisionGetPlayerMapObjPosition(player, &player_spawn.pos);

        player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? nGMFacingL : nGMFacingR;

        player_spawn.team = gBattleState->players[player].team;

        player_spawn.player = player;

        player_spawn.detail = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

        player_spawn.costume = gBattleState->players[player].costume;

        player_spawn.handicap = gBattleState->players[player].handicap;

        player_spawn.cp_level = gBattleState->players[player].level;

        player_spawn.stock_count = gBattleState->stock_setting;

        player_spawn.damage = 0;

        player_spawn.pl_kind = gBattleState->players[player].pl_kind;

        player_spawn.controller = &gPlayerControllers[player];

        player_spawn.figatree_heap = ftManagerAllocAnimHeapKind(gBattleState->players[player].ft_kind);

        fighter_gobj = ftManagerMakeFighter(&player_spawn);

        gBattleState->players[player].player_color = player;
        gBattleState->players[player].tag_kind = player;

        ftParamInitPlayerBattleStats(player, fighter_gobj);

        ftParamSetKey
        (
            fighter_gobj,
            gcGetDataFromFile
            (
                ftKeyCommand*,
                sSCExplainMainFileHead,
                dSCExplainGameKeyuences[player]
            )
        );
    }
    scExplainStartBattle();
    func_ovl2_8010E2D4();
    ifCommonPlayerArrowsInitInterface();
    func_ovl2_8010E1A4();
    ifCommonPlayerMagnifyMakeInterface();

    gIFCommonPlayerInterface.is_ifmagnify_display = TRUE;

    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    ifCommonPlayerTagMakeInterface();
    scExplainSetPlayerInterfacePositions();
    ifCommonPlayerDamageInitInterface();
    ifCommonPlayerDamageSetShowInterface();
    ifCommonPlayerStockInitInterface();
    func_ovl63_8018D3D8();
    func_ovl63_8018D460();
    func_ovl63_8018D500();
    scExplainSetInterfaceGObjs();
    scExplainSetPhaseSObjs();
    scExplainMakeSceneInterface();
    mpCollisionSetPlayBGM();
    func_800269C0_275C0(nSYAudioVoiceAnnounceHowToPlay);

    sp58 = D_ovl63_8018E720;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp58, 0xC, 1, 0);
}

// 0x8018E51C
void scExplainProcLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);

    ftDisplayLightsDrawReflect(dls, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E568
void jtgt_ovl63_8018E568(void)
{
    set_lcg_seed_ptr(&dSCExplainRandomSeed1);
    func_8000A5E4();
}

// 0x8018E594
void jtgt_ovl63_8018E594(void)
{
    set_lcg_seed_ptr(&dSCExplainRandomSeed2);
    func_800A26B8();
}

// 0x8018E5C0
void scExplainStartScene(void)
{
    dSCExplainDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);

    func_80007024(&dSCExplainDisplaySetup);

    set_lcg_seed_ptr(&dSCExplainRandomSeed1);

    dSCExplainGtlSetup.arena_size = (size_t) ((uintptr_t)&gSCSubsysFramebuffer0 - (uintptr_t)&ovl63_BSS_END);
    dSCExplainGtlSetup.proc_start = scExplainProcStart;

    func_800A2698(&dSCExplainGtlSetup);
    gmRumbleInitPlayers();
    set_lcg_seed_ptr(NULL);
}
