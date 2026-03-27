

#include <stdio.h>

int main()
{

    int p = 30;

    int *ptr;

    ptr = &p;

    printf("%p", ptr);

    printf("%d\n", p);

    *ptr = 80;

    printf("%d\n", p);

    return 0;
}