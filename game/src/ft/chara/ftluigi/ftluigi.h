#ifndef _FTLUIGI_H_
#define _FTLUIGI_H_

#include <ft/fttypes.h>

#include "ftmario_functions.h"

extern ftStatusDesc ftStatus_Luigi_SpecialDesc[/* */];

typedef enum ftLuigiMotion
{
    ftMotion_Luigi_Attack13 = ftMotion_Common_SpecialStart,
    ftMotion_Luigi_AppearR,
    ftMotion_Luigi_AppearL,
    ftMotion_Luigi_SpecialN,
    ftMotion_Luigi_SpecialAirN,
    ftMotion_Luigi_SpecialHi,
    ftMotion_Luigi_SpecialAirHi,
    ftMotion_Luigi_SpecialLw,
    ftMotion_Luigi_SpecialAirLw

} ftLuigiMotion;

typedef enum ftLuigiStatus
{
    ftStatus_Luigi_Attack13 = ftStatus_Common_SpecialStart,
    ftStatus_Luigi_AppearR,
    ftStatus_Luigi_AppearL,
    ftStatus_Luigi_SpecialN,
    ftStatus_Luigi_SpecialAirN,
    ftStatus_Luigi_SpecialHi,
    ftStatus_Luigi_SpecialAirHi,
    ftStatus_Luigi_SpecialLw,
    ftStatus_Luigi_SpecialAirLw

} ftLuigiStatus;

#endif /* _FTLUIGI_H_ */