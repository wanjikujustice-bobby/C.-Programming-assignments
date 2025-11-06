/*
NAME: JUSTICE MUCHIRI WANJIKU
REG:CT101/G/26422/25
YEAR: 1
DEPART: COMPUTER SCIENCE
GROUP: A
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a"); // open file for appending
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    gets(title); // get title from user

    fprintf(file, "%s\n", title); // write title to file
    fclose(file);

    printf("Book title saved successfully!\n");
    return 0;
}