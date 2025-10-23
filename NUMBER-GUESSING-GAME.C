/*
NAME:justtice
REG:CT101|G|26422|25
YEAR: 1
AGE:21 years
GROUP:A COMPUTER SCIENCE
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    secretNumber = (rand() % 20) + 1; // Random number between 1 and 20

    printf("Guess the number between 1 and 20:\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}