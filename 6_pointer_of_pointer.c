

#include <stdio.h>

int main()
{

    int y = 14;

    int *ptr;

    ptr = &y;

    printf("%u=>%d\n", ptr, *ptr);

    int **ptr2;

    ptr2 = &ptr;

    printf("%u=>%d\n", ptr2, **ptr2);

    **ptr2 = 200;

    printf("changed value: %d", y);

    return 0;
}