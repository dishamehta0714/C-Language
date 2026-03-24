#include <stdio.h>


int factorial(int a)
{
    if(a == 0 || a == 1)   
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);   
    }
}

int main()
{
    int num = 5;
    int result;

    result = factorial(num);

    printf("Factorial = %d", result);

    return 0;
}