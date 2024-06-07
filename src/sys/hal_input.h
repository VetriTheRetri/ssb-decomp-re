#ifndef _HAL_INPUT_H_
#define _HAL_INPUT_H_

#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/ultratypes.h>

#include <macros.h>
#include <ssb_types.h>

// Might be temporary, don't know where else to put these

#define I_CONTROLLER_RANGE_MAX 80									// Maximum control stick range in integer
#define F_CONTROLLER_RANGE_MAX ((float)I_CONTROLLER_RANGE_MAX)		// Maximum control stick range in float

#endif
