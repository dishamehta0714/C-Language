#include <stdio.h>

int operation(int a, int b, char op)
{
    if(op == '+')
    {
        return a + b;
    }
    else if(op == '-')
    {
        return a - b;
    }
    else if(op == '*')
    {
        return a * b;
    }
    else if(op == '/')
    {
        return a / b;
    }
    else
    {
        printf("Invalid operation\n");
        return 0;
    }
}

int main()
{
    int num1, num2, result;
    char op;

    printf("Enter Num 1:\n");
    scanf("%d", &num1);

    printf("Enter Num 2:\n");
    scanf("%d", &num2);

    printf("Enter operation (+, -, *, /):\n");
    scanf(" %c", &op);

    result = operation(num1, num2, op);  

    printf("Result = %d", result);

    return 0;
}