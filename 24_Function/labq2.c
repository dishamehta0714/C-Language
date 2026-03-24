#include <stdio.h>

int main()
{
    int num;

    printf("Enter any num: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0)
    {
        printf("The given num is divisible by bioth 3 & 5: ");
    }
    else
    {
        printf("The given num is Not divisible by bioth 3 & 5: ");
    }

    return 0;
}