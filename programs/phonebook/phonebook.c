#include "phonebook.h"


struct Entry *get_new_entry(char *name)
{
    struct Entry *new_entry = gmalloc(sizeof(struct Entry));
    strncpy(new_entry->name, name, STRING_SIZE);
    return new_entry;
}

int main(int argc, char *argv[])
{
    struct Entry *root = get_new_entry("hard, brittain");
    struct Entry *node1 = get_new_entry("mcdonnell, kelly");
    struct Entry *node2= get_new_entry("overton, john");
    free(root);
    free(node1);
    free(node2);
    return 0;
}
