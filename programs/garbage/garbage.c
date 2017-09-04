#include "garbage.h"


void add_block(void *new_pointer)
{
    GarbageItem *next_item = malloc(sizeof(GarbageItem));
    next_item->item = NULL;
    next_item->next = NULL;
    next_item->previous = NULL;

    GARBAGE_HEAD->item = new_pointer;
    GARBAGE_HEAD->next = next_item;
    next_item->previous = GARBAGE_HEAD;
    GARBAGE_HEAD = next_item;
}

void *gmalloc(int size)
{
    void *new_block = malloc(size);
    if(GARBAGE_HEAD == NULL){
        GARBAGE_HEAD = malloc(sizeof(GarbageItem));
        GARBAGE_HEAD->previous = NULL;
        GARBAGE_HEAD->next = NULL;
        GARBAGE_HEAD->item = NULL;
    }
    add_block(new_block);
    return new_block;
}

void collect_garbage()
{
    while(GARBAGE_HEAD->previous != NULL){
        free(GARBAGE_HEAD->item);
        GARBAGE_HEAD = GARBAGE_HEAD->previous;
        free(GARBAGE_HEAD->next);
    }
    free(GARBAGE_HEAD->item);
    free(GARBAGE_HEAD);
}

