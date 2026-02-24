#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        goto eligible;
    } else {
        goto noteligible;
    }

eligible:
    printf("You are Eligible.");
    return 0;

noteligible:
    printf("You are Not Eligible.");
    return 0;
}