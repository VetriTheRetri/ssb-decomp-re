#ifndef _RELOCDATA_TYPES_H_
#define _RELOCDATA_TYPES_H_

#include <PR/ultratypes.h>
#include <PR/gbi.h>
#include <PR/sp.h>
#include <sys/objtypes.h>
#include <mp/mptypes.h>
#include <it/ittypes.h>

/* PAD(n) inserts n zero bytes into .data for 16-byte alignment between
 * sprite blocks. The variable name is auto-generated from __LINE__ so each
 * pad gets a unique static identifier within the master file. */
#define _PAD_CONCAT(a, b) a##b
#define _PAD_NAME(line) _PAD_CONCAT(_relocdata_pad_, line)
#define PAD(n) static u8 _PAD_NAME(__LINE__)[n] = {0}

#endif /* _RELOCDATA_TYPES_H_ */
