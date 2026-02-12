#include <stdio.h>

int main() {

    int score;

    printf("Enter your score (out of 100): ");
    scanf("%d", &score);

    switch(score / 10) {

        case 10:
        case 9:
            printf("Your grade is A. Excellent work!");
            break;

        case 8:
            printf("Your grade is B. Well done.");
            break;

        case 7:
            printf("Your grade is C. Good job.");
            break;

        case 6:
            printf("Your grade is D. You passed, but you could do better.");
            break;

        case 5:
            printf("Your grade is E. You need improvement.");
            break;

        default:
            printf("Your grade is F. Sorry, you failed.");
    }

    return 0;
}
