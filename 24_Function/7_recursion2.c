#include <stdio.h>


int sum(int a)
{
    if(a == 0)   
    {
        return 0;
    }
    else if(a == 1){
        return 1;
    }
    else
    {
        return a + sum(a - 1);   
    }
}

int main()
{
    int num = 5;
    int result;

    result = sum(num);

    printf("sum is: %d", result);

    return 0;
}