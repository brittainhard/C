#ifndef __GARBAGE_H
#define __GARBAGE_H

#include <stdlib.h>
#include <stdio.h>

struct GarbageItem {
    void *item;
    struct GarbageItem *previous;
    struct GarbageItem *next;
};

struct GarbageItem *garbage_head;

void *gmalloc(int size);
void collect_garbage();

#endif
