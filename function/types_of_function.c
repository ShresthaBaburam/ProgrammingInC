#include <stdio.h>

// Function with no parameters and no return value
void differ() {
    int a = 6;
    int b = 5;
    int diff = a - b;
    printf("%d - %d = %d\n", a, b, diff);
}

// Function with parameters and with no return value
void add(int a, int b) {
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
}

// Function with no parameters but with return value
int divide() {
    int a = 5;
    int b = 4;
    return a / b;
}

// Function with parameters and with return value
int multiply(int x, int y) {
    return x * y;
}

int main() {
    // Example usage of different types of functions
    differ(); // Function with no arameters and with no return value
    add(5, 7); // Function with parameters and with no return value
    int x = 8;
    int y = 5;
    int divs = divide(); // Function with no parameters but with return value
    printf("%d / %d = %d\n", x, y, divs);
    
    int p = 3;
    int q = 4;
    int product = multiply(p, q); // Function with parameters and with return value
    printf("%d * %d = %d\n", p, q, product);
    return 0;
}