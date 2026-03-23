#include <stdio.h>

int main()
{
    char str[10];
    int length = 0;

    printf("Enter string: ");
    scanf("%s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    printf("Length is %d", length);

    return 0;
}