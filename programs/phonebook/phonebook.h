#ifndef __PHONEBOOK_H
#define __PHONEBOOK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../garbage/garbage.h"

#define STRING_SIZE 256


struct Entry {
    struct Entry *right;
    struct Entry *left;
    char name[256];
};

struct Entry *phonebook_head;


struct Entry *get_new_entry(char *name);


#endif
