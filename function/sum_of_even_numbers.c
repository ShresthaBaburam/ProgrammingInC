#include <stdio.h>

// Function to calculate the sum of even numbers within a given range
int sumOfEvenNumbers(int start, int end) {
    int sum = 0;
    // Ensure start is even, if not make it even
    if (start % 2 != 0) {
        start++;
    }
    // Iterate from start to end, adding even numbers to sum
    for (int i = start; i <= end; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int start, end;
    printf("Enter the start: ");
    scanf("%d", &start);
    printf("Enter the end: ");
    scanf("%d", &end);
    int result = sumOfEvenNumbers(start, end);
    printf("The sum of even numbers between %d and %d is: %d\n", start, end, result);
    return 0;
}
