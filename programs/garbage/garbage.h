#ifndef __GARBAGE_H
#define __GARBAGE_H

#include <stdlib.h>

struct GarbageItem {
    void *item;
    struct GarbageItem *next;
    struct GarbageItem *previous;
};

int potato();

#endif
