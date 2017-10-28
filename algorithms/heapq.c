#include <stdio.h>
#include <stdlib.h>

#include "../garbage/garbage.h"


typedef struct Node {
    int priority;
    struct Node *left;
    struct Node *right;
} Node;


Node *new_node(int priority)
{
    Node *new_node = gmalloc(sizeof(Node));
    new_node->priority = priority;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

int main(int argc, char *argv[])
{
    Node *head = new_node(1);
    printf("%d\n", head->priority);
    collect_garbage();
    return 0;
}
