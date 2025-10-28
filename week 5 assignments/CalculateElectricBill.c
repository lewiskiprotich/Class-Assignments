/*
Name: Lewis Kiprotich
Reg No: PA106/g/28738/25
Description: program that calculate the total bill amount according to the units consumed
Date: 20th October 2025
*/

#include <stdio.h>
int main()
{
	float units, totalBill;
	printf("Enter the number of units consumed: ");
	scanf("%f", &units);
	
	if(units<=100){
		totalBill= units * 10;
	}
	else if(units<=200){
		totalBill = (100 * 10) + ((units - 100) * 15);
	}
	else
	{
		totalBill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
	}
	printf("Your total bill is %f\n", totalBill);
	
	return 0;
}