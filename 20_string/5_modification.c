#include <stdio.h>

int main()
{

    // modification static

    char a[5] = {'d', 'i', 's', 'h', 'a'};

    printf("%c", a[0]);
    printf("%c", a[1]);
    printf("%c", a[2]);
    printf("%c", a[3]);
    printf("%c", a[4]);

    a[4] = 'u';

    printf("%c\n", a[4]);

    // string updation

    char b[] = "disha";

    printf("%s", b);

    b[4] = 'u';

    printf("\n%s", b);

    return 0;
}
