#include <os_internal.h>
extern int __osAtomicDec(unsigned int *p)
{
    int result;
    u32 mask;
    result = __osDisableInt();
    if (*p)
    {
        (*p)--;
        mask = 1;
    }
    else
    {
        mask = 0;
    }
    __osRestoreInt(result);
    return mask;
}
