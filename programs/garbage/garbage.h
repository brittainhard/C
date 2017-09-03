#ifndef __GARBAGE_H
#define __GARBAGE_H

#include <stdlib.h>
#include <stdio.h>

struct GarbageItem {
    void *item;
    struct GarbageItem *next;
    struct GarbageItem *previous;
};

void *gmalloc(int size);

#endif
