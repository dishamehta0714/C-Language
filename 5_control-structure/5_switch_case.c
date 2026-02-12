

#include <stdio.h>

int main() {

    char signal;

    printf("Enter signal color (R, Y, G): ");
    scanf(" %c", &signal);

    switch(signal) {

        case 'R':
            printf("Stop");
            break;

        case 'Y':
            printf("prepared to go");
            break;

        case 'G':
            printf("Go");
            break;

        default:
            printf("Invalid Signal Color");
    }

    return 0;
}