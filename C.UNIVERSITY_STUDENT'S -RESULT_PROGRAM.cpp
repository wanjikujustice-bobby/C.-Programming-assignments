/*
NAME: JUSTICE MUCHIRI WANJIKU
REG:CT101/G/26422/25
YEAR: 1
DEPART: COMPUTER SCIENCE
GROUP: A
*/

#include <stdio.h>

// Step (i): Define a structure for student information
struct Student {
    char name[50];
    char regNo[20];
    int totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    // Step (ii): Open the binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Step (iii): Read and display all student records
    printf("Student Results:\n");
    while (fread(&s, sizeof(s), 1, file)) {
        printf("Name: %s, Marks: %d\n", s.name, s.totalMarks);
    }

    fclose(file);
    return 0;
}