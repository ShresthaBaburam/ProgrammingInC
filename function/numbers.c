#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to check if a number is Armstrong
bool isArmstrong(int n) {
    int temp = n, sum = 0, digit;
    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == n;
}

// Function to check if a string is palindrome
bool isPalindrome(const char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - i - 1]))
            return false;
    }
    return true;
}

int main() {
    int num;
    char str[100];

    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    printf("Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    printf("Enter a string to check if it's a palindrome: ");
    scanf(" %[^\n]", str);
    if (isPalindrome(str))
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
