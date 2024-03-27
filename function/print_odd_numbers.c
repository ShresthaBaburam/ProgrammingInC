#include <stdio.h>
// Function prototype
void printOddNumbers(int n);

// Function Definatoin, to generate and print odd numbers up to n
void printOddNumbers(int n) {
    printf("Odd numbers up to %d are: ", n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number (n): ");
    scanf("%d", &n);
    printOddNumbers(n);
    return 0;
}