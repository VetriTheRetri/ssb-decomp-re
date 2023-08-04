#include <os_internal.h>

extern OSThread *__osActiveQueue;
OSThread *__osGetActiveQueue(void)
{
    return __osActiveQueue;
}
