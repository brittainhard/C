#ifndef __PHONEBOOK_H
#define __PHONEBOOK_H

#define STRING_SIZE 256

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../garbage/garbage.h"


typedef struct Entry {
    struct Entry *right;
    struct Entry *left;
    char name[STRING_SIZE];
} Entry;


#endif
