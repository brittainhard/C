#include "garbage.h"

#include <stdio.h>


int main(int argc, char *argv[])
{
    char *potato = gmalloc(256);
    char *apple = gmalloc(256);
    potato = "Potato";
    apple = "Apple";
    printf("%s\n", potato);
    printf("%s\n", apple);
    printf("%lu\n", *potato - *apple);
    collect_garbage();
    return 0;
}
