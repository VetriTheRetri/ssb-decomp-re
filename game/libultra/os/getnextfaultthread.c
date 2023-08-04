#include <os_internal.h>

extern OSThread *__osActiveQueue;
OSThread *__osGetNextFaultedThread(OSThread *lastFault)
{

    register int saveMask = __osDisableInt();
    register OSThread *fault;

    if (lastFault == NULL)
        fault = __osActiveQueue;
    else
        fault = lastFault;
    while (fault->priority != -1)
    {
        if ((fault->flags & 0x2) != 0 && fault != lastFault) //TODO document this
        {
            break;
        }
        fault = fault->tlnext;
    }
    if (fault->priority == -1)
        fault = NULL;
    __osRestoreInt(saveMask);
    return fault;
}

