#include <stdio.h>

int main()
{
    int row, col;
    int i, j;
    int sum = 0;
    float avg;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    printf("Enter number of columns: ");
    scanf("%d",&col);

    int number[row][col];

    printf("Enter elements:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&number[i][j]);
            sum = sum + number[i][j];
        }
    }

    avg = (float)sum / (row * col);

    printf("Average of an Array: %.2f",avg);

    return 0;
}