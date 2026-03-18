#include <stdio.h>

int main()
{

    // insertaion progrmm sttic

    char a[5];
    a[0] = 'h';
    a[1] = 'e';
    a[2] = 'l';
    a[3] = 'l';
    a[4] = 'o';

    printf("%c", a[0]);
    printf("%c", a[1]);
    printf("%c", a[2]);
    printf("%c", a[3]);
    printf("%c", a[4]);

    //  insertation dynamic program

    char b[5];

    printf("\nenter element: ");

    scanf("%c", &b[0]);
    scanf("%c", &b[1]);
    scanf("%c", &b[2]);
    scanf("%c", &b[3]);
    scanf("%c", &b[4]);

    printf("%c", b[0]);
    printf("%c", b[1]);
    printf("%c", b[2]);
    printf("%c", b[3]);
    printf("%c", b[4]);

    return 0;
}