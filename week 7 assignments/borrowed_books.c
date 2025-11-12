/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: Saves entered book titles to a text file (borrowed_books.txt) without deleting previous records.
Date: 6/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a");  // Append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);  // Read full line including spaces

    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");
    return 0;
}