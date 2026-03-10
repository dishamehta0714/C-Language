#include<stdio.h>

int main(){
 
    char alpha ='a';

    do
    {
        printf("%c ",alpha);
        alpha = alpha + 4;
    } while (alpha <= 'z');



    return 0;
}