// Program to print numbers from 1 to 10:
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    return 0;
}

// Program to find the reverse of a number:
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}


// Program to find the factorial of a number:
#include <stdio.h>

int main() {
    int n, factorial = 1, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d = %d\n", n, factorial);
    return 0;
}

// Program to find the sum of digits of a number:
#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}


// Program to print Fibonacci series up to a given number of terms:
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    while (i < n) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
        i++;
    }
    return 0;
}

