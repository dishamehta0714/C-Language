#include <stdio.h>

#include <string.h>

int main()
{

    char str1[]="abc";

    char str2[]="efgh";

    int result1=strcmp(str1,str2);

    printf("%d\n",result1);

    int result2 =strcmp(str2,str1);

    printf("%d\n",result2);


    char str3[sizeof(str1)];

    strcpy(str3,str1);

    int result3 = strcmp(str1,str3);


    printf("%d\n",result3);



    return 0;
}