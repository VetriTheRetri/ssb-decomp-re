#include <sys/develop.h>
#include <sys/obj_renderer.h>

// 0x80388AE0
extern dbUnknownLink D_ovl8_80388AE0;

// 0x80388B40
extern dbFunction D_ovl8_80388B40[];

// 0x80388C98
extern db4Bytes D_ovl8_80388C98;

// 0x80388CA0
extern db4Bytes D_ovl8_80388CA0;

// 0x80388D08
extern dbFunction D_ovl8_80388D08[];

// 0x80371FB0
dbUnknownLink* func_ovl8_80371FB0(dbUnknownLink *arg0, dbUnknownLinkStruct *arg1)
{
    if (arg0 != NULL)
    {
        goto next;
    }
    else arg0 = func_ovl8_803717A0(0x70);

    if (arg0 == NULL)
    {
        goto end;
    }
next:
    if (arg1 == NULL)
    {
        arg1 = &arg0->unk_dbunklink_0x14;
        func_ovl8_803717E0(&arg0->unk_dbunklink_0x14);
    }
    // Whitespace memes
    arg0->unk_dbunklink_0x10 = (void *)arg1,
    arg0->unk_dbunklink_0xC = &D_ovl8_80388AE0,
    arg1->db_func = D_ovl8_80388B40;

    func_ovl8_80372420(arg0, 0);

end:
    return arg0;
}

// 0x8037203C
dbUnknownLink* func_ovl8_8037203C(dbUnknownLink *arg0, dbUnknownLinkStruct *arg1, void *arg2, void *arg3)
{
    if (arg0 != NULL)
    {
        goto next;
    }
    else arg0 = func_ovl8_803717A0(0x70);

    if (arg0 == NULL)
    {
        goto end;
    }
next:
    if (arg1 == NULL)
    {
        arg1 = &arg0->unk_dbunklink_0x14;
        func_ovl8_803717E0(&arg0->unk_dbunklink_0x14);
    }
    arg0->unk_dbunklink_0x10 = (void*)arg1,
    arg0->unk_dbunklink_0xC = &D_ovl8_80388AE0,
    arg1->db_func = D_ovl8_80388B40;

    func_ovl8_80371ECC(arg0->unk_dbunklink_0x10, arg2);
    func_ovl8_80372420(arg0, arg3);

end:
    return arg0;
}

// 0x803720D4
void func_ovl8_803720D4(dbTestMenu *arg0, u32 arg1)
{
    if (arg0 != NULL)
    {
        // Whitespace memes
        arg0->unk_dbtestmenu_0xC = &D_ovl8_80388AE0,
        arg0->unk_dbtestmenu_0x10->db_func = D_ovl8_80388B40;

        if (arg0->unk_dbtestmenu_0x0 != NULL)
        {
            omEjectGObjCommon(arg0->unk_dbtestmenu_0x0);
        }
        if (arg0->unk_dbtestmenu_0x4 != NULL)
        {
            omEjectGObjCommon(arg0->unk_dbtestmenu_0x4);
        }
        if (arg1 != 0)
        {
            func_ovl8_803718C4(arg0->unk_dbtestmenu_0x10, NULL, arg0);
        }
        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x8037217C
void func_ovl8_8037217C(dbUnknownLink *arg0)
{
    dbMenuSprite *next;
    SObj *sobj;
    GObj *gobj;

    next = arg0->unk_dbunklink_0x10;
    gobj = next->unk_dbmenusprite_0x48;
    sobj = SObjGetStruct(gobj);

    sobj->sprite.rsp_dl_next = gDisplayListHead[0];

    spDraw(&sobj->sprite);

    gDisplayListHead[0] = sobj->sprite.rsp_dl_next - 1;

    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x803721E8
void func_ovl8_803721E8(dbTestMenu *arg0, dbUnknownLinkStruct *arg1)
{
    arg1->unk_dbunkstruct_0x2.arr[0] = 0;
    arg1->unk_dbunkstruct_0x0 = 0;

    if (arg0->unk_dbtestmenu_0x8 != NULL)
    {
        arg1->unk_dbunkstruct_0x2.arr[1] = arg0->unk_dbtestmenu_0x8->arr[2];
        arg1->unk_dbunkstruct_0x2.arr[2] = arg0->unk_dbtestmenu_0x8->arr[3];
    }
    else
    {
        arg1->unk_dbunkstruct_0x2.arr[2] = 0;
        arg1->unk_dbunkstruct_0x2.arr[1] = 0;
    }
}

// 0x80372224
void func_ovl8_80372224(dbTestMenu *arg0)
{
    arg0->db_func[3].unk_dbfunc_0x4(arg0->db_func[3].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80372250
void func_ovl8_80372250(dbTestMenu *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    func_ovl8_80377AEC(arg0->db_func[9].unk_dbfunc_0x4(arg0->db_func[9].unk_dbfunc_0x0 + (uintptr_t)arg0), arg1, arg2, arg3);
}

// 0x803722A0
void func_ovl8_803722A0(dbTestMenu *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    func_ovl8_803787C0(arg1, arg0->db_func[9].unk_dbfunc_0x4(arg0->db_func[9].unk_dbfunc_0x0 + (uintptr_t)arg0), arg2, arg3);
}

// 0x803722F0
void func_ovl8_803722F0(dbTestMenu *arg0, s32 arg1)
{
    dbUnknown2 sp1C;
    db4Bytes *fbytes = &D_ovl8_80388C98;

    sp1C.unk_dbmorethan_0x0 = *fbytes;

    arg0->db_func[5].unk_dbfunc_0x4(arg0->db_func[5].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1, &sp1C, 1);
}

// 0x80372348
void func_ovl8_80372348(s32 arg0, s32 arg1, s32 arg2)
{
    return;
}

// 0x80372358
void* func_ovl8_80372358(dbTestMenu *arg0)
{
    return arg0->unk_dbtestmenu_0x8;
}

// 0x80372360
void func_ovl8_80372360(dbMenuSprite *mnsprite, Sprite *arg1)
{
    SObj *sobj;

    mnsprite->sprite = arg1;

    sobj = SObjGetStruct(mnsprite->unk_dbmenusprite_0x4);

    sobj->sprite = *arg1;
}

// 0x803723AC
void* func_ovl8_803723AC(dbMenuSprite *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    dbMenuSprite *mnsprite;
    SObj *sobj;
    void *thing = func_ovl8_8037BF68(arg1, arg2, arg3, arg4, arg0, (uintptr_t)arg0 + 4, arg5);

    mnsprite = arg0->unk_dbmenusprite_0x10;

    mnsprite->unk_dbmenusprite_0x48 = arg0->unk_dbmenusprite_0x4;

    sobj = SObjGetStruct(arg0->unk_dbmenusprite_0x4);

    arg0->sprite = &sobj->sprite;

    return thing;
}

// 0x80372420
void func_ovl8_80372420(dbMenuSprite *mnsprite, Sprite *sprite)
{
    mnsprite->unk_dbmenusprite_0x0 = mnsprite->unk_dbmenusprite_0x4 = NULL;
    mnsprite->sprite = sprite;
}

// 0x80372348
sb32 func_ovl8_80372348(s32 arg0, s32 arg1, s32 arg2)
{
    return;
}

// 0x80372358
void* func_ovl8_80372358(dbTestMenu *arg0)
{
    return arg0->unk_dbtestmenu_0x8;
}

// 0x80372430
void *func_ovl8_80372430(dbUnknownLink *arg0, dbUnknownLinkStruct *arg1)
{
    if (arg0 != NULL)
    {
        goto next;
    }
    else arg0 = func_ovl8_803717A0(0x70);

    if (arg0 == NULL)
    {
        goto end;
    }
next:
    if (arg1 == NULL)
    {
        arg1 = &arg0->unk_dbunklink_0x14;
        func_ovl8_803717E0(&arg0->unk_dbunklink_0x14);
    }
    func_ovl8_80371FB0(arg0, arg1);

    // Whitespace memes
    arg0->unk_dbunklink_0xC = D_ovl8_80388CA0,
    arg1->db_func = D_ovl8_80388D08;

    func_ovl8_8037277C(arg0);

end:
    return arg0;
}

// 0x803724B4
void* func_ovl8_803724B4(dbUnknownLink *arg0, dbUnknownLinkStruct *arg1, void *arg2, void *arg3, void *arg4)
{
    dbUnknownLinkStruct *temp_v1;

    if (arg0 != NULL)
    {
        goto next;
    }
    else arg0 = func_ovl8_803717A0(0x70);

    if (arg0 == NULL)
    {
        goto end;
    }
next:
    if (arg1 == NULL)
    {
        arg1 = &arg0->unk_dbunklink_0x14;
        func_ovl8_803717E0(&arg0->unk_dbunklink_0x14);
    }
    func_ovl8_8037203C(arg0, arg1, arg2, arg4);

    arg0->unk_dbunklink_0xC = D_ovl8_80388CA0;

    arg1->db_func = D_ovl8_80388D08;

    // Whitespace memes
    temp_v1 = (dbUnknownLinkStruct *)arg0->unk_dbunklink_0x10,

        temp_v1->unk_dbunkstruct_0x4C = arg3;

    func_ovl8_8037277C(arg0);

end:
    return arg0;
}