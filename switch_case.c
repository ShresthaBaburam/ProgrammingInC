#include <stdio.h>

int main() {
    char grade = 'A';
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Fair\n");
            break;
        case 'D':
            printf("Needs Improvement\n");
            break;
        default:
            printf("Invalid Grade\n");
    }
    return 0;
}


/*
Output:
    Excellent
*/