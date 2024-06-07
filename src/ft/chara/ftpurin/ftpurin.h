#ifndef _FTPURIN_H_
#define _FTPURIN_H_

#include <ft/fttypes.h>

#include "ftpurin_functions.h"

#define FTPURIN_JUMPAERIAL_VEL_MUL 0.8F
#define FTPURIN_POUND_VEL_BASE 0.65F
#define FTPURIN_POUND_VEL_MUL 0.92F

extern ftStatusDesc dFTPurinSpecialStatusDesc[/* */];

extern void *gFTDataPurinMain;
extern void *gFTDataPurinBattleMotion;
extern void *gFTDataPurinModel;
extern void *gFTDataPurinSpecial2;
extern u32 gFTDataPurinParticleBankID;

extern void *gFTDataPolyPurinMain;
extern void *gFTDataPolyPurinSubMotion;
extern void *gFTDataPolyPurinModel;
extern u32 gFTDataPolyPurinParticleBankID;

typedef enum ftPurinMotion
{
    ftMotion_Purin_Attack100Start = ftMotion_Common_SpecialStart,
    ftMotion_Purin_Attack100Loop,
    ftMotion_Purin_Attack100End,            // These three above are unused
    ftMotion_Purin_JumpAerialF1,
    ftMotion_Purin_JumpAerialF2,
    ftMotion_Purin_JumpAerialF3,
    ftMotion_Purin_JumpAerialF4,
    ftMotion_Purin_JumpAerialF5,
    ftMotion_Purin_AppearR,
    ftMotion_Purin_AppearL,
    ftMotion_Purin_SpecialN,
    ftMotion_Purin_SpecialAirN,
    ftMotion_Purin_SpecialHi,
    ftMotion_Purin_SpecialAirHi,
    ftMotion_Purin_SpecialLw,
    ftMotion_Purin_SpecialAirLw

} ftPurinMotion;

typedef enum ftPurinStatus
{
    ftStatus_Purin_Attack100Start = ftStatus_Common_SpecialStart,
    ftStatus_Purin_Attack100Loop,
    ftStatus_Purin_Attack100End,            // These three above are unused
    ftStatus_Purin_JumpAerialF1,
    ftStatus_purin_JumpAerialF2,
    ftStatus_Purin_JumpAerialF3,
    ftStatus_Purin_JumpAerialF4,
    ftStatus_Purin_JumpAerialF5,
    ftStatus_Purin_AppearR,
    ftStatus_Purin_AppearL,
    ftStatus_Purin_SpecialN,
    ftStatus_Purin_SpecialAirN,
    ftStatus_Purin_SpecialHi,
    ftStatus_Purin_SpecialAirHi,
    ftStatus_Purin_SpecialLw,
    ftStatus_Purin_SpecialAirLw

} ftPurinStatus;

typedef struct ftPurin_FighterVars
{
    u32 unk_0x0;

} ftPurin_FighterVars;

#endif