#include <stdio.h>


int sub()
{
    int a = 10, b = 4;
    return a - b;
}

int main()
{
    int result;

    result = sub();  

    printf("Subtraction = %d", result);

    return 0;
}