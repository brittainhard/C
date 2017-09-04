#include "garbage.h"


void *gmalloc(int size)
{
    void *new_block = malloc(size);
    add_block(new_block);
    return new_block;
}

void add_block(void *new_pointer)
{
    struct GarbageItem *next_item = malloc(sizeof(struct GarbageItem));

    garbage->item = new_pointer;
    garbage->next = next_item;
    next_item->previous = garbage;
    garbage = next_item;
}

void collect_garbage()
{
    while(garbage->previous != NULL){
        free(garbage->item);
        garbage = garbage->previous;
        free(garbage->next);
    }
    free(garbage->item);
    free(garbage);
}

