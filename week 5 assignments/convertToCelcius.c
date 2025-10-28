/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: program that converts temprerature in Fahrenheit to temperature in Celcius
Date: 20/10/2025
*/

#include <stdio.h>
int main()
{
	float fahrenheit, celsius;
	
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	//conversion
	celsius = (fahrenheit-32)*5/9;
	
	//output
	printf("The temperature is %.2f degrees celsius\n", celsius);
	return 0;
}