//Simple C program (JUSTICE MUCHIRI)
/*
Name: JUSTICE MUCHIRI WANJIKU
Reg no: CT101/G/26422
Date:23/9/2025
Description:Bank Loan Program

*/
#include <stdio.h>
int main() {
    int age;
    float income;

    // prompt user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);
    
    //prompt user to enter annual income 
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
        }else{
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
    }