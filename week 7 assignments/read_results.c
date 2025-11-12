#include <stdio.h>
/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: Reads student exam records from a binary file (results.dat) 
       and displays each student’s name, registration number, and total marks.
Date: 6/11/2025
*/
#include <stdlib.h>

struct Student {
    char name[50];
    int reg_no;
    float total_marks;
};

int main() {
    FILE *file;
    struct Student s;

    file = fopen("results.dat", "rb");  // Open for reading in binary mode
    if (file == NULL) {
        printf("Error opening results.dat file!\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", s.name);
        printf("Registration No: %d\n", s.reg_no);
        printf("Total Marks: %.2f\n\n", s.total_marks);
    }

    fclose(file);
    return 0;
}
