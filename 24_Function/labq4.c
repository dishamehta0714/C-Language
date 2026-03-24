#include <stdio.h>


int strLen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100];
    int length;

    printf("Enter any string: ");
    scanf("%s", str);

    length = strLen(str);

    printf("Length is %d", length);

    return 0;
}