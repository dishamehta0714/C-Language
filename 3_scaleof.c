

#include <stdio.h>

int main()
{

    int a = 31;

    int *ptr;

    ptr = &a;

    printf("%u\n", ptr);
    printf("%u\n", ptr + 1);

    char word = 'a';

    char *ptr2;

    ptr2 = &word;

    printf("%u\n", ptr2);
    printf("%u\n", ptr2 + 1);

    return 0;
}