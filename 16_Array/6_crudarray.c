#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i, pos, value;

    
    printf("Array Elements:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

   
    printf("\nEnter position to update: ");
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &value);

    a[pos] = value;

    printf("After Update:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    for(int i = pos; i < 4; i++)
    {
        a[i] = a[i + 1];
    }

    printf("After Deletion:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}