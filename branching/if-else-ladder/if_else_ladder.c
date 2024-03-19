#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("The number is zero.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}

/*
Output 1:
    Enter a number: -8
    The number is negative.
*/
