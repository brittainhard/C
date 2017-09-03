#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 256


struct Entry {
    struct Entry *right;
    struct Entry *left;
    char name[256];
};


struct Entry *get_node(char *name)
{
    struct Entry *new_entry = malloc(sizeof(struct Entry));
    strncpy(new_entry->name, name, STRING_SIZE);
    return new_entry;
}

int main(int argc, char *argv[])
{
    struct Entry *root = get_node("hard");
    struct Entry *node1 = get_node("mcdonnell");
    struct Entry *node2= get_node("overton");
    printf("%s %s\n", root->name, node1->name);
    printf("%d\n", strcmp(root->name, node1->name));
    printf("%d\n", strcmp(node1->name, root->name));
    free(root);
    free(node1);
    free(node2);
    return 0;
}
