#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include "lbtypes.h"
#include "lbfunctions.h"

#define lbRelocGetFileData(type, file, offset) \
((type) ((uintptr_t)(file) + (intptr_t)(offset)))

#endif
