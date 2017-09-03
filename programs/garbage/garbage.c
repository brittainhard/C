#include "garbage.h"


void *gmalloc(int size)
{
    void *new_block = malloc(size);
    struct GarbageItem *new_item = malloc(sizeof(struct GarbageItem));
    new_item->next = new_block;
    free(new_item);
    return new_block;
}
