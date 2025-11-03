// 3D array
/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: Program to simulate room occupancy across 3 branches (5 floors, 10 rooms each)
Date: 27/10/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(time(NULL)); 

    for (int b = 0; b < 3; b++) {
        printf("Branch %d:\n", b + 1);
        for (int f = 0; f < 5; f++) {
            int floorOccupied = 0;
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
                if (chain[b][f][r] == 1)
                    floorOccupied++;
            }
            totalOccupied += floorOccupied;
            printf("  Floor %d -> Occupied: %d, Vacant: %d\n", f + 1, floorOccupied, 10 - floorOccupied);
        }
        printf("\n");
    }

    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}