

#include <stdio.h>

int main(){


int marks = 90;   

    if (marks >= 90) {
        printf("Grade A");
    }
    else if (marks >= 75) {
        printf("Grade B");
    }
    else if (marks >= 50) {
        printf("Grade C");
    }
    else if (marks >= 35) {
        printf("Grade D");
    }
    else {
        printf("Fail");
    }

    return 0;
}
