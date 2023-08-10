#include "ground.h"

#include <gm/gmmatch.h>

extern GObj *gpCameraGObj;

// 0x80104620 - Calculate perspective of stage background image?
void func_ovl2_80104620(SObj *bg_sobj)
{
    f32 mag;
    OMCamera *cam;
    Vec2f sp58;
    Vec3f sp4C;
    f32 bak_pos_x;
    f32 bak_pos_y;
    f32 pos_x;
    f32 pos_y;
    f32 neg;
    f32 width;
    f32 height;
    f32 scale;

    cam = OMCameraGetStruct(gpCameraGObj);

    lbVector_Vec3fSubtract(&sp4C, &cam->tilt, &cam->pan);

    mag = lbVector_Vec3fMagnitude(&sp4C);

    if (sp4C.z < 0.0F)
    {
        sp58.x = 0.0F;
        sp58.y = 0.0F;
    }
    else
    {
        sp58.y = atan2f(sp4C.x, sp4C.z);
        sp58.x = atan2f(sp4C.y, sp4C.z);
    }
    scale = 20000.0F / (mag + 8000.0F);

    if (scale < 1.004F)
    {
        scale = 1.004F;
    }
    else if (scale > 2.0F)
    {
        scale = 2.0F;
    }
    bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = scale;

    width = 300.0F * scale;     // Background image width  is 300px 
    height = 220.0F * scale;    // Background image height is 220px

    // Remember to make a macro for default resolution if one does not yet exist
    pos_x = bak_pos_x = ((sp58.y / F_DEG_TO_RAD(180.0F)) * width) - ((width - 320.0F) * 0.5F);      // Ultra64 default width  is 320px
    pos_y = bak_pos_y = ((-sp58.x / F_DEG_TO_RAD(180.0F)) * height) - ((height - 240.0F) * 0.5F);   // Ultra64 default height is 240px

    if (bak_pos_x > 10.0F)
    {
        pos_x = 10.0F;
    }
    else
    {
        neg = (-width - 10.0F) + 320.0F;

        if (bak_pos_x < neg)
        {
            pos_x = neg;
        }
    }
    if (bak_pos_y > 10.0F)
    {
        pos_y = 10.0F;
    }
    else
    {
        neg = (-height - 10.0F) + 240.0F;

        if (bak_pos_y < neg)
        {
            pos_y = neg;
        }
    }
    bg_sobj->pos.x = pos_x;
    bg_sobj->pos.y = pos_y;
}

// 0x80104830
void func_ovl2_80104830(GObj *bg_gobj)
{
    func_ovl2_80104620(SObjGetStruct(bg_gobj));
}

GObj *D_ovl2_801313D8;

// 0x80104850
void func_ovl2_80104850(void)
{
    GObj *bg_gobj;
    SObj *bg_sobj;

    D_ovl2_801313D8 = bg_gobj = func_ovl0_800CD050(omGObj_Kind_Background, NULL, 0xD, 0x80000000, func_ovl0_800CCF00, 0, 0x80000000, -1, gGroundInfo->unk_0x48, 1, func_ovl2_80104830, 3);

    bg_sobj = SObjGetStruct(bg_gobj);

    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;

    bg_sobj->sprite.attr = SP_TEXSHUF;
    bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = 1.004F;
}

// 0x801048F8
void func_ovl2_801048F8(void)
{
    GObj *bg_gobj;
    SObj *bg_sobj;

    D_ovl2_801313D8 = bg_gobj = func_ovl0_800CD050(omGObj_Kind_Background, NULL, 0xD, 0x80000000, func_ovl0_800CCF00, 0, 0x80000000, -1, gGroundInfo->unk_0x48, 1, NULL, 3);

    bg_sobj = SObjGetStruct(bg_gobj);

    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;

    bg_sobj->sprite.attr = SP_TEXSHUF | SP_FASTCOPY;
    bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = 1.0F;
}

// 0x80104998
void func_ovl2_80104998(GObj *bg_gobj)
{
    OMCamera *cam;
    SObj *bg_sobj;
    f32 sqrt;
    Vec3f sp28;
    f32 temp;
    f32 scale;

    cam = gpCameraGObj->obj;

    lbVector_Vec3fSubtract(&sp28, &cam->tilt, &cam->pan);

    sqrt = sqrtf(SQUARE(sp28.x) + SQUARE(sp28.y) + SQUARE(sp28.z));

    if (sqrt > 0.0F)
    {
        temp = 20000.0F / (sqrt + 10000.0F);

        if (temp < 1.004F)
        {
            temp = 1.004F;
        }
        else if (temp > 2.0F)
        {
            temp = 2.0F;
        }
        scale = (temp - 1.0F) * 0.5F;

        bg_sobj = SObjGetStruct(bg_gobj);

        bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = temp;

        bg_sobj->pos.x = 10.0F - (300.0F * scale);
        bg_sobj->pos.y = 10.0F - (220.0F * scale);
    }
}

// 0x80104ABC
void func_ovl2_80104ABC(void)
{
    GObj *bg_gobj;
    SObj *bg_sobj;

    D_ovl2_801313D8 = bg_gobj = omMakeGObjCommon(omGObj_Kind_Background, NULL, 0xD, 0x80000000);

    func_80009DF4(bg_gobj, &func_ovl0_800CCF00, 0, 0x80000000U, -1);

    bg_sobj = func_ovl0_800CCFDC(bg_gobj, gGroundInfo->unk_0x48);

    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;

    bg_sobj->sprite.attr = SP_TEXSHUF;

    omAddGObjCommonProc(bg_gobj, func_ovl2_80104998, 1, 3);
}

Gfx D_ovl2_8012E7C0[] = 
{
    gsDPSetCycleType(G_CYC_FILL),
    gsDPSetRenderMode(G_RM_NOOP, G_RM_NOOP2),
    gsDPSetFillColor(0x00010001),
    gsDPFillRectangle(10, 10, 310, 230), // 10 less than width and height?
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPEndDisplayList()
};

// 0x80104B58
void func_ovl2_80104B58(GObj *bg_gobj)
{
    gSPDisplayList(gDisplayListHead[0]++, D_ovl2_8012E7C0);
}

// 0x80104B88
void func_ovl2_80104B88(void)
{
    GObj *bg_gobj;

    D_ovl2_801313D8 = bg_gobj = omMakeGObjCommon(omGObj_Kind_Background, NULL, 0xD, 0x80000000);

    func_80009DF4(bg_gobj, func_ovl2_80104B58, 0, 0x80000000U, -1);
}

// 0x80104BDC
void func_ovl2_80104BDC(void)
{
    if (gSceneData.scene_current == gmSceneIndex_1PGame_Training)
    {
        func_unkmulti_8018DDB0();
        func_ovl2_801048F8();
    }
    else if (gpBattleState->gr_kind >= Gr_Kind_BonusGameStart)
    {
        func_ovl2_801048F8();
    }
    else switch (gpBattleState->gr_kind)
    {
    case Gr_Kind_Yoster:
    case Gr_Kind_Yoster1P:
        func_ovl2_801048F8();
        break;

    case Gr_Kind_Sector:
        func_ovl2_80104ABC();
        break;

    case Gr_Kind_Bonus3:
        func_ovl2_80104B88();
        break;

    case Gr_Kind_Last:
        func_ovl65_80192764();
        func_ovl2_80104850();
        break;

    default:
        func_ovl2_80104850();
        break;
    }
}

extern s8 D_ovl2_801313D0;

// 0x80104CB4
void func_ovl2_80104CB4(void)
{
    D_ovl2_801313D0 = TRUE; // ??? Runs when the game is paused
}

// 0x80104CC4
void func_ovl2_80104CC4(void)
{
    D_ovl2_801313D0 = FALSE; // Similarly, this runs when the game is unpaused
}

// 0x80104CD0 - New file?
void func_ovl2_80104CD0(void)
{
    GObjProcess *gobjproc = D_ovl2_801313D8->gobjproc;

    while (gobjproc != NULL)
    {
        if (gobjproc->unk_gobjproc_0x15 == 0)
        {
            if (gobjproc->proc != NULL)
            {
                gobjproc->proc(gobjproc->parent_gobj);
            }
        }
        gobjproc = gobjproc->gobjproc_next;
    }
}

// 0x80104D30
void func_ovl2_80104D30(void)
{
    GObj *gobj = gOMObjCommonLinks[gOMObjLinkIndexBackground];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == omGObj_Kind_Background)
        {
            func_8000B2B8(gobj);
        }
        gobj = gobj->group_gobj_next;
    }
}