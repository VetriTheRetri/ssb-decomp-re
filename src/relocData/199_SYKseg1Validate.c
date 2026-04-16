/* relocData file 199: SYKseg1Validate — known symbols from
 * symbols/reloc_data_symbols.us.txt define named offset entries. */

#include "relocdata_types.h"

/* Func @ 0x0000 (48 bytes) */
u8 dSYKseg1Validate_Func[48] = {
	#include <SYKseg1Validate/Func.data.inc.c>
};

/* NBytes @ 0x0030 (16 bytes) */
u8 dSYKseg1Validate_NBytes[16] = {
	#include <SYKseg1Validate/NBytes.data.inc.c>
};
