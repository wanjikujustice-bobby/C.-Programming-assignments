/*
NAME:justtice
REG:CT101|G|26422|25
YEAR: 1
AGE:21 years
GROUP:A COMPUTER SCIENCE
*/

#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);

    printf("Total Fare: KSh. %.2f\n", calculateFare(distance));

    return 0;
}