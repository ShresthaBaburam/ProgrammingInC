#include <stdio.h>

// Function to swap the values of two variables
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    // Call the swap function, passing the addresses of x and y
    swap(&x, &y);
    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}