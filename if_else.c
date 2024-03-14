#include <stdio.h>

int main() {
    int x = 10;
    int y = 15;
    if (x > y) {
        printf("%d is greater than %d\n", x, y);
    } else {
        printf("%d is greater than %d\n", y, x);
    }

    return 0;
}

/*
Output:
    15 is greater than 10
*/