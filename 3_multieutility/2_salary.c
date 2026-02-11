



#include<stdio.h>

int main(){
   
    float gross,salary,HRA,DA,TA;
     
    printf("gross : ");
    scanf("%f",&gross);

    printf(" HRA : ");
    scanf("%f",&HRA);

    printf(" DA : ");
    scanf("%f",&DA);

    printf("TA : ");
    scanf("%f",&TA);

    salary = gross +(gross * HRA / 100) + (gross * DA / 100) + (gross * TA / 100);

    printf("Gross : Rs. %.2f",salary);

    return 0;


}