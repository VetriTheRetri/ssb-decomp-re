#include <os_internal.h>

extern OSThread *__osRunningThread;
OSId osGetThreadId(OSThread *thread)
{
    if (thread == NULL)
        thread = __osRunningThread;
    return thread->id;
}
