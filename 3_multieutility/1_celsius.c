

#include<stdio.h>

int main(){
     
    float celsius,fahrenheit;

     printf("\nThe temparcher in celsius :");

     scanf("%f",&celsius);

     fahrenheit = (9.0/5.0 * celsius ) + 32;

     printf("\n fahrenheit = %.1f",fahrenheit);

    return 0;
}