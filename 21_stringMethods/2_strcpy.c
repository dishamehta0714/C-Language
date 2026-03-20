#include<stdio.h>
#include<string.h>

int main(){

    char copy[]="hello";

    char copyString[sizeof(copy)];

    strcpy(copyString,copy);

    printf("copyString: %s",copyString);

    return 0;
}