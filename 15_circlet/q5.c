//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1

#include<stdio.h>

int main()
{
    int n=5;

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            printf("  ");
        }

        for(int k=i;k<=n;k++)
        {
            printf("%d ",k);
        }

        for(int l=n-1;l>=i;l--)
        {
            printf("%d ",l);
        }

        printf("\n");
    }

    return 0;
}