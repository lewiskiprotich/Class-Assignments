/*
Name: Lewis Kiprotich
Reg No: PA106/G/23738/25
Date: 20th September 2025
Description: Loan Qualification Program
A customer qualifies for a loan if:
 - Age is 21 years or over
 - Annual income is at least Sh21,000
*/

#include <stdio.h>

int main() {
    int age;
    float income;

    // Get user input
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}