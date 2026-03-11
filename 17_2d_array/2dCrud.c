#include <stdio.h>

int main()
{
    int a[2][2];
    int i, j;
    int row, col, number;


    printf("Enter 4 elements:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    printf("\nArray Elements:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

  
    printf("\nEnter row and column to update: ");
    scanf("%d %d", &row, &col);

    printf("Enter new value: ");
    scanf("%d", &number);

    a[row][col] = number;

    printf("\nArray After Update:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

  

    return 0;
}