#include <stdio.h>

int main() {
    int number, i;
    int is_prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        printf("%d is not a prime numberber.\n", number);
        return 0;
    }
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime) {
        printf("%d is a prime numberber.\n", number);
    } else {
        printf("%d is not a prime numberber.\n", number);
    }
    return 0;
}

/*
Output 1:
    Enter a positive integer: 11
    11 is a prime numberber.
*/