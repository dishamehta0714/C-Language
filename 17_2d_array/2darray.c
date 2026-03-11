#include <stdio.h>

int main()
{
    int a[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("%d ", a[0][0]);
    printf("%d ", a[0][1]);
    printf("%d ", a[0][2]);

    printf("\n");

    printf("%d ", a[1][0]);
    printf("%d ", a[1][1]);
    printf("%d ", a[1][2]);

    return 0;
}