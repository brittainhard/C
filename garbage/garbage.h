#ifndef __GARBAGE_H
#define __GARBAGE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct GarbageItem {
    void *item;
    struct GarbageItem *previous;
    struct GarbageItem *next;
} GarbageItem;

GarbageItem *GARBAGE_HEAD;

void *gmalloc(int size);
void collect_garbage();

#endif
