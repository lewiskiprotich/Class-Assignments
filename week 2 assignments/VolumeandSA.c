/*
Name: Lewis Kiprotich
Reg NO: PA106/G/23738/25
Date: 20th September 2025
Descrition: Volume and Surface Area
Volume = pi*r²*h
Surface Area = 2*pi*r²*h + 2*pi*r*h 
 
*/

#include <stdio.h>// printf, scanf, 
#define Pi 3.142
int main()
{
	float radius, height;
	float volume, surfaceArea;
	
	//prompt user for input
	printf("Enter the radius of the cylinder: ");
	scanf("%f", &radius);
	printf("Enter the height of the cylinder: ");
	scanf("%f", &height );
	
	//calculate volume and surface area
	volume = Pi * radius * radius * height;
    surfaceArea = (2 * Pi * radius * radius) + (2 * Pi * radius * height);
	
	//display results
	printf("The Volume is %.2f", volume);
	printf("\n The Surface Area is %.2f", surfaceArea);
	return 0;
}