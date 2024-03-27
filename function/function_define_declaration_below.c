#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int num1 = 5;
    int num2 = 7;
    // Function calling
    int sum = add(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}