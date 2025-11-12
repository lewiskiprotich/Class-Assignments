/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: Reads all sales amounts from sales.txt,
             calculates the total daily sales, and displays the result.
Date: 6/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, total = 0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening sales.txt file!\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);
    printf("Total Sales for the Day: %.2f\n", total);

    return 0;
}
