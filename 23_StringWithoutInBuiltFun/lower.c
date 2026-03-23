#include <stdio.h>

int main()
{
    char str1[10];

    printf("Enter string: ");
    scanf("%s", str1);

    for(int i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] = str1[i] + 32;   
        }
    }

    printf("lower case is %s", str1);

    return 0;
}