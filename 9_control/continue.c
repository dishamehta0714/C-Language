#include <stdio.h>

int main() {

    int i, num;

    printf("Enter last number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {

        if(i % 2 == 0) {
             printf("%d\n", i);
            continue;   
            
        }

       
    }

    return 0;
}