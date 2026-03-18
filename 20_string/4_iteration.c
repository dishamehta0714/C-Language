#include <stdio.h>

int main()
{

    // Index-wise static accessing of elements

    char a[4] = {'g', 'o', 'o', 'd'};

    printf("%c", a[0]);
    printf("%c", a[1]);
    printf("%c", a[2]);
    printf("%c", a[3]);

    char b[4] = {'g', 'o', 'o', 'd'};

    int i;

    for (i = 0; i < 4; i++)
    {
        printf("\n%c", a[i]);
    }

    printf("\n");

    // iteration dynamic

    char c[5];

   

    printf("\n enter your element: ");

    for(i = 0;i<5;i++){
        scanf("%c",&c[i]);

         printf("\n%c",c[i]);
    }

   

    return 0;
}