#include <stdio.h>
#include <ctype.h>

int main()
{

    char alpha[] = "GOOD";

    char lowerCase[sizeof(alpha)];

    int i;

    for (i = 0; alpha[i] != '\0'; i++)
    {
        lowerCase[i] = tolower(alpha[i]);
    }

    lowerCase[i] = '\0';

    printf("%s", lowerCase);

    return 0;
}