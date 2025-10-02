/*
Name:Just Muchiri wanjiku 
Reg no:CT101/G/26422/25
Year: 1
Age:20
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt the user to enter water units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if-else conditions
    if (units <= 30) {
        bill = units * 20;
    } 
    else if (units <= 60) {
        bill = (30 * 20) + (units - 30) * 25;
    } 
    else {
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }

    // Display total bill with two decimal places
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}