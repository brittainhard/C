#include "garbage.h"


void add_block(void *new_pointer)
{
    struct GarbageItem *next_item = malloc(sizeof(struct GarbageItem));
    next_item->item = new_pointer;
    next_item->previous = garbage_head;
    garbage_head->next = next_item;
    garbage_head = next_item;
}

void collect_garbage()
{
    while(garbage_head->previous != NULL){
        garbage_head = garbage_head->previous;
        free(garbage_head->next->item);
        free(garbage_head->next);
    }
    free(garbage_head->next->item);
    free(garbage_head->next);
    free(garbage_head);
}

void *gmalloc(int size)
{
    void *new_block = malloc(size);
    add_block(new_block);
    return new_block;
}
