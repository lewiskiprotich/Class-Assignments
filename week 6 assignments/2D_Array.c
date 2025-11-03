//2D array
/*
Name: Lewis Kiprotich
Reg NO: PA106/G/28738/25
Description: Program to simulate room occupancy for 5 floors (10 rooms each)
Date: 27/10/2025
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    for (int i = 0; i < 5; i++) {
        occupied = vacant = 0;
        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // 0 or 1
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }
	return 0;
}