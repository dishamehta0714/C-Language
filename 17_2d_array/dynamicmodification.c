#include <stdio.h>

int main()
{
    int a[3][3];
    int row, col, number;

    printf("Enter 9 elements:\n");
    scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
    scanf("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);
    scanf("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);

    printf("\nBefore Modification:\n");
    printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);
    printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
    printf("%d %d %d\n", a[2][0], a[2][1], a[2][2]);

    printf("\nEnter row to modify : ");
    scanf("%d", &row);

    printf("Enter column to modify : ");
    scanf("%d", &col);

    printf("Enter new number: ");
    scanf("%d", &number);

    a[row][col] = number;

    printf("\nAfter Modification:\n");
    printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);
    printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
    printf("%d %d %d\n", a[2][0], a[2][1], a[2][2]);

    return 0;
}