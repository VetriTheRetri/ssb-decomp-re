#include <regdef.h>
#include <sys/asm.h>

.text
LEAF(sqrtf)
	sqrt.s $f0, $f12
	jr ra
END(sqrtf)