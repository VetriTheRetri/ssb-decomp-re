#include <gr/ground.h>

#include <ft/fighter.h>

// 0x80108550
efGenerator* func_ovl2_80108550(Vec3f *pos)
{
    efGenerator *efgen = func_ovl0_800D35DC(gGroundStruct.yoster.cloud_gfx_id, 0);

    if (efgen != NULL)
    {
        efgen->pos.x = pos->x;
        efgen->pos.y = pos->y;
        efgen->pos.z = pos->z;
    }
    return efgen;
}

u8 D_ovl2_8012EB28[3] = 
{
    0x1, 0x2, 0x3
};

// 0x801085A8
bool32 func_ovl2_801085A8(s32 index)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    s32 dobj_id = D_ovl2_8012EB28[index];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->ground_or_air == GA_Ground)
        {
            if ((fp->coll_data.ground_line_id != -2) && (mpCollision_SetDObjNoID(fp->coll_data.ground_line_id) == dobj_id))
            {
                return TRUE;
            }
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    return FALSE;
}
