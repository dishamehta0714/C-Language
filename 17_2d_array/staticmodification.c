#include <stdio.h>

int main()
{
    int a[2][2] = {
        {10, 20},
        {30, 40}
    };

    printf("Before Modification:\n");
    printf("%d %d\n", a[0][0], a[0][1]);
    printf("%d %d\n", a[1][0], a[1][1]);

    a[1][1] = 200;

    printf("\nAfter Modification:\n");
    printf("%d %d\n", a[0][0], a[0][1]);
    printf("%d %d\n", a[1][0], a[1][1]);

    return 0;
}