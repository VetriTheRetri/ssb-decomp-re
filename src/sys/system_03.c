#include <sys/obj.h>
#include <sys/system_03_1.h>
#include <stddef.h>

s32 func_8000ACD0(GObj *gobj, s32 arg1, GObj *next)
{
    if (gobj == NULL)
    {
        gobj = D_80046A54;
    }
    if (next == NULL)
    {
        next = D_80046A54;
    }
    if (gobj->gobjlinks_num == ARRAY_COUNT(gobj->gobjlinks))
    {
        return -1;
    }
    gobj->gobjlinks[gobj->gobjlinks_num].unk_gobjlink_0x4 = arg1;
    gobj->gobjlinks[gobj->gobjlinks_num].next = next;
    
    gobj->gobjlinks_num++;

    return 0;
}

GObj* func_8000AD38(GObj *gobj, GObjLink *gobjlink)
{
    return func_8000ACD0(gobj, gobjlink->unk_gobjlink_0x4, gobjlink->next);
}

void unref_8000AD60(s32 id, s32 arg1, GObj *gobj)
{
    GObjLink gobjlink;
    
    gobjlink.next = (gobj != NULL) ? gobj : D_80046A54;
    gobjlink.unk_gobjlink_0x4 = arg1;

    func_8000AFE4(id, func_8000AD38, &gobjlink, 0);
}

s32 func_8000ADB0(void (*proc)(GObjLink)) 
{
    GObj *gobj = D_80046A54;

#if defined (AVOID_UB) || defined (NON_MATCHING)
    GObjLink *gobjlink = gobj->gobjlinks;

#else 
    GObjLink *gobjlink = gobj = gobj->gobjlinks;

#endif
    s32 i;

    /* FAKE MATCH: gobj is transformed into the same pointer as gobjlink (base + 0x48), 
     * but then it reads the len at gobjlink + 0x28 (aka base + 0x70) for the loop;
     * match involves hacks, please use the solution inside the AVOID_UB guard for real applications.
     */
#if defined (AVOID_UB) || defined (NON_MATCHING)
    for (i = 0; i < gobj->gobjlinks_num; i++)

#else
    for (i = 0; i < *(s32*)((uintptr_t)gobj + (offsetof(GObj, gobjlinks_num) - offsetof(GObj, gobjlinks))); i++)

#endif
    {
        switch (gobjlink[i].unk_gobjlink_0x4 + ARRAY_COUNT(gobj->gobjlinks)) 
        {
        case 4: 
            gcEjectGObj(NULL); 
            return 1;
            
        case 3: 
            func_8000B284(NULL); 
            break;
            
        case 2: 
            func_8000B2B8(NULL); 
            break;
            
        case 1: 
            D_80046A54->flags |= GOBJ_FLAG_NORENDER; 
            break;
            
        case 0: 
            D_80046A54->flags &= ~GOBJ_FLAG_NORENDER; 
            break;
            
        default:
            if (proc != NULL) 
            {
                proc(gobjlink[i]); 
            }
            break;
        }
    }
#if defined (AVOID_UB) || defined (NON_MATCHING)
    gobj->gobjlinks_num = 0;

#else
    *(s32*)((uintptr_t)gobj + (offsetof(GObj, gobjlinks_num) - offsetof(GObj, gobjlinks))) = 0;

#endif
    return 0;
}
