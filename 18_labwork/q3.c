#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j;
    int sum = 0;

    printf("Enter elements:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i + j == 2)
            {
                sum = sum + a[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of an Array: %d",sum);

    return 0;
}    