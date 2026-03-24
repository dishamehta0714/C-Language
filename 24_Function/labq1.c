#include <stdio.h>


int cube(int d)
{
    return d * d * d;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = cube(num);

    printf("Cube = %d", result);

    return 0;
}