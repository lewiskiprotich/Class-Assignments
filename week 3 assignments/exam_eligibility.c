/*
Name: Lewis Kiprotich
Reg No: PA106/G/23738/25
Date: 29th September 2025
Description: exam eligibility program
*/
#include <stdio.h>
int main(){
	float attendance, average;
	printf("Enter attendance percentage: ");
	scanf("%f", &attendance);
	
	printf("Enter average marks: ");
	scanf("%f", &average);
	
	if (attendance >= 75 & average >= 40) {
		printf("Eligible\n");
	} else {
		printf("Not Eligible \n");
	
	}
	return 0;
}