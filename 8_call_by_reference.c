

#include <stdio.h>

int callByReference(int *d)
{

    *d = 400;
}

int main()
{

    int valueArgu = 40;

    int *ptr;

    ptr = &valueArgu;

    int result = callByReference(ptr);

    printf("value argument: %d\n", valueArgu);

    return 0;
}