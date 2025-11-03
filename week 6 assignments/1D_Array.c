//1D array
/*
Name: Lewis Kiprotich
Reg NO: PA106/G/28738/25
Description: Program to compute total and average weekly revenue
Date: 27/10/2025
*/

#include <stdio.h>
int main()
{
	float revenue[7], total = 0, average;
	
	for (int i = 0; i<7; i++){
		printf("Enter revenue for day %d: ", i + 1);
		scanf("%f", &revenue[i]);
		total += revenue[i];

	}
	
	average = total /7;
	printf("\n Total weekly Revenue: %.2f\n", total);
	printf("Average Daily Revenue: %.2f\n", average);
	return 0;
}