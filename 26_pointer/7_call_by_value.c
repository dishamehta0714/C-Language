

#include <stdio.h>

int callByValue(int a)
{

    a = 200;
}

int main()
{

    int valueArgu = 20;

    int result = callByValue(valueArgu);

    printf("value argument: %d\n", valueArgu);

    return 0;
}