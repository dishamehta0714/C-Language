

#include <stdio.h>

int main() {

    char grade;

    printf("Enter your grade:");
    scanf(" %c", &grade);

    if (grade == 'A') {
        printf("Excellent work! You are eligible for the next level.");
    }
    else if (grade == 'B') {
        printf("Well done. You are eligible for the next level.");
    }
    else if (grade == 'C') {
        printf("Good job. You are eligible for the next level.");
    }
    else if (grade == 'D') {
        printf("You are eligible for the next level.");
    }
    else if (grade == 'F') {
        printf("Please try again next time.");
    }
    else {
        printf("Invalid grade entered.");
    }

    return 0;
}
