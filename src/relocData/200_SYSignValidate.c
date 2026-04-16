/* relocData file 200: SYSignValidate — known symbols from
 * symbols/reloc_data_symbols.us.txt define named offset entries. */

#include "relocdata_types.h"

/* Func @ 0x0000 (64 bytes) */
u8 dSYSignValidate_Func[64] = {
	#include <SYSignValidate/Func.data.inc.c>
};

/* NBytes @ 0x0040 (16 bytes) */
u8 dSYSignValidate_NBytes[16] = {
	#include <SYSignValidate/NBytes.data.inc.c>
};
