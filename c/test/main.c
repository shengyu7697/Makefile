#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(int argc, const char *argv[])
{
    printf("hello world\n");
    printf("3+5=%d\n", add(3,5));
    printf("5-2=%d\n", sub(5,2));

    return 0;
}
