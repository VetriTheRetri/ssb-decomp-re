#include "common.h"

extern s32 (*D_8038FBBC_1AC40C[])(s32, s32*);
extern s32 D_8038FBC0_1AC410;
extern u16 D_ovl8_8038BD10;

extern void func_ovl8_80376164();
extern void func_ovl8_80376848();
extern void func_ovl8_8037C660();
extern void func_ovl8_8037CA60();
extern void func_ovl8_8037E830();
extern void func_ovl8_8037EE00();
extern void func_ovl8_8037FBC0();
extern void func_ovl8_80380EC0();
extern void func_ovl8_80382490();
extern void func_ovl8_80382710();
extern void func_ovl8_80382AE0();
extern void func_ovl8_80382D90();
extern void func_ovl8_803840C0();
extern void func_ovl8_80384460();
extern void func_ovl8_80385180();
extern void func_ovl8_80385460();
extern void func_ovl8_80385640();
extern void func_ovl8_80385A50();
extern void func_ovl8_803879A0();

s32 func_ovl8_80381C2C(s32 arg0);

// 0x80381B70
void func_ovl8_80381B70(s32 arg0, uintptr_t func)
{
    s32 temp_v0;
    s32 var_v1;
    s32 *temp_v0_2;

    temp_v0 = func_ovl8_80381C2C(arg0);
    var_v1 = temp_v0 & 0xFFFF;
    if (temp_v0 == 0) {
        D_ovl8_8038BD10++;
        var_v1 = D_ovl8_8038BD10;
    }
    temp_v0_2 = (var_v1 * 2) + &D_8038FBC0_1AC410;
    temp_v0_2[-2] = arg0;
    temp_v0_2[-1] = func;
}

// 0x80381BD0
#ifdef NON_MATCHING
s32 func_ovl8_80381BD0(s32 *arg0, s32 arg1)
{
    s32 temp_v0;
    temp_v0 = func_ovl8_80381C2C(arg0[0x14/4]);
    if (temp_v0 != 0)
        return D_8038FBBC_1AC40C[(temp_v0 & 0xFFFF) * 2](arg1, arg0);
    return 0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_18/func_ovl8_80381BD0.s")
#endif /* NON_MATCHING */

// 0x80381C2C
#ifdef NON_MATCHING
s32 func_ovl8_80381C2C(s32 arg0)
{
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0;
    var_v0 = 0;

    if ((s32) D_ovl8_8038BD10 > 0) {
        do {
            if (arg0 == *(&D_8038FBC0_1AC410 + (var_v0 * 2))) {
                var_v1 = (var_v0 + 1) & 0xFFFF;
            }
            var_v0 = (var_v0 + 1) & 0xFFFF;
        } while (var_v0 < (s32) D_ovl8_8038BD10);
    }
    return var_v1 & 0xFFFF;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_18/func_ovl8_80381C2C.s")
#endif /* NON_MATCHING */

// 0x80381C80
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_18/func_ovl8_80381C80.s")

// 0x80381D40
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_18/func_ovl8_80381D40.s")

// 0x80381DC8
void func_ovl8_80381DC8(void)
{
    func_ovl8_80381B70(0x4657494E, func_ovl8_80376164);
    func_ovl8_80381B70(0x4648574E, func_ovl8_80376164);
    func_ovl8_80381B70(0x4646574E, func_ovl8_80376164);
    func_ovl8_80381B70(0x46464857, func_ovl8_80376164);
    func_ovl8_80381B70(0x4257494E, func_ovl8_80376848);
    func_ovl8_80381B70(0x4248574E, func_ovl8_80376848);
    func_ovl8_80381B70(0x4246574E, func_ovl8_80376848);
    func_ovl8_80381B70(0x42464857, func_ovl8_80376848);
    func_ovl8_80381B70(0x5342544E, func_ovl8_8037C660);
    func_ovl8_80381B70(0x53544742, func_ovl8_8037C660);
    func_ovl8_80381B70(0x534F5042, func_ovl8_8037C660);
    func_ovl8_80381B70(0x53544342, func_ovl8_8037C660);
    func_ovl8_80381B70(0x5354424E, func_ovl8_8037E830);
    func_ovl8_80381B70(0x53545442, func_ovl8_8037E830);
    func_ovl8_80381B70(0x53544F42, func_ovl8_8037E830);
    func_ovl8_80381B70(0x53545443, func_ovl8_8037E830);
    func_ovl8_80381B70(0x4242544E, func_ovl8_8037CA60);
    func_ovl8_80381B70(0x42544742, func_ovl8_8037CA60);
    func_ovl8_80381B70(0x424F5042, func_ovl8_8037CA60);
    func_ovl8_80381B70(0x424F5054, func_ovl8_8037CA60);
    func_ovl8_80381B70(0x42545842, func_ovl8_8037EE00);
    func_ovl8_80381B70(0x42545442, func_ovl8_8037EE00);
    func_ovl8_80381B70(0x42544F42, func_ovl8_8037EE00);
    func_ovl8_80381B70(0x42545443, func_ovl8_8037EE00);
    func_ovl8_80381B70(0x504F504D, func_ovl8_80376848);
    func_ovl8_80381B70(0x53504F50, func_ovl8_80382710);
    func_ovl8_80381B70(0x42504F50, func_ovl8_80382AE0);
    func_ovl8_80381B70(0x53564C4D, func_ovl8_8037FBC0);
    func_ovl8_80381B70(0x42564C4D, func_ovl8_80380EC0);
    func_ovl8_80381B70(0x42434150, func_ovl8_80382490);
    func_ovl8_80381B70(0x53434150, func_ovl8_80385640);
    func_ovl8_80381B70(0x43414D20, func_ovl8_80382D90);
    func_ovl8_80381B70(0x534C4544, func_ovl8_803840C0);
    func_ovl8_80381B70(0x424C4544, func_ovl8_80384460);
    func_ovl8_80381B70(0x534C5354, func_ovl8_80385180);
    func_ovl8_80381B70(0x424C5354, func_ovl8_80385460);
    func_ovl8_80381B70(0x53425050, func_ovl8_80385A50);
    func_ovl8_80381B70(0x53424950, func_ovl8_803879A0);
}
