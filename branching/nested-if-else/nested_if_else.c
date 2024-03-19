#include <stdio.h>

int main() {
    int x = 15;
    int y = 20;
    if (x > 5) {
        if (y > 15) {
            printf("x is greater than 5 and y is greater than 15\n");
        } else {
            printf("x is greater than 5 but y is not greater than 15\n");
        }
    } else {
        printf("x is not greater than 5\n");
    }
    return 0;
}


/*
Output:
    x is greater than 5 and y is greater than 15
*/