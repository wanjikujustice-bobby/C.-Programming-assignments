/*
NAME:justtice
REG:CT101|G|26422|25
YEAR: 1
AGE:21 years
GROUP:A COMPUTER SCIENCE
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius: %.2f°C\n", convertToCelsius(fahrenheit));

    return 0;
}