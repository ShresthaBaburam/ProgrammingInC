/*
while Loop:
    In a while loop, the condition is checked before executing the loop body. 
    If the condition evaluates to false initially, the loop body may not execute at all.
*/

// Printing numbers from 1 to 5 using a while loop:
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    return 0;
}

/*
do-while Loop:
    In a do-while loop, the condition is checked after executing the loop body. 
    This means that the loop body is guaranteed to execute at least once, regardless of the initial condition evaluation.
*/

// Printing numbers from 1 to 5 using a do-while loop:
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}
/*
Key Differences:
    Execution Flow:
        In the while loop, the condition is checked before entering the loop body.
        In the do-while loop, the condition is checked after executing the loop body.
    Guaranteed Execution:
        The while loop may not execute the loop body at all if the initial condition is false.
        The do-while loop guarantees the execution of the loop body at least once, regardless of the initial condition.
*/