#include <stdio.h>


int sumArray(int a[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
    int size, i, result;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    result = sumArray(a, size);

    printf("The sum of an array = %d", result);

    return 0;
}