#ifndef _SCFUNCTIONS_H_
#define _SCFUNCTIONS_H_

#include <sc/scbackup.h>    /* Not necessarily part of the sc module, but it's easier to keep track of if it's
                             * grouped together with scene data and battle state
                             */
// Common scenes
#include <sc/scsubsys/scsubsys.h>
#include <sc/sccommon/scexplain.h>
#include <sc/sccommon/scautodemo.h>

// 1P Game scenes
#include <sc/sc1pmode/sc1pmanager.h>
#include <sc/sc1pmode/sc1pstageclear.h>
#include <sc/sc1pmode/sc1pgame.h>
#include <sc/sc1pmode/sc1pgameboss.h>

#endif
