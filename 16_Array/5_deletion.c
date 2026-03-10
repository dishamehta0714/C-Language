#include <stdio.h>

int main()
{
    int num[5] = {10, 20, 30, 40, 50};

    printf("Before Deletion:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    int pos = 2;  

    for(int i = pos; i < 4; i++)
    {
        num[i] = num[i + 1];
    }

    printf("\nAfter Deletion:\n");

    for(int i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}