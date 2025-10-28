/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: A program that takes in the distance traveled and gives out the total fare.
Date: 20/10/2025
*/

#include <stdio.h>
int main()
{float distance, fare;
	printf("Enter the distance traveled (kilometer): ");
	scanf("%f", &distance );
	
	//rate is ksh50 per kilometer
	fare = distance * 50;
	
	printf("Your total fare is Ksh %.2f\n", fare);
	
	return 0;
}