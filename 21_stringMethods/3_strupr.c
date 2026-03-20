#include <stdio.h>
#include <ctype.h>

int main()
{

    char alphabet[] = "hello";

    char upperCase[sizeof(alphabet)];

    int i;

    for (i = 0; alphabet[i] != '\0'; i++)
    {
        upperCase[i] = toupper(alphabet[i]);
    }

    upperCase[i] = '\0';

    printf("%s", upperCase);

    return 0;
}