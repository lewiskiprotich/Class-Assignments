/*
Name: Lewis Kiprotich
Reg No: PA106/G/23738/25
Date: 30th September 2025
Description: water bill calculator program
*/

#include <stdio.h>
int main(){
	int units;
	float bills;
	
	printf("Enter water units consumed: ");
	scanf("%d", &units);
	if (units <=30) {
		bills= units * 20;
	} else if (units <= 60){
		bills = units * 25;
	} else {
		bills = units* 30;
	}
	
	printf("total water bill: %.2f KES\n", bills);
	
	return 0;
}