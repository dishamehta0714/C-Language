

#include <stdio.h>

int main()
{

    int x[5] = {10,30,50,70,90};

    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {

        ptr[i] = &x[i];
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%u=>%d\n", ptr[i], *ptr[i]);
    }

    return 0;
}