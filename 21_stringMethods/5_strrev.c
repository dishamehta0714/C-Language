#include<stdio.h>
#include<string.h>

int main(){

    char alphabet[]="heiii good morning";

    char revAlpha[sizeof(alphabet)];

    int length = strlen(alphabet); 

    int i,j;

    for(i=length-1,j=0;i>=0;i--,j++){
        revAlpha[j]= alphabet[i];
    }

    revAlpha[j] ='\0';

    printf("reverse alphabet: %s",revAlpha);



    return 0;
}