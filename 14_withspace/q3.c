//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1


#include <stdio.h>

int main()
{
    int n=5;

    for(int i = 5; i >= 1; i--)
    {
        
        for(int k = 1; k <= i - 1; k++)
        {
            printf("  ");
        }

        for(int j = i; j <= n; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}