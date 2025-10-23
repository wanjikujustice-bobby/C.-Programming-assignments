/*
NAME:justtice
REG:CT101|G|26422|25
YEAR: 1
AGE:21 years
GROUP:A COMPUTER SCIENCE
*/

#include <stdio.h>

int main() {
    int password;
    int correctPassword = 2361;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != correctPassword) {
            printf("Incorrect password! Try again.\n");
        }

    } while (password != correctPassword);

    printf("Access Granted.\n");

    return 0;
}