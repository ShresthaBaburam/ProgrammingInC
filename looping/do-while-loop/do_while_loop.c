// Program to print numbers from 1 to N:
#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d:\n", n);
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);

    return 0;
}


// Program to display Multiplication Table
#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}



// Program to find the factorial of a number:
#include <stdio.h>

int main() {
    int n, i = 1;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    do {
        factorial *= i;
        i++;
    } while (i <= n);
    printf("Factorial of %d = %lld\n", n, factorial);
    return 0;
}


// Sum of Even Numbers up to N
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);
    do {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    } while (i <= n);
    printf("Sum of even numbers up to %d = %d\n", n, sum);
    return 0;
}



// Reverse a Number
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

