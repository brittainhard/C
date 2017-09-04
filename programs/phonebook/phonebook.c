#include "phonebook.h"


struct Entry *get_new_entry(char *name)
{
    struct Entry *new_entry = gmalloc(sizeof(struct Entry));
    strncpy(new_entry->name, name, STRING_SIZE);
    return new_entry;
}

int main(int argc, char *argv[])
{
    garbage = malloc(sizeof(struct GarbageItem));
    phonebook = get_new_entry("HEAD");
    struct Entry *node1 = get_new_entry("mcdonnell, kelly");
    struct Entry *node2 = get_new_entry("overton, john");
    collect_garbage();
    return 0;
}
