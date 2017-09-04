#include "phonebook.h"


Entry *get_new_entry(char *name)
{
    Entry *new_entry = gmalloc(sizeof(Entry));
    new_entry->right = NULL;
    new_entry->left = NULL;
    strncpy(new_entry->name, name, STRING_SIZE);
    return new_entry;
}

int main(int argc, char *argv[])
{
    PHONEBOOK_HEAD = get_new_entry("hard, brittain");
    Entry *node1 = get_new_entry("mcdonnell, kelly");
    Entry *node2 = get_new_entry("overton, john");
    // From "garbage.h"
    collect_garbage();
    return 0;
}
