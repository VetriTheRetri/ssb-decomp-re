#include "ground.h"

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

    bg_gobj = func_ovl0_800CD050(omGObj_Kind_Background, 0, 0xD, 0x80000000, func_ovl0_800CCF00, 0, 0x80000000, -1, gpGroundInfo->unk_0x48, 1, func_ovl2_80104830, 3);

    D_ovl2_801313D8 = bg_gobj;

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

    bg_gobj = func_ovl0_800CD050(omGObj_Kind_Background, 0, 0xD, 0x80000000, func_ovl0_800CCF00, 0, 0x80000000, -1, gpGroundInfo->unk_0x48, 1, NULL, 3);

    D_ovl2_801313D8 = bg_gobj;

    bg_sobj = SObjGetStruct(bg_gobj);

    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;

    bg_sobj->sprite.attr = SP_TEXSHUF | SP_FASTCOPY;
    bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = 1.0F;
}