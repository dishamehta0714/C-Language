

#include <stdio.h>

int main()
{

    int x = 40;

    float y = 60;

    char z = 'p';

    double p = 1431;

    printf("int size %zu\n", sizeof(x));
    printf("float size %zu\n", sizeof(y));
    printf("char size %zu\n", sizeof(z));
    printf("double size %zu\n", sizeof(p));

    printf("int size %d\n", sizeof(x));
    printf("float size %d\n", sizeof(y));
    printf("char size %d\n", sizeof(z));
    printf("double size %d\n", sizeof(p));

    printf("int size %lu\n", sizeof(x));
    printf("float size %lu\n", sizeof(y));
    printf("char size %lu\n", sizeof(z));
    printf("double size %lu\n", sizeof(p));

    return 0;
}