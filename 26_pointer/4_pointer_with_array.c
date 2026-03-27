

#include <stdio.h>

int main()
{
    int *ptr;
    int p[] = {20,40,60,80};

    printf("%d\n", p[2]);

    ptr = p;

   

    for (int i = 0; i < 4; i++)
    {

        printf("%u=>%d\n", ptr + i, *(ptr + i));
    }

    return 0;
}