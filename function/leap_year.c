#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    // If the year is evenly divisible by 4
    if (year % 4 == 0) {
        // If the year is evenly divisible by 100 and not by 400, it's not a leap year
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1; // Leap year
            else
                return 0; // Not a leap year
        } else {
            return 1; // Leap year
        }
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
