#include <stdio.h>

int main()
{
    int row, col;
    int i, j;

    printf("Enter  rows: ");
    scanf("%d",&row);

    printf("Enter columns: ");
    scanf("%d",&col);

    int a[row][col]; 

    printf("Enter elements A:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     int b[row][col];
    printf("Enter elements  B:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    int sum[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum is:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}