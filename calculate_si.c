#include <stdio.h>
int main() {
    float principal, rate, time, simple_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", simple_interest);
    return 0;
}
/*
Output:
    Enter principal amount: 1000
    Enter rate of interest (in percentage): 10
    Enter time period (in years): 8
    Simple Interest = 800.00
*/