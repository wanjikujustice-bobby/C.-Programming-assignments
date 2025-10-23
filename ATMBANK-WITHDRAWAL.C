/*
NAME:justtice
REG:CT101|G|26422|25
YEAR: 1
AGE:21 years
GROUP:A COMPUTER SCIENCE
*/


#include <stdio.h>

int main() {
    float balance;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        float withdraw;
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Your account balance is zero or negative. No more withdrawals allowed.\n");

    return 0;
}
