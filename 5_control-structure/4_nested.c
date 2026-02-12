

#include <stdio.h>

int main() {

    int age = 17;        
    int drivingLicense = 1;       

    if (age >= 18) {

        if (drivingLicense == 1) {
            printf("You are eligible for Driving License.");
        } 
        else {
            printf("You need Apply for parivahanSarthi");
        }

    } 
    else {
        printf("You are not eligible.");
    }

    return 0;
}
